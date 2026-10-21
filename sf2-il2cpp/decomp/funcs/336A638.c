// MDFGJKBMECA.OJOAPHBHAFL$$KIJILFAEKEL @ RVA 0x336A638

void MDFGJKBMECA_OJOAPHBHAFL__KIJILFAEKEL(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ae9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Clear__);
    DAT_04567ae9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).CANNFEEOFEA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

