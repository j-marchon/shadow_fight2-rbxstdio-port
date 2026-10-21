// Nekki.SF2.GUI.DebugUI$$GICDPBACCBF @ RVA 0x329125C

void Nekki_SF2_GUI_DebugUI__GICDPBACCBF(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if ((DAT_0456731f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<DebugUIModule>__);
    DAT_0456731f = 1;
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,true,
                      Method_UnityEngine_Component_GetComponentsInChildren<DebugUIModule>__);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar1 = (uint)pSVar2->max_length;
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if ((Nekki_SF2_GUI_DebugUIModule_o *)pSVar2->m_Items[(int)uVar3] ==
            (Nekki_SF2_GUI_DebugUIModule_o *)0x0) goto LAB_033912f4;
        Nekki_SF2_GUI_DebugUIModule__Refresh
                  ((Nekki_SF2_GUI_DebugUIModule_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
        uVar1 = (uint)pSVar2->max_length;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    return;
  }
LAB_033912f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

