// DMDCBCGELBE$$AJJLBBCJAAL @ RVA 0x32125F0

System_String_o *
DMDCBCGELBE__AJJLBBCJAAL(DMDCBCGELBE_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_Nullable_bool__Fields local_24 [2];
  
  if ((DAT_04566ea2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5820);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5821);
                    /* try { // try from 03312628 to 0341262f has its CatchHandler @ 03312658 */
                    /* try { // try from 03312630 to 03412633 has its CatchHandler @ 03312648 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03312634 to 03412637 has its CatchHandler @ 033122e0 */
                    /* try { // try from 03312638 to 0341263b has its CatchHandler @ 03312644 */
                    /* try { // try from 0331263c to 0341266b has its CatchHandler @ 033122e0 */
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03312638 with catch @ 03312644
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03312630 with catch @ 03312648
                        */
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03312540 with catch @ 0331264c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03312494 with catch @ 03312650
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03312558 with catch @ 03312654
                        */
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03312628 with catch @ 03312658
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033124f0 with catch @ 0331265c
                        */
    DAT_04566ea2 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      pSVar1 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 0331266c to 0341266f has its CatchHandler @ 03312680 */
      local_24[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(0,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0331266c with catch @ 03312680 */
      if (((ushort)local_24[0] & 0xff) == 0) {
        pSVar1 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 03312688 to 034126ef has its CatchHandler @ 03312704 */
        CJNHFNHJHPE = System_Nullable<bool>__get_Value
                                ((System_Nullable_bool__o)SUB82(local_24,0),
                                 Method_System_Nullable<bool>_get_Value__);
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
        }
        FCJBEKHDLAF__PFDEGJLLBLC(CJNHFNHJHPE,(MethodInfo *)0x0);
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033126f0 to 034126fb has its CatchHandler @ 033122e0 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5820,
                   (MethodInfo *)0x0);
                    /* try { // try from 033126fc to 03412703 has its CatchHandler @ 03312704 */
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03312688 with catch @ 03312704
                       catch(type#2 @ 00000000) { ... } // from try @ 033126fc with catch @ 03312704
                        */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5821,
                   (MethodInfo *)0x0);
        pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      }
    }
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

