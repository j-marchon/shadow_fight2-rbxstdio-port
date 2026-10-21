// TypeDefIndex 539
// Namespace: 
// [Extension]
// public static class LDOABNMKOEO
// Fields:

// ===== public static void OHFKLIBLIAF(POIMHOOPGIP IMLCKIOGJAG)  [RVA 0x359AF34]
// LDOABNMKOEO$$OHFKLIBLIAF @ RVA 0x359AF34

/* WARNING: Type propagation algorithm not settling */

void LDOABNMKOEO__OHFKLIBLIAF(POIMHOOPGIP_o *IMLCKIOGJAG,MethodInfo *method)

{
  int32_t iVar1;
  System_Type_o *pSVar2;
  OMOBOPOEBGH_o *__this;
  MethodInfo *extraout_x1;
  long *plVar3;
  System_RuntimeTypeHandle_Fields *pSVar4;
  long lVar5;
  System_RuntimeTypeHandle_o handle;
  
  if ((DAT_04568dc3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<EDPOPBABBHB>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<ATTHandler>__);
    DAT_04568dc3 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 == 8) {
    plVar3 = &Method_EGICHKIAAGK_BJNHCHILEMM<ATTHandler>__;
  }
  else {
    plVar3 = &Method_EGICHKIAAGK_BJNHCHILEMM<EDPOPBABBHB>__;
  }
  lVar5 = *plVar3;
  pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar5 + 0x38);
  if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
    FUN_01bab630(&System_Type_TypeInfo);
    pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar5 + 0x38);
    if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
      FUN_01b8167c(lVar5);
      pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar5 + 0x38);
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar4->value;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  __this = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar2,1,0);
  if (__this != (OMOBOPOEBGH_o *)0x0) {
    OMOBOPOEBGH__BEBKKFGLNFE(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

