//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/optimizer/rule/in_clause_simplification.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/optimizer/rule.hpp"

namespace duckdb {

// The in clause simplification rule rewrites cases where left is a column ref with a cast and right are constant values
class InClauseSimplificationRule : public Rule {
public:
	InClauseSimplificationRule(ExpressionRewriter &rewriter);

	unique_ptr<Expression> Apply(LogicalOperator &op, vector<Expression *> &bindings, bool &changes_made) override;
};

} // namespace duckdb
