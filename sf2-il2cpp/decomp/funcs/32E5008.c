// DOPEEDABNEK.AOJFFKODFFM$$POINKPMNPCE @ RVA 0x32E5008

void DOPEEDABNEK_AOJFFKODFFM__POINKPMNPCE
               (DOPEEDABNEK_AOJFFKODFFM_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  MethodInfo *in_x4;
  
  if ((DAT_04567604 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073);
    DAT_04567604 = 1;
  }
  if (item != (HOOAAGABMBL_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((item->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073,
                       (MethodInfo *)0x0);
    if ((__this->fields).__4__this != (DOPEEDABNEK_o *)0x0) {
      piVar1 = &(item->fields)._JDEHPJEIOCI_k__BackingField;
      if (!bVar2) {
        piVar1 = &(__this->fields).level;
      }
      DOPEEDABNEK__MDBOKHFIOIJ((DOPEEDABNEK_o *)(ulong)bVar2,item,true,*piVar1,in_x4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

