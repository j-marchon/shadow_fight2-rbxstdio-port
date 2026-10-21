// Nekki.SF2.GUI.Dialogs.SettingsDialog$$MOGHLOMBKHP @ RVA 0x3484164

void Nekki_SF2_GUI_Dialogs_SettingsDialog__MOGHLOMBKHP
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  System_Action_T__o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04568396 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_NAMOPNOEEGA__);
    DAT_04568396 = 1;
  }
  pNVar2 = JJPNLEPEAFM__GPPIJOMGJPL((MethodInfo *)0x0);
  (__this->fields).AELKHAJHDMC = pNVar2;
  thunk_FUN_01c20e04(&(__this->fields).AELKHAJHDMC);
  pNVar2 = (__this->fields).AELKHAJHDMC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).AELKHAJHDMC;
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar2,0,pSVar3,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      pNVar2 = (__this->fields).AELKHAJHDMC;
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar2,2,pSVar3,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

