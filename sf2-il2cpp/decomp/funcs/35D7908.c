// GGLDGAAPKCF$$.cctor @ RVA 0x35D7908

void GGLDGAAPKCF___cctor(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036d7938 to 037d793b has its CatchHandler @ 036d7980 */
                    /* try { // try from 036d793c to 037d7943 has its CatchHandler @ 036d797c */
  if ((DAT_04569004 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_906);
                    /* try { // try from 036d7954 to 037d7967 has its CatchHandler @ 036d79f0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_907);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036d7968 to 037d79a7 has its CatchHandler @ 036d778c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d78f0 with catch @ 036d796c
                        */
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    DAT_04569004 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d78c4 with catch @ 036d7978
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d793c with catch @ 036d797c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7938 with catch @ 036d7980
                        */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7874 with catch @ 036d7984
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7858 with catch @ 036d7988
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_906,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d79a8 to 037d79ab has its CatchHandler @ 036d79cc */
                    /* try { // try from 036d79ac to 037d79d3 has its CatchHandler @ 036d778c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_907,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d79a8 with catch @ 036d79cc */
  GGLDGAAPKCF_TypeInfo->static_fields->GMLHHNPAHHM = pSVar1;
                    /* try { // try from 036d79d4 to 037d79db has its CatchHandler @ 036d79f0 */
                    /* try { // try from 036d79dc to 037d79e7 has its CatchHandler @ 036d778c */
  thunk_FUN_01c20e04(GGLDGAAPKCF_TypeInfo->static_fields,pSVar1);
  return;
}

