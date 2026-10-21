// CUDLR.Server$$StartServer @ RVA 0x33C1348

void CUDLR_Server__StartServer(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567dce & 1) == 0) {
                    /* try { // try from 034c1384 to 035c138f has its CatchHandler @ 034c0d7c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_239);
                    /* try { // try from 034c1390 to 035c1397 has its CatchHandler @ 034c1398 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_240);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034c131c with catch @ 034c1398
                       catch(type#2 @ 00000000) { ... } // from try @ 034c1390 with catch @ 034c1398
                        */
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dce = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_239,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_240,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  IMCONGDFJME = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__LJCILLMKCPE(__this,IMCONGDFJME,method_00);
  return;
}

