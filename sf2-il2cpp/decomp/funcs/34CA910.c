// Nekki.SF2.GUI.Fight.StyleBar$$GetValue @ RVA 0x34CA910

float Nekki_SF2_GUI_Fight_StyleBar__GetValue
                (Nekki_SF2_GUI_Fight_StyleBar_o *__this,int32_t LFMMJKEFIMJ,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  
  if ((DAT_04568662 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_04568662 = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    fVar2 = 0.0;
    if (LFMMJKEFIMJ < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,LFMMJKEFIMJ,
                          Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_035ca98c;
      fVar2 = *(float *)((long)&pIVar1[0xf].klass + 4);
    }
    return fVar2;
  }
LAB_035ca98c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

