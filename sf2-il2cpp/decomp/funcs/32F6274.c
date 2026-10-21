// NCNJEIBHGBH$$MJBJNBPCDCN @ RVA 0x32F6274

void NCNJEIBHGBH__MJBJNBPCDCN(NCNJEIBHGBH_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *BGCBJECODII;
  
  if ((DAT_04567697 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567697 = 1;
  }
  __this_00 = (__this->fields).PAFEHLCLKEC;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  BGCBJECODII = StringLiteral_1;
  if (OGPGLGPMEPD < (__this_00->fields)._size) {
    method = Method_System_Collections_Generic_List<string>_get_Item__;
    BGCBJECODII = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,OGPGLGPMEPD,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<string>_get_Item__);
  }
  NCNJEIBHGBH__OANGGKCBAOJ(__this,BGCBJECODII,method);
  return;
}

