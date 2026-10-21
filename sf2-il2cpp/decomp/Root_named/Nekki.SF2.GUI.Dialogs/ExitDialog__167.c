// TypeDefIndex 167
// Namespace: Nekki.SF2.GUI.Dialogs
// public class ExitDialog : BaseDialog
// Fields:
//   public const float CONTENT_PADDING = 40;
//   private ONDBPECEKAJ LHNINNECGJF; // 0xC8
//   private static bool JFAEKJELFFN; // 0x0
//   protected LabelAlias _text; // 0xD0

// ===== public static bool get_IsOpened()  [RVA 0x3110368]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$get_IsOpened @ RVA 0x3110368

bool Nekki_SF2_GUI_Dialogs_ExitDialog__get_IsOpened(MethodInfo *method)

{
  if ((DAT_0456657a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo);
    DAT_0456657a = 1;
  }
  return Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo->static_fields->JFAEKJELFFN;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x31103B0]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$Init @ RVA 0x31103B0

void Nekki_SF2_GUI_Dialogs_ExitDialog__Init
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  ONDBPECEKAJ_c *pOVar2;
  ONDBPECEKAJ_o *pOVar3;
  ONDBPECEKAJ_o **ppOVar4;
  
  if ((DAT_0456657b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo);
    FUN_01bab630(&ONDBPECEKAJ_TypeInfo);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17787/*"dlgExitButton"*/);
    DAT_0456657b = 1;
  }
  pOVar2 = ONDBPECEKAJ_TypeInfo;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (ONDBPECEKAJ_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)ONDBPECEKAJ_TypeInfo)) {
      (__this->fields).LHNINNECGJF = (ONDBPECEKAJ_o *)IMMNELPBGIF;
      if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
         ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pOVar2))
      goto LAB_03210474;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  (__this->fields).LHNINNECGJF = (ONDBPECEKAJ_o *)0x0;
LAB_03210474:
  ppOVar4 = &(__this->fields).LHNINNECGJF;
  thunk_FUN_01c20e04(ppOVar4,IMMNELPBGIF);
  pOVar3 = *ppOVar4;
  if (pOVar3 != (ONDBPECEKAJ_o *)0x0) {
    (__this->fields).super.IsPausing = (pOVar3->fields).JODAGCMMKMK;
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pOVar3->fields).IKIINEOIIAK,
               StringLiteral_17787/*"dlgExitButton"*/,StringLiteral_3640/*"CANCEL"*/,3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo->static_fields->JFAEKJELFFN = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PGEIEIKOCIN(object IMMNELPBGIF)  [RVA 0x31104E4]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$PGEIEIKOCIN @ RVA 0x31104E4

void Nekki_SF2_GUI_Dialogs_ExitDialog__PGEIEIKOCIN
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  ONDBPECEKAJ_o *pOVar1;
  System_Action_o *pSVar2;
  
  pOVar1 = (__this->fields).LHNINNECGJF;
  if ((pOVar1 != (ONDBPECEKAJ_o *)0x0) &&
     (pSVar2 = (pOVar1->fields).MIMKJIKCPGP, pSVar2 != (System_Action_o *)0x0)) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x3110530]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$GKPJMHOFIOO @ RVA 0x3110530

void Nekki_SF2_GUI_Dialogs_ExitDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  ONDBPECEKAJ_o *pOVar4;
  
  if ((DAT_0456657c & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_0456657c = 1;
  }
  pNVar1 = (__this->fields)._text;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)pNVar1,4,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._text;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar2,0.0,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._text;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,0.0,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._text;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,0x67,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._text;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                       (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                       (pNVar1->klass->vtable)._23_set_color.method);
            pOVar4 = (__this->fields).LHNINNECGJF;
            if ((pOVar4 != (ONDBPECEKAJ_o *)0x0) &&
               (pNVar1 = (__this->fields)._text, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
              Nekki_SF2_GUI_LabelAlias__set_Alias
                        (pNVar1,(pOVar4->fields).GEFDCAHIPNO,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3110628]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$.ctor @ RVA 0x3110628

void Nekki_SF2_GUI_Dialogs_ExitDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x3110630]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$OnDestroy @ RVA 0x3110630

void Nekki_SF2_GUI_Dialogs_ExitDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,MethodInfo *method)

{
  if ((DAT_0456657d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo);
    DAT_0456657d = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo->static_fields->JFAEKJELFFN = false;
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD CHNMNMJJJGL)  [RVA 0x3110688]
// Nekki.SF2.GUI.Dialogs.ExitDialog$$LCGFJKFJKJK @ RVA 0x3110688

void Nekki_SF2_GUI_Dialogs_ExitDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,int32_t CHNMNMJJJGL,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  System_Action_object__o *IELDNEAAPBE;
  ONDBPECEKAJ_o *pOVar2;
  
  if ((DAT_0456657e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ExitDialog_PGEIEIKOCIN__);
    DAT_0456657e = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,CHNMNMJJJGL,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super._btnOK;
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pLVar1 != (LabelButton_o *)0x0) {
      SFButton__AddEventListener((SFButton_o *)pLVar1,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pOVar2 = (__this->fields).LHNINNECGJF;
      if ((pOVar2 != (ONDBPECEKAJ_o *)0x0) &&
         (pLVar1 = (__this->fields).super._btnOK, pLVar1 != (LabelButton_o *)0x0)) {
        LabelButton__set_TrackingDeviceID(pLVar1,(pOVar2->fields).IABOCPMGBLG,(MethodInfo *)0x0);
        pOVar2 = (__this->fields).LHNINNECGJF;
        if ((pOVar2 != (ONDBPECEKAJ_o *)0x0) &&
           (pLVar1 = (__this->fields).super._btnCancel, pLVar1 != (LabelButton_o *)0x0)) {
          LabelButton__set_TrackingDeviceID(pLVar1,(pOVar2->fields).IABOCPMGBLG,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

