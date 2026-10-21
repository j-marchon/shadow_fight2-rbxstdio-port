// TypeDefIndex 958
// Namespace: Nekki.SF2.GUI.Dialogs
// public class LocalDailyProgressDialog : BaseDialog
// Fields:
//   private ProgressBar _taskProgressBar; // 0xC8
//   private LabelAlias _taskTitleLbl; // 0xD0
//   private LabelAlias _taskProgressLbl; // 0xD8
//   private LabelButton _btnOpenLocalDailyDialog; // 0xE0
//   private CanvasGroup[] _layouts; // 0xE8
//   private int NEPGJMMDEKL; // 0xF0
//   private LocalDailyQuestInfo PLOJDGGJEKO; // 0xF8
//   private OPHDIHJPHDE MPPGJCKPDFD; // 0x100
//   private int CICGCNCOOPC; // 0x108
//   private int ICHKFPCGDDF; // 0x10C
//   private float LNMPPDLMKAF; // 0x110
//   private int MKFJGPMCCHE; // 0x114
//   private float LFAEONCHFPB; // 0x118

// ===== public void CloseDialog()  [RVA 0x30AD3A4]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$CloseDialog @ RVA 0x30AD3A4

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__CloseDialog
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x031ad3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x30AD3B4]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$Init @ RVA 0x30AD3B4

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__Init
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  if ((DAT_045661b5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661b5 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,StringLiteral_9679/*"OK"*/,
             StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  return;
}


// ===== private void Update()  [RVA 0x30AD43C]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$Update @ RVA 0x30AD43C

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__Update
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields).LNMPPDLMKAF < fVar1) {
                    /* WARNING: Could not recover jumptable at 0x031ad46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
  Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EIFGCFOKAND(__this,method_00);
  return;
}


// ===== public void OpenDailyDialog()  [RVA 0x30AD618]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$OpenDailyDialog @ RVA 0x30AD618

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__OpenDailyDialog
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  JJPNLEPEAFM__EJHGILFOFBE((MethodInfo *)0x0);
  return;
}


// ===== private void IEMHHMLMKAB()  [RVA 0x30AD638]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$IEMHHMLMKAB @ RVA 0x30AD638

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__IEMHHMLMKAB
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppObject *arg1;
  ProgressBar_o *pPVar3;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *str2;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar4;
  OPHDIHJPHDE_o *pOVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_String_o *pSVar7;
  int32_t local_34;
  undefined8 local_28;
  
  if ((DAT_045661b6 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_22458/*"{0}{{{1}}}"*/);
    DAT_045661b6 = 1;
  }
  local_28 = 0;
  pCVar4 = (__this->fields).PLOJDGGJEKO;
  if (pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
    pSVar7 = (pCVar4->fields)._Title_k__BackingField;
    local_34 = (pCVar4->fields)._AdsTargetCount_k__BackingField;
    pNVar6 = (__this->fields)._taskTitleLbl;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar7 = System_String__Format
                       (StringLiteral_22458/*"{0}{{{1}}}"*/,(Il2CppObject *)pSVar7,arg1,(MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,pSVar7,(MethodInfo *)0x0);
      pPVar3 = (__this->fields)._taskProgressBar;
      if ((pPVar3 != (ProgressBar_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        pOVar5 = (__this->fields).MPPGJCKPDFD;
        if ((pOVar5 != (OPHDIHJPHDE_o *)0x0) &&
           (pCVar4 = (__this->fields).PLOJDGGJEKO,
           pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0)) {
          iVar1 = (pOVar5->fields)._PKGCKALOMOF_k__BackingField;
          iVar2 = (pCVar4->fields)._AdsTargetCount_k__BackingField;
          if (iVar2 <= iVar1) {
            iVar1 = iVar2;
          }
          local_28 = CONCAT44(iVar1,iVar2);
          pPVar3 = (__this->fields)._taskProgressBar;
          if (pPVar3 != (ProgressBar_o *)0x0) {
            (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,(float)iVar2,pPVar3,(pPVar3->klass->vtable)._11_SetValueBorders.method);
            pPVar3 = (__this->fields)._taskProgressBar;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._8_SetValue.methodPtr)
                        ((float)iVar1,0,pPVar3,0,(pPVar3->klass->vtable)._8_SetValue.method);
              pNVar6 = (__this->fields)._taskProgressLbl;
              pSVar7 = System_Int32__ToString((int)&local_28 + 4,(MethodInfo *)0x0);
              str2 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
              pSVar7 = System_String__Concat(pSVar7,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                          (pNVar6,pSVar7,(pNVar6->klass->vtable)._75_set_text.method);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EIFGCFOKAND()  [RVA 0x30AD47C]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$EIFGCFOKAND @ RVA 0x30AD47C

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EIFGCFOKAND
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  System_Action_CanvasGroup__o **ppSVar4;
  int iVar5;
  UnityEngine_CanvasGroup_array *pUVar6;
  System_Action_CanvasGroup__o *CPECAEHDDDB;
  float fVar7;
  float fVar8;
  
  if ((DAT_045661b7 & 1) == 0) {
    FUN_01bab630(&System_Action<CanvasGroup>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<CanvasGroup>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_ALHNLFAEKKF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo);
    DAT_045661b7 = 1;
  }
  iVar5 = (__this->fields).MKFJGPMCCHE;
  if (-1 < iVar5) {
    fVar8 = (__this->fields).LFAEONCHFPB;
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (fVar7 < fVar8) {
      return;
    }
    iVar5 = (__this->fields).MKFJGPMCCHE;
  }
  pUVar6 = (__this->fields)._layouts;
  iVar5 = iVar5 + 1;
  (__this->fields).MKFJGPMCCHE = iVar5;
  if (pUVar6 != (UnityEngine_CanvasGroup_array *)0x0) {
    iVar1 = (int)pUVar6->max_length;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar5 / iVar1;
    }
    (__this->fields).MKFJGPMCCHE = iVar5 - iVar3 * iVar1;
    if ((Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CPECAEHDDDB = Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->static_fields->
                  __9__21_0;
    if (CPECAEHDDDB == (System_Action_CanvasGroup__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CPECAEHDDDB = (System_Action_CanvasGroup__o *)
                    thunk_FUN_01bda818(System_Action<CanvasGroup>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->static_fields->
                 __9__21_0;
      *ppSVar4 = CPECAEHDDDB;
      thunk_FUN_01c20e04(ppSVar4,CPECAEHDDDB);
    }
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)pUVar6,
               (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<CanvasGroup>__);
    pUVar6 = (__this->fields)._layouts;
    if (pUVar6 != (UnityEngine_CanvasGroup_array *)0x0) {
      uVar2 = (__this->fields).MKFJGPMCCHE;
      if ((uint)pUVar6->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pUVar6->m_Items[(int)uVar2] != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(pUVar6->m_Items[(int)uVar2],1.0,(MethodInfo *)0x0);
        fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields).LFAEONCHFPB = fVar7 + (float)(__this->fields).CICGCNCOOPC;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void InitData(int PDGNNLOGNDJ)  [RVA 0x30AD7D8]
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


// ===== public void .ctor()  [RVA 0x30AD984]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$.ctor @ RVA 0x30AD984

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog___ctor
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  (__this->fields).CICGCNCOOPC = 2;
  (__this->fields).ICHKFPCGDDF = 4;
  (__this->fields).LNMPPDLMKAF = -1.0;
  (__this->fields).MKFJGPMCCHE = -1;
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x30AD9A4]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$GKPJMHOFIOO @ RVA 0x30AD9A4

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__IEMHHMLMKAB(__this,method_00);
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x30AD9C0]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$IGDDKJJMDLP @ RVA 0x30AD9C0

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x30AD9C4]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$EJHAPHAHMHG @ RVA 0x30AD9C4

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).super._header;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FBMFGKEPBEN(OPHDIHJPHDE LFINFBNOLFG)  [RVA 0x30AD9F0]
// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$FBMFGKEPBEN @ RVA 0x30AD9F0

bool Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__FBMFGKEPBEN
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,OPHDIHJPHDE_o *LFINFBNOLFG,
               MethodInfo *method)

{
  if (LFINFBNOLFG != (OPHDIHJPHDE_o *)0x0) {
    return (LFINFBNOLFG->fields)._MDAJFAPLLOH_k__BackingField == (__this->fields).NEPGJMMDEKL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

