// Nekki.SF2.GUI.Fight.StyleBar$$SetValue @ RVA 0x34CA860

void Nekki_SF2_GUI_Fight_StyleBar__SetValue
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               int32_t LFMMJKEFIMJ,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this_01;
  
  if ((DAT_04568661 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_04568661 = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    if ((__this_00->fields)._size <= LFMMJKEFIMJ) {
      return;
    }
    __this_01 = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,LFMMJKEFIMJ,
                           Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    if (__this_01 != (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) {
      Nekki_SF2_GUI_Fight_StyleBarStrip__SetValue
                (__this_01,CJNHFNHJHPE,ABKNPBMGHKH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

