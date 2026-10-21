// TypeDefIndex 2829
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class FindClanView : TabView
// Fields:
//   private RectTransform _mountPoint; // 0x28
//   private LabelButton _closeButton; // 0x30
//   private FindClanWidget _findClanWidgetPrefab; // 0x38
//   private FindClanWidget OFPMMKBLEGH; // 0x40

// ===== public void Init()  [RVA 0x342B03C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanView$$Init @ RVA 0x342B03C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *in_x2;
  LabelButton_o *__this_00;
  
  if ((DAT_04568135 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_TabView_KGHLJNMCILN__);
    DAT_04568135 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__HCOPLDHOCBA
            (__this,(__this->fields)._findClanWidgetPrefab,in_x2);
  __this_00 = (__this->fields)._closeButton;
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (LabelButton_o *)0x0) {
    SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HCOPLDHOCBA(FindClanWidget NCJEDHGAAFG)  [RVA 0x342B0DC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanView$$HCOPLDHOCBA @ RVA 0x342B0DC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__HCOPLDHOCBA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *NCJEDHGAAFG,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Transform_o *parent;
  UnityEngine_Component_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *pNVar2;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o **ppNVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_04568136 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<FindClanWidget>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<FindClanWidget>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568136 = 1;
  }
  pUVar1 = (__this->fields)._mountPoint;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this_00 = (UnityEngine_Component_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)NCJEDHGAAFG,parent,
                           Method_UnityEngine_Object_Instantiate<FindClanWidget>__);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)
               UnityEngine_Component__GetComponent<object>
                         (__this_00,Method_UnityEngine_Component_GetComponent<FindClanWidget>__);
      ppNVar3 = &(__this->fields).OFPMMKBLEGH;
      *ppNVar3 = pNVar2;
      thunk_FUN_01c20e04(ppNVar3,pNVar2);
      if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__Init(*ppNVar3,(MethodInfo *)0x0);
        if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
          pUVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__get_RectTransform
                             (*ppNVar3,(MethodInfo *)0x0);
          __this_01 = (__this->fields)._mountPoint;
          if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
             (UVar4 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
            UnityEngine_RectTransform__set_sizeDelta
                      (pUVar1,(UnityEngine_Vector2_o)UVar4.fields._8_8_,(MethodInfo *)0x0);
            if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__SearchRecommended
                        (*ppNVar3,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x342B208]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanView$$.ctor @ RVA 0x342B208

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *__this,MethodInfo *method)

{
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x342B210]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanView$$UpdateContent @ RVA 0x342B210

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  return;
}

