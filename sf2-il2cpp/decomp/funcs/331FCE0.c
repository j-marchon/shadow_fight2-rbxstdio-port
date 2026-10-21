// Nekki.SF2.GUI.Shop.ParameterProgressBar$$GetValue @ RVA 0x331FCE0

float Nekki_SF2_GUI_Shop_ParameterProgressBar__GetValue
                (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *__this,int32_t EPLIHDPAKDE,
                MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  
  if ((DAT_0456783e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    DAT_0456783e = 1;
  }
  __this_00 = (__this->fields).Stripes;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    fVar2 = 0.0;
    if (EPLIHDPAKDE < (__this_00->fields)._size) {
                    /* try { // try from 0341fd44 to 0351fd4b has its CatchHandler @ 0341fe90 */
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,EPLIHDPAKDE,
                          Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_0341fd5c;
      fVar2 = *(float *)((long)&pIVar1[0xf].klass + 4);
    }
    return fVar2;
  }
LAB_0341fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

