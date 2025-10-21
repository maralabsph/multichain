#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "torque-generated/builtins-base-from-dsl-gen.h"
#include "torque-generated/builtins-arguments-from-dsl-gen.h"
#include "torque-generated/builtins-array-from-dsl-gen.h"
#include "torque-generated/builtins-collections-from-dsl-gen.h"
#include "torque-generated/builtins-data-view-from-dsl-gen.h"
#include "torque-generated/builtins-object-from-dsl-gen.h"
#include "torque-generated/builtins-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-from-dsl-gen.h"
#include "torque-generated/builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo ArgumentsBuiltinsFromDSLAssembler::GetArgumentsFrameAndCount(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT, RawPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, BInt, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadParentFramePointer());
    compiler::TNode<SharedFunctionInfo> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<SharedFunctionInfo>(CodeStubAssembler(state_).LoadJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction>{tmp1}));
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo>{tmp3}));
    compiler::TNode<BInt> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint7ATint32(compiler::TNode<Int32T>{tmp4}));
    compiler::TNode<RawPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadCallerFromFrame(compiler::TNode<RawPtrT>{tmp2}));
    compiler::TNode<RawPtrT> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast23ATArgumentsAdaptorFrame(compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp6}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp5, tmp5, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, tmp5, tmp6);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSFunction> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<SharedFunctionInfo> tmp11;
    compiler::TNode<BInt> tmp12;
    compiler::TNode<BInt> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSFunction> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<SharedFunctionInfo> tmp18;
    compiler::TNode<BInt> tmp19;
    compiler::TNode<BInt> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block2, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp22);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSFunction> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<SharedFunctionInfo> tmp26;
    compiler::TNode<BInt> tmp27;
    compiler::TNode<BInt> tmp28;
    ca_.Bind(&block3, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block1, tmp25, tmp28, tmp27);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSFunction> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<SharedFunctionInfo> tmp32;
    compiler::TNode<BInt> tmp33;
    compiler::TNode<BInt> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    ca_.Bind(&block2, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    compiler::TNode<Smi> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadLengthFromAdapterFrame(compiler::TNode<Context>{tmp29}, compiler::TNode<RawPtrT>{tmp35}));
    compiler::TNode<BInt> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint5ATSmi(compiler::TNode<Smi>{tmp36}));
    ca_.Goto(&block1, tmp35, tmp37, tmp33);
  }

    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<BInt> tmp39;
    compiler::TNode<BInt> tmp40;
    ca_.Bind(&block1, &tmp38, &tmp39, &tmp40);
  return ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo{compiler::TNode<RawPtrT>{tmp38}, compiler::TNode<BInt>{tmp39}, compiler::TNode<BInt>{tmp40}};
}

}  // namespace internal
}  // namespace v8

