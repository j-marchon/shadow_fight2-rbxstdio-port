// NCNJEIBHGBH$$PEABBFJGFKC @ RVA 0x32F1234

void NCNJEIBHGBH__PEABBFJGFKC(NCNJEIBHGBH_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  NCNJEIBHGBH_o *__this_00;
  NCNJEIBHGBH_o *BGCBJECODII;
  
  if ((DAT_04567671 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567671 = 1;
  }
  __this_00 = (NCNJEIBHGBH_o *)(__this->fields).PAFEHLCLKEC;
  if (__this_00 == (NCNJEIBHGBH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  BGCBJECODII = StringLiteral_1;
  if (OGPGLGPMEPD < *(int *)&(__this_00->fields).KLCCBGKNCBD) {
    method = Method_System_Collections_Generic_List<string>_get_Item__;
    __this_00 = (NCNJEIBHGBH_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,OGPGLGPMEPD,
                           (MethodInfo_26E4ADC *)
                           Method_System_Collections_Generic_List<string>_get_Item__);
    BGCBJECODII = __this_00;
  }
  NCNJEIBHGBH__PEABBFJGFKC(__this_00,(System_String_o *)BGCBJECODII,method);
  return;
}

