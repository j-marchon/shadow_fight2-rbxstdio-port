// Nekki.SF2.GUI.Fight.StyleBar$$SetSkewAngle @ RVA 0x34CA6D4

void Nekki_SF2_GUI_Fight_StyleBar__SetSkewAngle
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float JLNCOIIGIDA,int32_t LFMMJKEFIMJ,
               MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_01;
  
  if ((DAT_0456865e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_0456865e = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    if ((__this_00->fields)._size <= LFMMJKEFIMJ) {
      return;
    }
    __this_01 = (Nekki_SF2_GUI_ResolutionImageSkew_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,LFMMJKEFIMJ,
                           Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle(__this_01,JLNCOIIGIDA,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

