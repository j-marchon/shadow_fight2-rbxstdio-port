// TypeDefIndex 145
// Namespace: Nekki.SF2.GUI.Dialogs
// public class SimpleDialog : BaseDialog
// Fields:
//   private const int MAIEAHIHLNO = 100;
//   private const int BHLGICDLDBE = -20;
//   private const float CNBGAIFJGMC = 1680;
//   private const float PNEGFGEKONC = 1100;
//   private const float EAHLNHHFAEO = 60;
//   private const float IPLHEJMGHFA = -20;
//   private const float MCAFPGMKFPJ = 100;
//   private const float KPIEANCNPGB = -20;
//   private const int GPKDPJFMHAL = 103;
//   private LabelAlias _label; // 0xC8
//   private LabelAlias _checkBoxLabel; // 0xD0
//   private Toggle _checkBox; // 0xD8
//   private Action<object> DNPHBCPFMPB; // 0xE0
//   private string DHHJFNPJFLF; // 0xE8
//   private bool ENHHJMDENNI; // 0xF0
//   private bool <ANLOMDKGOND>k__BackingField; // 0xF1
//   private bool PKGLLMLHGPC; // 0xF2
//   private string JKBAACEKGJF; // 0xF8
//   public bool RepositionCheckbox_X; // 0x100
//   public bool RepositionCheckbox_Y; // 0x101
//   public Vector2 AdditionalTextSize; // 0x104
//   private float FJBAGGCNDLF; // 0x10C

// ===== protected override void ACICKHKFILK(LabelButton LGHOMHOPNEP, BaseDialog.OFBBBIDKKOD JFLAKNAGBEL)  [RVA 0x301E084]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$ACICKHKFILK @ RVA 0x301E084

void Nekki_SF2_GUI_Dialogs_SimpleDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t JFLAKNAGBEL,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Action_object__o *pSVar2;
  bool_conflict *pbVar3;
  System_String_o **ppSVar4;
  int32_t *piVar5;
  System_String_o *CJNHFNHJHPE;
  int32_t iVar6;
  
  if ((DAT_04565c2d & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c2d = 1;
  }
  CJNHFNHJHPE = StringLiteral_1/*""*/;
  if (JFLAKNAGBEL == 1) {
    pbVar3 = &(__this->fields).super.AHHAONPHEPD;
    ppSVar4 = &(__this->fields).super.NIEHEOKFPAN;
    piVar5 = &(__this->fields).super.FKKACPDDADI;
    iVar6 = 1;
LAB_0311e0fc:
    if (LGHOMHOPNEP == (LabelButton_o *)0x0) goto LAB_0311e1e8;
    CJNHFNHJHPE = *ppSVar4;
    bVar1 = *pbVar3;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,*piVar5,(MethodInfo *)0x0);
    if (bVar1 != false) goto LAB_0311e154;
    LabelButton__set_Text(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  else {
    if (JFLAKNAGBEL == 2) {
      iVar6 = 0;
      pbVar3 = &(__this->fields).super.KJLEAJNIFPA;
      ppSVar4 = &(__this->fields).super.LLBBHINDIDB;
      piVar5 = &(__this->fields).super.FHLAKGNIFAF;
      goto LAB_0311e0fc;
    }
    if (LGHOMHOPNEP == (LabelButton_o *)0x0) goto LAB_0311e1e8;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,1,(MethodInfo *)0x0);
    iVar6 = 0;
LAB_0311e154:
    LabelButton__set_Alias(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  (LGHOMHOPNEP->fields).super.super.ButtonId = iVar6;
  pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  if (__this != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
    System_Action<object>___ctor();
    SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    return;
  }
LAB_0311e1e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x301E1EC]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$Init @ RVA 0x301E1EC

void Nekki_SF2_GUI_Dialogs_SimpleDialog__Init
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *GKLEODLEPMA;
  int32_t DNBBBGEENMM;
  System_String_o **ppSVar2;
  
  if ((DAT_04565c2e & 1) == 0) {
    FUN_01bab630(&LKEEMMPKJKK_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c2e = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (LKEEMMPKJKK_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)LKEEMMPKJKK_TypeInfo)) {
      (__this->fields).super.NIEHEOKFPAN = (System_String_o *)IMMNELPBGIF[3].klass;
      thunk_FUN_01c20e04();
      (__this->fields).super.FKKACPDDADI = *(int32_t *)((long)&IMMNELPBGIF[4].monitor + 4);
      (__this->fields).super.AHHAONPHEPD = *(bool_conflict *)&IMMNELPBGIF[3].monitor;
      (__this->fields).super.LLBBHINDIDB = (System_String_o *)IMMNELPBGIF[4].klass;
      thunk_FUN_01c20e04();
      (__this->fields).super.FHLAKGNIFAF = *(int32_t *)&IMMNELPBGIF[5].klass;
      (__this->fields).super.KJLEAJNIFPA = *(bool_conflict *)&IMMNELPBGIF[4].monitor;
      (__this->fields).DNPHBCPFMPB = (System_Action_object__o *)IMMNELPBGIF[6].klass;
      thunk_FUN_01c20e04();
      (__this->fields).DHHJFNPJFLF = (System_String_o *)IMMNELPBGIF[2].klass;
      thunk_FUN_01c20e04();
      (__this->fields).ENHHJMDENNI = *(bool_conflict *)&IMMNELPBGIF[2].monitor;
      (__this->fields)._ANLOMDKGOND_k__BackingField =
           *(bool_conflict *)((long)&IMMNELPBGIF[5].klass + 4);
      (__this->fields).PKGLLMLHGPC = *(bool_conflict *)((long)&IMMNELPBGIF[5].klass + 5);
      ppSVar2 = &(__this->fields).JKBAACEKGJF;
      *ppSVar2 = IMMNELPBGIF[5].monitor;
      thunk_FUN_01c20e04(ppSVar2);
      GKLEODLEPMA = IMMNELPBGIF[1].klass;
      (__this->fields).super.FCBFEJDLODF = *(bool_conflict *)&IMMNELPBGIF[1].monitor;
      DNBBBGEENMM = *(int32_t *)((long)&IMMNELPBGIF[2].monitor + 4);
      goto LAB_0311e274;
    }
  }
  DNBBBGEENMM = 0;
  GKLEODLEPMA = StringLiteral_1/*""*/;
LAB_0311e274:
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(System_String_o *)GKLEODLEPMA,
             (__this->fields).super.NIEHEOKFPAN,(__this->fields).super.LLBBHINDIDB,DNBBBGEENMM,
             (MethodInfo *)0x0);
  return;
}


// ===== private void LGCEFKBHGIC(bool CJNHFNHJHPE)  [RVA 0x301E334]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$LGCEFKBHGIC @ RVA 0x301E334

void Nekki_SF2_GUI_Dialogs_SimpleDialog__LGCEFKBHGIC
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ANLOMDKGOND_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void DGNHKEIFFMP()  [RVA 0x301E340]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$DGNHKEIFFMP @ RVA 0x301E340

void Nekki_SF2_GUI_Dialogs_SimpleDialog__DGNHKEIFFMP
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  undefined4 extraout_var;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565c2f & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565c2f = 1;
    method = extraout_x1;
  }
  fVar2 = Nekki_SF2_GUI_Dialogs_SimpleDialog__IJEDDPJEHCH(__this,method);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = System_Math__Max(fVar2,1100.0,(MethodInfo *)0x0);
  fVar2 = System_Math__Min(fVar2,1680.0,(MethodInfo *)0x0);
  (__this->fields).FJBAGGCNDLF = fVar2;
  Nekki_SF2_GUI_Dialogs_SimpleDialog__LPOJJPJFMOI(__this,method_00);
  __this_00 = (__this->fields).super._content;
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      __this_01 != (UnityEngine_RectTransform_o *)0x0)) &&
     (__this_01->klass == UnityEngine_RectTransform_TypeInfo)) {
    fVar2 = (__this->fields).AdditionalTextSize.fields.x;
    fVar4 = (__this->fields).AdditionalTextSize.fields.y;
    UVar5 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._label;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      fVar3 = (float)(*(pNVar1->klass->vtable)._82_get_preferredHeight.methodPtr)
                               (CONCAT44(extraout_var,UVar5.fields.m_XMin),UVar5.fields.m_YMin,
                                UVar5.fields.m_Width,UVar5.fields.m_Height,pNVar1,
                                (pNVar1->klass->vtable)._82_get_preferredHeight.method);
      value.fields.y = fVar4 + fVar3;
      value.fields.x = fVar2 + UVar5.fields.m_Width;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Start()  [RVA 0x301E688]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$Start @ RVA 0x301E688

void Nekki_SF2_GUI_Dialogs_SimpleDialog__Start
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_UI_Toggle_o *pUVar4;
  
  if ((DAT_04565c30 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c30 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__Start
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._label;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311e7e4;
    CJNHFNHJHPE = (__this->fields).DHHJFNPJFLF;
    if ((__this->fields).ENHHJMDENNI == false) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,CJNHFNHJHPE,(pNVar3->klass->vtable)._75_set_text.method);
    }
    else {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields)._checkBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = (__this->fields)._checkBox;
    if ((pUVar4 == (UnityEngine_UI_Toggle_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0311e7e4;
    UnityEngine_GameObject__SetActive
              (pUVar2,(__this->fields)._ANLOMDKGOND_k__BackingField,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._checkBoxLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._checkBoxLabel;
    if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0311e7e4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive
              (pUVar2,(__this->fields)._ANLOMDKGOND_k__BackingField,(MethodInfo *)0x0);
  }
  if ((__this->fields)._ANLOMDKGOND_k__BackingField != false) {
    Nekki_SF2_GUI_Dialogs_SimpleDialog__BAFEFLKGNPG
              (__this,(__this->fields).PKGLLMLHGPC,(__this->fields).JKBAACEKGJF,in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x0311e7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._36_FMJHHEJDAKI.methodPtr)
            (__this,(__this->klass->vtable)._36_FMJHHEJDAKI.method);
  return;
}


// ===== public LabelAlias get_Text()  [RVA 0x301EB44]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$get_Text @ RVA 0x301EB44

Nekki_SF2_GUI_LabelAlias_o *
Nekki_SF2_GUI_Dialogs_SimpleDialog__get_Text
          (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._label;
}


// ===== private void LPOJJPJFMOI()  [RVA 0x301E540]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$LPOJJPJFMOI @ RVA 0x301E540

void Nekki_SF2_GUI_Dialogs_SimpleDialog__LPOJJPJFMOI
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  LabelButton_o *pLVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_04565c31 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04565c31 = 1;
  }
  iVar1 = (__this->fields).super.JOLPNMNNKCJ;
  if (iVar1 == 1) {
    pLVar2 = (__this->fields).super._btnOK;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      pLVar2 = (__this->fields).super._btnOK;
      if ((pLVar2 == (LabelButton_o *)0x0) ||
         (pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pLVar2,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311e640;
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnCancel;
      if ((pLVar2 == (LabelButton_o *)0x0) ||
         (pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pLVar2,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311e640;
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnCancel;
      if (pLVar2 == (LabelButton_o *)0x0) goto LAB_0311e640;
      fVar5 = (__this->fields).FJBAGGCNDLF;
      fVar7 = UVar9.fields.m_Width * 0.5;
      fVar6 = ((fVar5 - UVar8.fields.m_Width) - UVar9.fields.m_Width) / 3.0;
      fVar5 = fVar7 + (fVar6 - fVar5 * 0.5);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar5,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnOK;
      if (pLVar2 == (LabelButton_o *)0x0) goto LAB_0311e640;
      fVar5 = fVar5 + UVar8.fields.m_Width * 0.5 + fVar7 + fVar6;
      goto LAB_0311e650;
    }
    pLVar2 = (__this->fields).super._btnCancel;
  }
  if (pLVar2 == (LabelButton_o *)0x0) {
LAB_0311e640:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar5 = 0.0;
LAB_0311e650:
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0)
  ;
  UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar5,(MethodInfo *)0x0);
  return;
}


// ===== public void SetContentTextFontSize(int NJBICBHLOMO)  [RVA 0x301EB4C]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$SetContentTextFontSize @ RVA 0x301EB4C

void Nekki_SF2_GUI_Dialogs_SimpleDialog__SetContentTextFontSize
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,int32_t NJBICBHLOMO,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields)._label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_UseLabelFontSize(pNVar1,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._label;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,NJBICBHLOMO,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void POMMKJGKPGI(bool CJNHFNHJHPE)  [RVA 0x301EB90]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$POMMKJGKPGI @ RVA 0x301EB90

void Nekki_SF2_GUI_Dialogs_SimpleDialog__POMMKJGKPGI
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_object__o *pSVar2;
  undefined4 local_24;
  
  if ((DAT_04565c32 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04565c32 = 1;
  }
  pSVar2 = (__this->fields).DNPHBCPFMPB;
  if (pSVar2 != (System_Action_object__o *)0x0) {
    local_24 = 3;
    if (!CJNHFNHJHPE) {
      local_24 = 4;
    }
    uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,uVar1,(pSVar2->fields).super.super.method);
  }
  return;
}


// ===== protected virtual void GIBFNEDCKNE()  [RVA 0x301EC18]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$GIBFNEDCKNE @ RVA 0x301EC18

void Nekki_SF2_GUI_Dialogs_SimpleDialog__GIBFNEDCKNE
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Toggle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  LabelButton_o *pLVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_04565c33 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c33 = 1;
  }
  pUVar2 = (__this->fields).super._content;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar2,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
     __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar9 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._checkBox;
    if ((__this_01 != (UnityEngine_UI_Toggle_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._topStripe;
      fVar7 = -20.0;
      if (!bVar1) {
        fVar7 = 0.0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar8 = UVar9.fields.m_Height * 0.5 + 160.0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar4 = (__this->fields).super._bottomStripe;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pNVar4 = (__this->fields).super._topStripe;
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0311ee6c;
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,fVar8 + 80.0,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).super._bottomStripe;
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0311ee6c;
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar3,(-120.0 - fVar8) + fVar7,(MethodInfo *)0x0);
        }
      }
      pNVar5 = (__this->fields).super._header;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields).super._header;
        if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311ee6c;
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,fVar8 + -20.0,(MethodInfo *)0x0);
      }
      pLVar6 = (__this->fields).super._btnOK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pLVar6 = (__this->fields).super._btnOK;
        if (pLVar6 == (LabelButton_o *)0x0) goto LAB_0311ee6c;
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY
                  (pUVar3,(-20.0 - fVar8) + fVar7,(MethodInfo *)0x0);
      }
      pLVar6 = (__this->fields).super._btnCancel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pLVar6 = (__this->fields).super._btnCancel;
      if (pLVar6 != (LabelButton_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY
                  (pUVar3,(-20.0 - fVar8) + fVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0311ee6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BAFEFLKGNPG(bool CKHKIMELDAI, string IDGIFNHOBPI)  [RVA 0x301E7E8]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$BAFEFLKGNPG @ RVA 0x301E7E8

void Nekki_SF2_GUI_Dialogs_SimpleDialog__BAFEFLKGNPG
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,bool CKHKIMELDAI,
               System_String_o *IDGIFNHOBPI,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *pUVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  UnityEngine_Events_UnityEvent_bool__o *pUVar7;
  float fVar8;
  undefined4 extraout_var;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_04565c34 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    DAT_04565c34 = 1;
  }
  pUVar1 = (__this->fields)._checkBox;
  if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar1,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._label;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar9 = UVar10.fields.m_Height * 0.25;
        fVar8 = (float)(*(pNVar3->klass->vtable)._82_get_preferredHeight.methodPtr)
                                 (0x3e800000,UVar10.fields.m_YMin,UVar10.fields.m_Width,pNVar3,
                                  (pNVar3->klass->vtable)._82_get_preferredHeight.method);
        fVar8 = fVar8 * -0.5 - (fVar9 + fVar9);
        if ((__this->fields).RepositionCheckbox_Y != false) {
          pUVar1 = (__this->fields)._checkBox;
          if (pUVar1 == (UnityEngine_UI_Toggle_o *)0x0) goto LAB_0311eb40;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar8,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._label;
          if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311eb40;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._label;
          if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0311eb40;
          UVar11 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar4,fVar9 + UVar11.fields.y,(MethodInfo *)0x0);
        }
        pUVar1 = (__this->fields)._checkBox;
        if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
          UnityEngine_UI_Toggle__set_isOn(pUVar1,CKHKIMELDAI,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._checkBox;
          if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
            pUVar7 = (UnityEngine_Events_UnityEvent_bool__o *)(pUVar1->fields).onValueChanged;
            pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
            UnityEngine_Events_UnityAction<bool>___ctor();
            if (pUVar7 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
              UnityEngine_Events_UnityEvent<bool>__RemoveListener
                        (pUVar7,pUVar5,Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
              pUVar1 = (__this->fields)._checkBox;
              if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
                pUVar7 = (UnityEngine_Events_UnityEvent_bool__o *)(pUVar1->fields).onValueChanged;
                pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
                UnityEngine_Events_UnityAction<bool>___ctor();
                if (pUVar7 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                  UnityEngine_Events_UnityEvent<bool>__AddListener
                            (pUVar7,pUVar5,Method_UnityEngine_Events_UnityEvent<bool>_AddListener__)
                  ;
                  pNVar3 = (__this->fields)._checkBoxLabel;
                  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar3,0x67,(MethodInfo *)0x0);
                    pNVar3 = (__this->fields)._checkBoxLabel;
                    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                      (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                                ((ulong)(uint)(pBVar6->FHIAKPJBBCB).fields.r,
                                 (pBVar6->FHIAKPJBBCB).fields.g,(pBVar6->FHIAKPJBBCB).fields.b,
                                 (pBVar6->FHIAKPJBBCB).fields.a,pNVar3,
                                 (pNVar3->klass->vtable)._23_set_color.method);
                      pNVar3 = (__this->fields)._checkBoxLabel;
                      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,IDGIFNHOBPI,(MethodInfo *)0x0);
                        if ((__this->fields).RepositionCheckbox_Y != false) {
                          pNVar3 = (__this->fields)._checkBoxLabel;
                          if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311eb40;
                          pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                          UnityEngine_TransformExtensions__SetLocalPositionY
                                    (pUVar4,fVar8 + -5.0,(MethodInfo *)0x0);
                        }
                        pUVar1 = (__this->fields)._checkBox;
                        if ((pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) &&
                           (pUVar2 = (UnityEngine_RectTransform_o *)
                                     UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pUVar1,
                                                Method_UnityEngine_Component_GetComponent<RectTransform>__
                                               ), pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
                          UVar10 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                          pNVar3 = (__this->fields)._checkBoxLabel;
                          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                            (*(pNVar3->klass->vtable)._79_get_preferredWidth.methodPtr)
                                      (CONCAT44(extraout_var,UVar10.fields.m_XMin),
                                       UVar10.fields.m_YMin,UVar10.fields.m_Width,
                                       UVar10.fields.m_Height,pNVar3,
                                       (pNVar3->klass->vtable)._79_get_preferredWidth.method);
                            pNVar3 = (__this->fields)._checkBoxLabel;
                            if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              fVar8 = (float)(*(pNVar3->klass->vtable)._79_get_preferredWidth.
                                               methodPtr)(pNVar3,(pNVar3->klass->vtable).
                                                                 _79_get_preferredWidth.method);
                              if ((__this->fields).RepositionCheckbox_X == false) {
                                return;
                              }
                              pUVar1 = (__this->fields)._checkBox;
                              if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
                                pUVar4 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)pUVar1,
                                                    (MethodInfo *)0x0);
                                UnityEngine_TransformExtensions__SetLocalPositionX
                                          (pUVar4,fVar8 * -0.5,(MethodInfo *)0x0);
                                pNVar3 = (__this->fields)._checkBoxLabel;
                                if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                  pUVar4 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)pNVar3,
                                                      (MethodInfo *)0x0);
                                  pUVar1 = (__this->fields)._checkBox;
                                  if ((pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) &&
                                     (pUVar2 = (UnityEngine_RectTransform_o *)
                                               UnityEngine_Component__GetComponent<object>
                                                         ((UnityEngine_Component_o *)pUVar1,
                                                                                                                    
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar2 != (UnityEngine_RectTransform_o *)0x0))
                                  {
                                    UVar10 = UnityEngine_RectTransform__get_rect
                                                       (pUVar2,(MethodInfo *)0x0);
                                    UnityEngine_TransformExtensions__SetLocalPositionX
                                              (pUVar4,UVar10.fields.m_Width * 0.5,(MethodInfo *)0x0)
                                    ;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0311eb40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float IJEDDPJEHCH()  [RVA 0x301E460]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$IJEDDPJEHCH @ RVA 0x301E460

float Nekki_SF2_GUI_Dialogs_SimpleDialog__IJEDDPJEHCH
                (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_RectTransform_o *pUVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04565c35 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04565c35 = 1;
  }
  uVar3 = (__this->fields).super.JOLPNMNNKCJ;
  fVar6 = 0.0;
  if ((uVar3 | 2) == 3) {
    pLVar1 = (__this->fields).super._btnOK;
    if ((pLVar1 == (LabelButton_o *)0x0) ||
       (pUVar2 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pLVar1,
                            Method_UnityEngine_Component_GetComponent<RectTransform>__),
       pUVar2 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311e53c;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar5 = UVar7.fields.m_Width;
    uVar3 = (__this->fields).super.JOLPNMNNKCJ;
    iVar4 = 2;
    if (uVar3 != 3) goto LAB_0311e4e8;
  }
  else {
    iVar4 = 1;
    fVar5 = 0.0;
LAB_0311e4e8:
    if (uVar3 != 2) goto LAB_0311e514;
  }
  pLVar1 = (__this->fields).super._btnCancel;
  if ((pLVar1 == (LabelButton_o *)0x0) ||
     (pUVar2 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pLVar1,
                          Method_UnityEngine_Component_GetComponent<RectTransform>__),
     pUVar2 == (UnityEngine_RectTransform_o *)0x0)) {
LAB_0311e53c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  fVar6 = UVar7.fields.m_Width;
  iVar4 = iVar4 + 1;
LAB_0311e514:
  return fVar5 + fVar6 + (float)iVar4 * 60.0;
}


// ===== public void .ctor()  [RVA 0x301EE70]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$.ctor @ RVA 0x301EE70

void Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04565c36 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c36 = 1;
  }
  (__this->fields).DHHJFNPJFLF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).ENHHJMDENNI = true;
  ppSVar1 = &(__this->fields).JKBAACEKGJF;
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).RepositionCheckbox_X = true;
  (__this->fields).RepositionCheckbox_Y = true;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).AdditionalTextSize.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).FJBAGGCNDLF = 100.0;
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual void FMJHHEJDAKI()  [RVA 0x301EF2C]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$FMJHHEJDAKI @ RVA 0x301EF2C

void Nekki_SF2_GUI_Dialogs_SimpleDialog__FMJHHEJDAKI
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_SimpleDialog__DGNHKEIFFMP(__this,method);
                    /* WARNING: Could not recover jumptable at 0x0311ef4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._35_GIBFNEDCKNE.methodPtr)
            (__this,(__this->klass->vtable)._35_GIBFNEDCKNE.method);
  return;
}


// ===== protected bool ENKCNIFALBM()  [RVA 0x301EF50]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$ENKCNIFALBM @ RVA 0x301EF50

bool Nekki_SF2_GUI_Dialogs_SimpleDialog__ENKCNIFALBM
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._ANLOMDKGOND_k__BackingField;
}


// ===== private void HOPBKBFKJKP(float NMFKJBOAOLK)  [RVA 0x301EF58]
// Nekki.SF2.GUI.Dialogs.SimpleDialog$$HOPBKBFKJKP @ RVA 0x301EF58

void Nekki_SF2_GUI_Dialogs_SimpleDialog__HOPBKBFKJKP
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,float NMFKJBOAOLK,MethodInfo *method)

{
  (__this->fields).FJBAGGCNDLF = NMFKJBOAOLK;
  return;
}

