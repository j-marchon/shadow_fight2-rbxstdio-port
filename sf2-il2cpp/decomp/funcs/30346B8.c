// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetMessage @ RVA 0x30346B8

ODKDFMHHLIP_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessage
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,int32_t CKMDPHJOKAF,
          MethodInfo *method)

{
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  ODKDFMHHLIP_o *pOVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)CKMDPHJOKAF;
  if ((DAT_04565d2c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Item__);
    DAT_04565d2c = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ(__this,method_00);
  if ((__this_00 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) &&
     (CKMDPHJOKAF < (__this_00->fields)._size)) {
    pOVar1 = (ODKDFMHHLIP_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,CKMDPHJOKAF,
                        Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Item__);
    return pOVar1;
  }
  return (ODKDFMHHLIP_o *)0x0;
}

