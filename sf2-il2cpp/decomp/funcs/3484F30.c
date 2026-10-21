// Nekki.SF2.GUI.Dialogs.SettingsDialog$$NAMOPNOEEGA @ RVA 0x3484F30

void Nekki_SF2_GUI_Dialogs_SettingsDialog__NAMOPNOEEGA
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar1;
  undefined8 *puVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar5;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar6;
  System_String_o *pSVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_045683a4 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
    FUN_01bab630(&StringLiteral_11946);
    FUN_01bab630(&StringLiteral_11948);
    FUN_01bab630(&StringLiteral_11945);
    FUN_01bab630(&StringLiteral_11949);
    DAT_045683a4 = 1;
  }
  bVar3 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
  pNVar6 = (__this->fields).btnMusic;
  puVar2 = &StringLiteral_11946;
  if (!bVar3) {
    puVar2 = &StringLiteral_11945;
  }
  if (pNVar6 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    pSVar7 = (System_String_o *)*puVar2;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).btnMusic;
      if ((pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        UVar9 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
                  (__this,pNVar6,pSVar7,UVar8.fields.x,UVar9.fields.y,0,in_x4);
        bVar3 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
        pNVar6 = (__this->fields).btnSound;
        puVar2 = &StringLiteral_11949;
        if (!bVar3) {
          puVar2 = &StringLiteral_11948;
        }
        if (pNVar6 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          pSVar7 = (System_String_o *)*puVar2;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UVar8 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).btnSound;
            if ((pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UVar9 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
                        (__this,pNVar6,pSVar7,UVar8.fields.x,UVar9.fields.y,1,in_x4);
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                __this_01 = (__this->fields).AELKHAJHDMC;
                if (__this_01 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                  ppNVar1 = &(__this->fields).AELKHAJHDMC;
                  Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveAllEventListener
                            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,
                             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
                  *ppNVar1 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
                  thunk_FUN_01c20e04(ppNVar1,0);
                  return;
                }
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

