// FCJBEKHDLAF$$DMDLHJFCICI @ RVA 0x33F1408

void FCJBEKHDLAF__DMDLHJFCICI(FCJBEKHDLAF_o *__this,PEJCGNNAPHG_o *CPECAEHDDDB,MethodInfo *method)

{
  long lVar1;
  DG_Tweening_Core_DOGetter_float__o *pDVar2;
  DG_Tweening_Core_DOSetter_float__o *pDVar3;
  OLKKAIFGGAK_o *pOVar4;
  OLKKAIFGGAK_o *pOVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_04567f0f & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_FCJBEKHDLAF_FDJEPEJBPDH__);
    FUN_01bab630(&Method_FCJBEKHDLAF_KKDMAINDAHO__);
    FUN_01bab630(&Method_FCJBEKHDLAF_OJDKAJDLMPJ__);
    FUN_01bab630(&Method_FCJBEKHDLAF_OKEOONPMDEH__);
    DAT_04567f0f = 1;
  }
  if (CPECAEHDDDB != (PEJCGNNAPHG_o *)0x0) {
    pOVar4 = (CPECAEHDDDB->fields).super._HKPEJNKNEGG_k__BackingField;
    pOVar5 = (__this->fields).LAMENNMGPBN;
    lVar1 = 0x44;
    if (pOVar4 != pOVar5) {
      lVar1 = 0x48;
    }
    fVar6 = *(float *)((long)&CPECAEHDDDB->klass + lVar1);
    pDVar2 = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    pDVar3 = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    fVar7 = (CPECAEHDDDB->fields).NKILLLENJMM;
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    DG_Tweening_DOTween__To(pDVar2,pDVar3,fVar6,fVar7,(MethodInfo *)0x0);
    lVar1 = 0x48;
    if (pOVar4 != pOVar5) {
      lVar1 = 0x44;
    }
    fVar6 = *(float *)((long)&CPECAEHDDDB->klass + lVar1);
    pDVar2 = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    pDVar3 = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    fVar7 = (CPECAEHDDDB->fields).NKILLLENJMM;
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    DG_Tweening_DOTween__To(pDVar2,pDVar3,fVar6,fVar7,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

