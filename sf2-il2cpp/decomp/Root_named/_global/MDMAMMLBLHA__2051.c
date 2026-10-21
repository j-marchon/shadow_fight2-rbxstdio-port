// TypeDefIndex 2051
// Namespace: 
// [Extension]
// public static class MDMAMMLBLHA
// Fields:

// ===== public static void JKOOMOGBEGH(POIMHOOPGIP IMLCKIOGJAG)  [RVA 0x32B51FC]
// MDMAMMLBLHA$$JKOOMOGBEGH @ RVA 0x32B51FC

/* WARNING: Type propagation algorithm not settling */

void MDMAMMLBLHA__JKOOMOGBEGH(POIMHOOPGIP_o *IMLCKIOGJAG,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_Type_o *pSVar3;
  OMOBOPOEBGH_o *pOVar4;
  MethodInfo *extraout_x1;
  System_RuntimeTypeHandle_Fields *pSVar5;
  System_RuntimeTypeHandle_o SVar6;
  long lVar7;
  
  if ((DAT_0456744b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<EFJEDMCMKOB>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<FMNPEJKMBMB>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<EventTrackerAggregator>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<MEKONFPICFH>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<OFHNGNKMJGM>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<OGFKOHEPEAK>__);
    DAT_0456744b = 1;
    method = extraout_x1;
  }
  lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<OGFKOHEPEAK>__;
  pSVar5 = *(System_RuntimeTypeHandle_Fields **)
            (Method_EGICHKIAAGK_BJNHCHILEMM<OGFKOHEPEAK>__ + 0x38);
  if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
    FUN_01bab630(&System_Type_TypeInfo,method);
    pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
    if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
      FUN_01b8167c(lVar1);
      pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
    }
  }
  SVar6.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  pOVar4 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar3,1,0);
  if (pOVar4 != (OMOBOPOEBGH_o *)0x0) {
    OMOBOPOEBGH__BEBKKFGLNFE(pOVar4,(MethodInfo *)0x0);
    BFAEMDAPOBD__HBGEHJCEIFL(IMLCKIOGJAG,(MethodInfo *)0x0);
    BHIKBKGMMNK__KGNIBJINGFA(IMLCKIOGJAG,(MethodInfo *)0x0);
    lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<EventTrackerAggregator>__;
    pSVar5 = *(System_RuntimeTypeHandle_Fields **)
              (Method_EGICHKIAAGK_BJNHCHILEMM<EventTrackerAggregator>__ + 0x38);
    if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
      FUN_01bab630(&System_Type_TypeInfo);
      pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
      if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
        FUN_01b8167c(lVar1);
        pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
      }
    }
    SVar6.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
    pOVar4 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar3,1,0);
    if (pOVar4 != (OMOBOPOEBGH_o *)0x0) {
      OMOBOPOEBGH__BEBKKFGLNFE(pOVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<OFHNGNKMJGM>__;
      if ((iVar2 == 0xb) || (lVar7 = Method_EGICHKIAAGK_BJNHCHILEMM<EFJEDMCMKOB>__, iVar2 == 8)) {
        pSVar5 = *(System_RuntimeTypeHandle_Fields **)
                  (Method_EGICHKIAAGK_BJNHCHILEMM<OFHNGNKMJGM>__ + 0x38);
        if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
          FUN_01bab630(&System_Type_TypeInfo);
          pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
          if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
            FUN_01b8167c(lVar1);
            pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
          }
        }
        SVar6.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
        if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
        pOVar4 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar3,1,0);
        if (pOVar4 == (OMOBOPOEBGH_o *)0x0) goto LAB_033b551c;
        OMOBOPOEBGH__BEBKKFGLNFE(pOVar4,(MethodInfo *)0x0);
        lVar7 = Method_EGICHKIAAGK_BJNHCHILEMM<FMNPEJKMBMB>__;
      }
      pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar7 + 0x38);
      if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
        FUN_01bab630(&System_Type_TypeInfo);
        pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar7 + 0x38);
        if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
          FUN_01b8167c(lVar7);
          pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar7 + 0x38);
        }
      }
      SVar6.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
      pOVar4 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar3,1,0);
      if (pOVar4 != (OMOBOPOEBGH_o *)0x0) {
        OMOBOPOEBGH__BEBKKFGLNFE(pOVar4,(MethodInfo *)0x0);
        lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<MEKONFPICFH>__;
        pSVar5 = *(System_RuntimeTypeHandle_Fields **)
                  (Method_EGICHKIAAGK_BJNHCHILEMM<MEKONFPICFH>__ + 0x38);
        if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
          FUN_01bab630(&System_Type_TypeInfo);
          pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
          if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
            FUN_01b8167c(lVar1);
            pSVar5 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
          }
        }
        SVar6.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
        if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
        pOVar4 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar3,1,0);
        if (pOVar4 != (OMOBOPOEBGH_o *)0x0) {
          OMOBOPOEBGH__BEBKKFGLNFE(pOVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033b551c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

