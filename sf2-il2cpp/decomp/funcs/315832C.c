// HPEENDCCJND$$FECLPLFHJAL @ RVA 0x315832C

System_String_o *
HPEENDCCJND__FECLPLFHJAL(HPEENDCCJND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04566852 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566852 = 1;
  }
  __this_00 = (__this->fields).EIHCMKCJPJO;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       (__this_00,OGPGLGPMEPD + -1,
                        Method_System_Collections_Generic_List<object>_get_Item__);
    if (pSVar1 != (System_String_o *)0x0) {
      if (pSVar1->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

