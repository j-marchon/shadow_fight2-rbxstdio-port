// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$InitData @ RVA 0x30AD7D8

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__InitData
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,int32_t PDGNNLOGNDJ,
               MethodInfo *method)

{
  KEIAEKNFNNA_o *__this_00;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *source;
  System_Func_TSource__bool__o *predicate;
  OPHDIHJPHDE_o *pOVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  float fVar3;
  undefined8 uVar4;
  
  if ((DAT_045661b8 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
    FUN_01bab630(&System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<LocalDailyConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_FBMFGKEPBEN__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661b8 = 1;
  }
  (__this->fields).NEPGJMMDEKL = PDGNNLOGNDJ;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    source = KEIAEKNFNNA__CFGOMKKHOML(__this_00,(MethodInfo *)0x0);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pOVar1 = (OPHDIHJPHDE_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
    (__this->fields).MPPGJCKPDFD = pOVar1;
    thunk_FUN_01c20e04(&(__this->fields).MPPGJCKPDFD);
    pOVar1 = (__this->fields).MPPGJCKPDFD;
    if (pOVar1 != (OPHDIHJPHDE_o *)0x0) {
      (__this->fields).PLOJDGGJEKO = (pOVar1->fields)._DMCIAIBPJGN_k__BackingField;
      thunk_FUN_01c20e04();
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<LocalDailyConfig>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        uVar4 = *(undefined8 *)((long)&pIVar2[1].klass + 4);
        (__this->fields).CICGCNCOOPC = (int)uVar4;
        (__this->fields).ICHKFPCGDDF = (int)((ulong)uVar4 >> 0x20);
        fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields).LNMPPDLMKAF = fVar3 + (float)(__this->fields).ICHKFPCGDDF;
        Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EIFGCFOKAND(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

