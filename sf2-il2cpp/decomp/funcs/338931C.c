// IDDIABHBDEE.<>c$$PGCEODJBGJP @ RVA 0x338931C

bool IDDIABHBDEE_<>c__PGCEODJBGJP
               (IDDIABHBDEE___c_o *__this,System_Xml_XmlNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *b;
  
  if ((DAT_04567bd1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_571);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_572);
    __this = (IDDIABHBDEE___c_o *)FUN_01bab630(&byte___TypeInfo);
    DAT_04567bd1 = 1;
  }
  if (node != (System_Xml_XmlNode_o *)0x0) {
    a = (System_String_o *)
        (*(node->klass->vtable)._8_unknown.methodPtr)(node,(node->klass->vtable)._8_unknown.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_571,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_572,(MethodInfo *)0x0);
    b = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

