// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$PLHLIKHCKBH @ RVA 0x3028728

float Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__PLHLIKHCKBH
                (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  float fVar1;
  
  if ((DAT_04565c9d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
                    /* try { // try from 0312875c to 0322877f has its CatchHandler @ 031287d4 */
    DAT_04565c9d = 1;
  }
  __this_00 = (__this->fields).KPKPCPFOGAP;
                    /* try { // try from 03128780 to 032287eb has its CatchHandler @ 031286e8 */
  if (((__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
      (__this_01 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (__this->fields).DIONJIKONHC,
                              Method_System_Collections_Generic_List<GameObject>_get_Item__),
      __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_02 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_01,Method_UnityEngine_GameObject_GetComponent<CanvasGroup>__),
     __this_02 != (UnityEngine_CanvasGroup_o *)0x0)) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_02,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

