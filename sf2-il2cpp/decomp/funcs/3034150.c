// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetIndexBy @ RVA 0x3034150

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetIndexBy
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
                  ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IHNKCJHDDKD;
  if ((DAT_04565d21 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    DAT_04565d21 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ(__this,method_00);
  if ((IHNKCJHDDKD != (ODKDFMHHLIP_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0)) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)IHNKCJHDDKD,
                       Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    return iVar1;
  }
  return -1;
}

