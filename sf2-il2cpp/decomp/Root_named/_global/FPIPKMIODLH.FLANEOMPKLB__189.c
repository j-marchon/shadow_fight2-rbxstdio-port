// TypeDefIndex 189
// Namespace: 
// [CompilerGenerated]
// private sealed class FPIPKMIODLH.FLANEOMPKLB
// Fields:
//   public Model model; // 0x10
//   public FPIPKMIODLH <>4__this; // 0x18

// ===== internal bool CDFFNDLGBEE(ModelNode n)  [RVA 0x31171BC]
// FPIPKMIODLH.FLANEOMPKLB$$CDFFNDLGBEE @ RVA 0x31171BC

bool FPIPKMIODLH_FLANEOMPKLB__CDFFNDLGBEE
               (FPIPKMIODLH_FLANEOMPKLB_o *__this,ModelNode_o *n,MethodInfo *method)

{
  bool bVar1;
  FPIPKMIODLH_o *pFVar2;
  Vector3f_o *pCVar3;
  float fVar4;
  
  if (((n != (ModelNode_o *)0x0) &&
      (pCVar3 = (n->fields).CNMHHKAMGPI, pCVar3 != (Vector3f_o *)0x0)) &&
     (pFVar2 = (__this->fields).__4__this, pFVar2 != (FPIPKMIODLH_o *)0x0)) {
    fVar4 = (pCVar3->fields).super.OHHDBINAJCB;
    if ((pFVar2->fields)._FLIJNAGNIMB_k__BackingField <= fVar4) {
      bVar1 = fVar4 <= (pFVar2->fields)._OHGCPINODPO_k__BackingField;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool EOHAEPHCPKF()  [RVA 0x3116E50]
// FPIPKMIODLH.FLANEOMPKLB$$EOHAEPHCPKF @ RVA 0x3116E50

bool FPIPKMIODLH_FLANEOMPKLB__EOHAEPHCPKF(FPIPKMIODLH_FLANEOMPKLB_o *__this,MethodInfo *method)

{
  bool bVar1;
  ModelObject_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *source;
  System_Func_IEFEBEDLHNN__bool__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_TSource__bool__o *predicate;
  undefined8 uVar3;
  Model_o *pOVar4;
  System_Func_IEFEBEDLHNN__bool__o *predicate_00;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045665bf & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<ModelNode>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<ModelNode>__);
    FUN_01bab630(&Method_FPIPKMIODLH_FLANEOMPKLB_CDFFNDLGBEE__);
    FUN_01bab630(&System_Func<ModelNode,_bool>_TypeInfo);
    FUN_01bab630(&Method_FPIPKMIODLH_<>c_JCIGMJKGONI__);
    auVar5 = FUN_01bab630(&FPIPKMIODLH_<>c_TypeInfo);
    DAT_045665bf = 1;
  }
  uVar3 = auVar5._0_8_;
  pOVar4 = (__this->fields).model;
  if ((pOVar4 != (Model_o *)0x0) &&
     (__this_00 = (pOVar4->fields).HMIAFJALFCJ, uVar3 = 0, __this_00 != (ModelObject_o *)0x0)) {
    source = ModelObject__INDHJCEIEAE(__this_00,(MethodInfo *)0x0);
    if ((FPIPKMIODLH_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FPIPKMIODLH_<>c_TypeInfo);
    }
    predicate_00 = FPIPKMIODLH_<>c_TypeInfo->static_fields->__9__27_1;
    if (predicate_00 == (System_Func_IEFEBEDLHNN__bool__o *)0x0) {
      if ((FPIPKMIODLH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FPIPKMIODLH_<>c_TypeInfo);
      }
      predicate_00 = (System_Func_IEFEBEDLHNN__bool__o *)
                     thunk_FUN_01bda818(System_Func<ModelNode,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &FPIPKMIODLH_<>c_TypeInfo->static_fields->__9__27_1;
      *ppSVar2 = predicate_00;
      thunk_FUN_01c20e04(ppSVar2,predicate_00);
    }
    source_00 = System_Linq_Enumerable__Where<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)predicate_00,
                           Method_System_Linq_Enumerable_Where<ModelNode>__);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<ModelNode,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      (source_00,predicate,Method_System_Linq_Enumerable_Any<ModelNode>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar5._8_8_);
}


// ===== public void .ctor()  [RVA 0x3116E48]
// FPIPKMIODLH.FLANEOMPKLB$$.ctor @ RVA 0x3116E48

void FPIPKMIODLH_FLANEOMPKLB___ctor(FPIPKMIODLH_FLANEOMPKLB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

