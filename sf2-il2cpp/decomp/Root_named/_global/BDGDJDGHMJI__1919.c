// TypeDefIndex 1919
// Namespace: 
// public class BDGDJDGHMJI : IEJKLPPLHMO
// Fields:
//   private static string CCKABABJINH; // 0x0

// ===== public static string BNACEHKJBBL(string[] BFPCMHPBAGL)  [RVA 0x32610C8]
// BDGDJDGHMJI$$BNACEHKJBBL @ RVA 0x32610C8

System_String_o * BDGDJDGHMJI__BNACEHKJBBL(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  RaidPaymentService_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *str0;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  
                    /* try { // try from 033610cc to 034610d7 has its CatchHandler @ 03361878 */
  if ((DAT_045671ae & 1) == 0) {
                    /* try { // try from 033610e8 to 034610f7 has its CatchHandler @ 03361860 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5421);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5422);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5423);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5424);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03361128 to 03461133 has its CatchHandler @ 03361898 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045671ae = 1;
    method = extraout_x1;
  }
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
                    /* try { // try from 03361144 to 03461153 has its CatchHandler @ 033617f0 */
    if ((int)BFPCMHPBAGL->max_length != 1) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5421,
                 (MethodInfo *)0x0);
                    /* try { // try from 0336122c to 03461237 has its CatchHandler @ 033618a0 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03361248 to 03461257 has its CatchHandler @ 03361838 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5422,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
LAB_03361288:
                    /* try { // try from 03361288 to 03461293 has its CatchHandler @ 033617e4 */
      pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if ((int)BFPCMHPBAGL->max_length != 0) {
      if (__this == (RaidPaymentService_o *)0x0) goto LAB_03361298;
                    /* try { // try from 0336117c to 03461187 has its CatchHandler @ 03361854 */
      RaidPaymentService__EFGGOJMGCLK
                (__this,BFPCMHPBAGL->m_Items[0],(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
                    /* try { // try from 03361198 to 034611a7 has its CatchHandler @ 033618a8 */
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5423,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033611d0 to 034611db has its CatchHandler @ 03361814 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5424,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 033611ec to 034611fb has its CatchHandler @ 033618c0 */
      if ((int)BFPCMHPBAGL->max_length != 0) {
        pSVar3 = BFPCMHPBAGL->m_Items[0];
        goto LAB_03361288;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03361298:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string IIIFFANNPHP(string[] BFPCMHPBAGL)  [RVA 0x3261350]
// BDGDJDGHMJI$$IIIFFANNPHP @ RVA 0x3261350

System_String_o * BDGDJDGHMJI__IIIFFANNPHP(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t value;
  OMFJHNMDIBF_o *__this;
  SFRequestSender_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *str0;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_Nullable_int__Fields local_48;
  
                    /* try { // try from 03361358 to 03461367 has its CatchHandler @ 0336181c */
  if ((DAT_045671af & 1) == 0) {
                    /* try { // try from 03361378 to 03461383 has its CatchHandler @ 03361894 */
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5425);
                    /* try { // try from 03361394 to 034613a3 has its CatchHandler @ 03361850 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5426);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5427);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5428);
                    /* try { // try from 033613b4 to 034613bf has its CatchHandler @ 03361818 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5429);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5430);
                    /* try { // try from 033613d0 to 034613df has its CatchHandler @ 03361880 */
    FUN_01bab630(&Method_BDGDJDGHMJI_GOMNKJKIJEB__);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 033613f0 to 034613fb has its CatchHandler @ 033618d4 */
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_045671af = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0336140c to 0346141b has its CatchHandler @ 033618bc */
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length < 1) {
                    /* try { // try from 033615b0 to 034615bf has its CatchHandler @ 033618c8 */
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033615d0 to 034615db has its CatchHandler @ 03361840 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5425,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033615ec to 034615fb has its CatchHandler @ 03361810 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5426,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 0336160c to 03461617 has its CatchHandler @ 03361834 */
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
                    /* try { // try from 03361628 to 03461637 has its CatchHandler @ 0336185c */
      pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
                    /* try { // try from 03361648 to 03461653 has its CatchHandler @ 033617d8 */
      pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
                    /* try { // try from 0336142c to 03461437 has its CatchHandler @ 03361888 */
    __this = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo,method);
    OMFJHNMDIBF___ctor(__this,(MethodInfo *)0x0);
    if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 03361448 to 03461457 has its CatchHandler @ 0336188c */
    value = PCOEHCPGBBG__JBGCINPPLAC(BFPCMHPBAGL->m_Items[0],0,(MethodInfo *)0x0);
                    /* try { // try from 03361468 to 03461473 has its CatchHandler @ 03361868 */
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value = 0;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_48,value,Method_System_Nullable<int>__ctor__);
    if (__this != (OMFJHNMDIBF_o *)0x0) {
                    /* try { // try from 03361484 to 03461493 has its CatchHandler @ 03361830 */
      (__this->fields).EMOLIBOCKJK.fields = local_48;
                    /* try { // try from 033614a4 to 034614af has its CatchHandler @ 0336189c */
      __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033614c0 to 034614cf has its CatchHandler @ 0336187c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5427,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033614e0 to 034614eb has its CatchHandler @ 033618d0 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5428,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 033614fc to 0346150b has its CatchHandler @ 03361828 */
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
                    /* try { // try from 0336151c to 03461527 has its CatchHandler @ 03361890 */
      if (__this_00 != (SFRequestSender_o *)0x0) {
                    /* try { // try from 03361538 to 03461547 has its CatchHandler @ 0336184c */
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_00,pSVar3,(Google_Protobuf_IMessage_o *)__this,
                   BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03361558 to 03461563 has its CatchHandler @ 03361864 */
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5429,
                   (MethodInfo *)0x0);
                    /* try { // try from 03361574 to 03461583 has its CatchHandler @ 03361804 */
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5430,
                   (MethodInfo *)0x0);
                    /* try { // try from 03361594 to 0346159f has its CatchHandler @ 033618b4 */
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string OEPPKOILLGN(string[] BFPCMHPBAGL)  [RVA 0x3261658]
// BDGDJDGHMJI$$OEPPKOILLGN @ RVA 0x3261658

System_String_o * BDGDJDGHMJI__OEPPKOILLGN(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 03361664 to 03461673 has its CatchHandler @ 033618b8 */
                    /* try { // try from 03361680 to 03461687 has its CatchHandler @ 033618e8 */
  if ((DAT_045671b0 & 1) == 0) {
                    /* try { // try from 03361690 to 03461697 has its CatchHandler @ 033618e4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5431);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5432);
                    /* try { // try from 033616a0 to 034616ab has its CatchHandler @ 033618e0 */
    FUN_01bab630(&byte___TypeInfo);
    DAT_045671b0 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5431,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5432,(MethodInfo *)0x0);
                    /* try { // try from 033616f0 to 03461713 has its CatchHandler @ 033618dc */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void NGCHAEMMHOH(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3261708]
// BDGDJDGHMJI$$NGCHAEMMHOH @ RVA 0x3261708

void BDGDJDGHMJI__NGCHAEMMHOH(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = IDCGLBOIAFJ;
                    /* try { // try from 03361714 to 034617b3 has its CatchHandler @ 0336072c */
  if ((DAT_045671b1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5433);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5434);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5435);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5436);
    FUN_01bab630(&byte___TypeInfo);
    auVar7 = FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045671b1 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar3 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (bVar3) {
                    /* try { // try from 033617b4 to 034617bb has its CatchHandler @ 03361904 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5433,
                 (MethodInfo *)0x0);
                    /* try { // try from 033617bc to 034617bf has its CatchHandler @ 033618f8 */
                    /* try { // try from 033617c0 to 034617c7 has its CatchHandler @ 033618ec */
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033617c8 to 034617cb has its CatchHandler @ 0336072c */
                    /* try { // try from 033617cc to 034617cf has its CatchHandler @ 033618d8 */
                    /* try { // try from 033617d0 to 03461923 has its CatchHandler @ 0336072c */
                    /* catch() { ... } // from try @ 03361648 with catch @ 033617d8 */
                    /* catch() { ... } // from try @ 0336108c with catch @ 033617dc */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5434,
                 (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03360e08 with catch @ 033617e0 */
                    /* catch() { ... } // from try @ 03361288 with catch @ 033617e4 */
                    /* catch() { ... } // from try @ 03360e90 with catch @ 033617e8 */
                    /* catch() { ... } // from try @ 03360d10 with catch @ 033617ec */
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03361144 with catch @ 033617f0 */
                    /* catch() { ... } // from try @ 033612c4 with catch @ 033617f4 */
                    /* catch() { ... } // from try @ 03360fb8 with catch @ 033617f8 */
                    /* catch() { ... } // from try @ 03361070 with catch @ 033617fc */
                    /* catch() { ... } // from try @ 03360f68 with catch @ 03361800 */
                    /* catch() { ... } // from try @ 03361574 with catch @ 03361804 */
                    /* catch() { ... } // from try @ 03360ca8 with catch @ 03361808 */
      auVar7 = FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      pNVar6 = auVar7._0_8_;
                    /* catch() { ... } // from try @ 03360ee0 with catch @ 0336180c */
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar7._8_8_;
      auVar7 = auVar1 << 0x40;
      if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_033618cc;
                    /* catch() { ... } // from try @ 033615ec with catch @ 03361810 */
                    /* catch() { ... } // from try @ 033611d0 with catch @ 03361814 */
                    /* catch() { ... } // from try @ 033613b4 with catch @ 03361818 */
      if ((int)pNVar6->max_length != 0) {
                    /* catch() { ... } // from try @ 03361358 with catch @ 0336181c */
                    /* catch() { ... } // from try @ 03360fd4 with catch @ 03361820 */
                    /* catch() { ... } // from try @ 033612a4 with catch @ 03361824 */
                    /* catch() { ... } // from try @ 033614fc with catch @ 03361828 */
        pNVar6->m_Items[0] = 6;
                    /* catch() { ... } // from try @ 03360e24 with catch @ 0336182c */
                    /* catch() { ... } // from try @ 03361484 with catch @ 03361830 */
                    /* catch() { ... } // from try @ 0336160c with catch @ 03361834 */
        Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
        return;
      }
    }
    else {
                    /* catch() { ... } // from try @ 03361248 with catch @ 03361838 */
                    /* catch() { ... } // from try @ 03360e74 with catch @ 0336183c */
                    /* catch() { ... } // from try @ 033615d0 with catch @ 03361840 */
                    /* catch() { ... } // from try @ 03361014 with catch @ 03361844 */
                    /* catch() { ... } // from try @ 033612e0 with catch @ 03361848 */
                    /* catch() { ... } // from try @ 03361538 with catch @ 0336184c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5435,
                 (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03361394 with catch @ 03361850 */
                    /* catch() { ... } // from try @ 0336117c with catch @ 03361854 */
                    /* catch() { ... } // from try @ 03360d8c with catch @ 03361858 */
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03361628 with catch @ 0336185c */
                    /* catch() { ... } // from try @ 033610e8 with catch @ 03361860 */
                    /* catch() { ... } // from try @ 03361558 with catch @ 03361864 */
                    /* catch() { ... } // from try @ 03361468 with catch @ 03361868 */
                    /* catch() { ... } // from try @ 03360f4c with catch @ 0336186c */
                    /* catch() { ... } // from try @ 0336133c with catch @ 03361870 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5436,
                 (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03360d2c with catch @ 03361874 */
                    /* catch() { ... } // from try @ 033610cc with catch @ 03361878 */
                    /* catch() { ... } // from try @ 033614c0 with catch @ 0336187c */
                    /* catch() { ... } // from try @ 033613d0 with catch @ 03361880 */
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03360c8c with catch @ 03361884 */
                    /* catch() { ... } // from try @ 0336142c with catch @ 03361888 */
                    /* catch() { ... } // from try @ 03361448 with catch @ 0336188c */
                    /* catch() { ... } // from try @ 0336151c with catch @ 03361890 */
                    /* catch() { ... } // from try @ 03361378 with catch @ 03361894 */
                    /* catch() { ... } // from try @ 03361128 with catch @ 03361898 */
                    /* catch() { ... } // from try @ 033614a4 with catch @ 0336189c */
      auVar7 = FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      pNVar6 = auVar7._0_8_;
                    /* catch() { ... } // from try @ 0336122c with catch @ 033618a0 */
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar7._8_8_;
      auVar7 = auVar2 << 0x40;
      if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_033618cc;
                    /* catch() { ... } // from try @ 03361030 with catch @ 033618a4 */
                    /* catch() { ... } // from try @ 03361198 with catch @ 033618a8 */
                    /* catch() { ... } // from try @ 03361300 with catch @ 033618ac */
      if ((int)pNVar6->max_length != 0) {
                    /* catch() { ... } // from try @ 03360da8 with catch @ 033618b0 */
                    /* catch() { ... } // from try @ 03361594 with catch @ 033618b4 */
                    /* catch() { ... } // from try @ 03361664 with catch @ 033618b8 */
                    /* catch() { ... } // from try @ 0336140c with catch @ 033618bc */
        pNVar6->m_Items[0] = 6;
                    /* catch() { ... } // from try @ 033611ec with catch @ 033618c0 */
                    /* catch() { ... } // from try @ 0336131c with catch @ 033618c4 */
                    /* catch() { ... } // from try @ 033615b0 with catch @ 033618c8 */
        Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033614e0 with catch @ 033618d0 */
    FUN_01bab8d0();
  }
LAB_033618cc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03360efc with catch @ 033618cc */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}


// ===== public static string NOILEDGGCKJ(string[] BFPCMHPBAGL)  [RVA 0x32618D4]
// BDGDJDGHMJI$$NOILEDGGCKJ @ RVA 0x32618D4

System_String_o * BDGDJDGHMJI__NOILEDGGCKJ(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  int64_t JBFDEJOPCDC;
  RaidPlayerInfoHelper_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *str0;
  MethodInfo *method_00;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = BFPCMHPBAGL;
                    /* catch() { ... } // from try @ 033613f0 with catch @ 033618d4 */
                    /* catch() { ... } // from try @ 033617cc with catch @ 033618d8 */
                    /* catch() { ... } // from try @ 033616f0 with catch @ 033618dc */
                    /* catch() { ... } // from try @ 033616a0 with catch @ 033618e0 */
                    /* catch() { ... } // from try @ 03361690 with catch @ 033618e4 */
                    /* catch() { ... } // from try @ 03361680 with catch @ 033618e8 */
                    /* catch() { ... } // from try @ 033617c0 with catch @ 033618ec */
  if ((DAT_045671b2 & 1) == 0) {
                    /* catch() { ... } // from try @ 03360c1c with catch @ 033618f0 */
                    /* catch() { ... } // from try @ 03360c28 with catch @ 033618f4 */
                    /* catch() { ... } // from try @ 033617bc with catch @ 033618f8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5437);
                    /* catch() { ... } // from try @ 03360bb4 with catch @ 033618fc */
                    /* catch() { ... } // from try @ 03360b58 with catch @ 03361900 */
                    /* catch() { ... } // from try @ 033617b4 with catch @ 03361904 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5438);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5439);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5440);
                    /* try { // try from 03361924 to 03461927 has its CatchHandler @ 03361934 */
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
                    /* catch() { ... } // from try @ 03361924 with catch @ 03361934 */
    FUN_01bab630(&byte___TypeInfo);
    auVar4 = FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03361944 to 034619b3 has its CatchHandler @ 033619c8 */
    DAT_045671b2 = 1;
  }
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if (BFPCMHPBAGL->max_length == 0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5437,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5438,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
      pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
    if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0(auVar4._0_8_,auVar4._8_8_);
    }
    JBFDEJOPCDC = PCOEHCPGBBG__NEDKJCKICNF(BFPCMHPBAGL->m_Items[0],0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    if (__this != (RaidPlayerInfoHelper_o *)0x0) {
                    /* try { // try from 033619b4 to 034619bf has its CatchHandler @ 0336072c */
      RaidPlayerInfoHelper__JDONKPBCNLL(__this,JBFDEJOPCDC,(MethodInfo *)0x0);
                    /* try { // try from 033619c0 to 034619c7 has its CatchHandler @ 033619c8 */
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03361944 with catch @ 033619c8
                       catch() { ... } // from try @ 033619c0 with catch @ 033619c8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5439,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5440,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string PGJDLIJFCDD()  [RVA 0x3261AB0]
// BDGDJDGHMJI$$PGJDLIJFCDD @ RVA 0x3261AB0

System_String_o * BDGDJDGHMJI__PGJDLIJFCDD(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *PCPECHHMLEC;
  System_String_o *str1;
  
  if ((DAT_045671b3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5441);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5442);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5443);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5444);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5445);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5446);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5447);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5448);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671b3 = 1;
  }
  pSVar1 = HLIDLFKDMHG__PJNBDOPPFLA((MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace(pSVar1,0x2d,10,(MethodInfo *)0x0);
    pSVar2 = HLIDLFKDMHG__CJGIKJBCAII((MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5441,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5442,(MethodInfo *)0x0)
    ;
    PCPECHHMLEC = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5443,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5444,(MethodInfo *)0x0)
    ;
    str1 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,str1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5445,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5446,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    DialogsOpener__JNDPLPKDPCP
              (PCPECHHMLEC,pSVar1,pSVar2,StringLiteral_1/*""*/,(System_Action_object__o *)0x0,1,0,false,
               false,StringLiteral_1/*""*/,false,true,true,true,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5447,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5448,(MethodInfo *)0x0)
    ;
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MKNJLMOFDHM(string KGLJICLJHEL, int CJNHFNHJHPE)  [RVA 0x3261D80]
// BDGDJDGHMJI$$MKNJLMOFDHM @ RVA 0x3261D80

void BDGDJDGHMJI__MKNJLMOFDHM(System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  OMFJHNMDIBF_o *__this;
  PIADCKMDDAK_o *__this_00;
  SFRequestSender_o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *CELOLGNMKCG;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  PIADCKMDDAK_o **ppPVar1;
  
  if ((DAT_045671b4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5449);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5450);
    FUN_01bab630(&Method_BDGDJDGHMJI_EMIEFDFIEMD__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045671b4 = 1;
  }
  __this = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo);
  OMFJHNMDIBF___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
  PIADCKMDDAK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this != (OMFJHNMDIBF_o *)0x0) {
    ppPVar1 = &(__this->fields).IEDLACLJJOK;
    *ppPVar1 = __this_00;
    thunk_FUN_01c20e04(ppPVar1,__this_00);
    if (*ppPVar1 != (PIADCKMDDAK_o *)0x0) {
      PIADCKMDDAK__HCOCAAIGNNL(*ppPVar1,KGLJICLJHEL,(MethodInfo *)0x0);
      if (*ppPVar1 != (PIADCKMDDAK_o *)0x0) {
        ((*ppPVar1)->fields).GDKPGIBMFPA = CJNHFNHJHPE;
        __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5449,
                   (MethodInfo *)0x0);
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5450,
                   (MethodInfo *)0x0);
        CELOLGNMKCG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (SFRequestSender_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)__this,
                     BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string AMIAHGCBOIA(string[] BFPCMHPBAGL)  [RVA 0x3261F4C]
// BDGDJDGHMJI$$AMIAHGCBOIA @ RVA 0x3261F4C

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__AMIAHGCBOIA(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  RaidPlayerInfoHelper_o *pPVar6;
  System_Action_EOLFEKNCPLM__o *pSVar7;
  MethodInfo *method_00;
  PlayerData_o *__this;
  EOLFEKNCPLM_o *HEHMPFLAEGE;
  System_Nullable_int__o SVar8;
  MethodInfo *str0;
  System_RuntimeFieldHandle_Fields *pSVar9;
  int32_t iVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671b5 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5451);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5452);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5453);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5454);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5455);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5456);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5457);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5458);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5459);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5460);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5461);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5462);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5463);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5464);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5465);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5466);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5467);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5468);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5469);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5470);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5471);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5472);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5473);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5474);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5475);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5476);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5477);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5478);
    FUN_01bab630(&Method_BDGDJDGHMJI_CMAHLJPEJGE__);
    FUN_01bab630(&Method_BDGDJDGHMJI_DKPFBGBGALG__);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CGFIAJGHIPL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    auVar11 = FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671b5 = 1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) {
LAB_033627e4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (BFPCMHPBAGL->max_length == 0) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5451,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar9 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5452;
  }
  else {
    if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0(auVar11._0_8_,auVar11._8_8_);
    }
    if (BFPCMHPBAGL->m_Items[0] == (System_String_o *)0x0) goto LAB_033627e4;
    pSVar2 = System_String__ToLower(BFPCMHPBAGL->m_Items[0],(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5453,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5454,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar6 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      pSVar7 = (System_Action_EOLFEKNCPLM__o *)
               thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
      System_Action<object>___ctor();
      if (pPVar6 == (RaidPlayerInfoHelper_o *)0x0) goto LAB_033627e4;
      bVar1 = RaidPlayerInfoHelper__IGFFDAJMPIH(pPVar6,pSVar7,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (bVar1) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5465,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5466;
      }
      else {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5463,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5464;
      }
LAB_0336277c:
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar9->value,
                 (MethodInfo *)0x0);
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar2;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5455,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5456,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this == (PlayerData_o *)0x0) goto LAB_033627e4;
      HEHMPFLAEGE = PlayerData__ELHLAJNJAKD(__this,(MethodInfo *)0x0);
      if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo);
      }
      CGFIAJGHIPL__MDCDPEPHAIC(HEHMPFLAEGE,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5467,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar9 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5468;
      goto LAB_0336277c;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5457,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5458,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar6 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      pSVar7 = (System_Action_EOLFEKNCPLM__o *)
               thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
      System_Action<object>___ctor();
      if (pPVar6 == (RaidPlayerInfoHelper_o *)0x0) goto LAB_033627e4;
      bVar1 = RaidPlayerInfoHelper__IGFFDAJMPIH(pPVar6,pSVar7,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (bVar1) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5471,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5472;
      }
      else {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5469,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5470;
      }
      goto LAB_0336277c;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5459,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5460,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CGFIAJGHIPL__JHEONBGNOPE((MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5473,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar9 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5474;
      goto LAB_0336277c;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5461,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5462,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      SVar8 = AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      iVar10 = SVar8.fields.value;
      if (((ulong)SVar8.fields & 0xff) == 0) {
        iVar10 = 1;
      }
      if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CGFIAJGHIPL_TypeInfo->static_fields->HIOABPPMJJB = iVar10;
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5475,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5476,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString
                         ((int32_t)CGFIAJGHIPL_TypeInfo->static_fields,(MethodInfo *)0x0);
      goto LAB_033622f8;
    }
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5477,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar9 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5478;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar9->value,(MethodInfo *)0x0);
  str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar3,(MethodInfo *)0x0);
  method_00 = str0;
  if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
  }
  pSVar2 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
LAB_033622f8:
  pSVar2 = System_String__Concat((System_String_o *)str0,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private static string HDDPPDKDAKG()  [RVA 0x32612A0]
// BDGDJDGHMJI$$HDDPPDKDAKG @ RVA 0x32612A0

System_String_o * BDGDJDGHMJI__HDDPPDKDAKG(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 033612a4 to 034612b3 has its CatchHandler @ 03361824 */
                    /* try { // try from 033612c4 to 034612cf has its CatchHandler @ 033617f4 */
  if ((DAT_045671b6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy2752___field_0);
                    /* try { // try from 033612e0 to 034612ef has its CatchHandler @ 03361848 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5479);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045671b6 = 1;
  }
                    /* try { // try from 03361300 to 0346130b has its CatchHandler @ 033618ac */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5479,(MethodInfo *)0x0);
                    /* try { // try from 0336131c to 0346132b has its CatchHandler @ 033618c4 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xac0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy2752___field_0,(MethodInfo *)0x0);
                    /* try { // try from 0336133c to 03461347 has its CatchHandler @ 03361870 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static string DMIFLGAIJAA(string[] BFPCMHPBAGL)  [RVA 0x32627EC]
// BDGDJDGHMJI$$DMIFLGAIJAA @ RVA 0x32627EC

System_String_o * BDGDJDGHMJI__DMIFLGAIJAA(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  int32_t iVar3;
  
  if ((DAT_045671b7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5480);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5481);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671b7 = 1;
  }
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
  }
  iVar3 = SVar1.fields.value;
  if (((ulong)SVar1.fields & 0xff) == 0) {
    iVar3 = 1;
  }
  LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP = iVar3;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5480,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5481,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private static void DKPFBGBGALG(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x326290C]
// BDGDJDGHMJI$$DKPFBGBGALG @ RVA 0x326290C

void BDGDJDGHMJI__DKPFBGBGALG(EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  
  if ((DAT_045671b8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5482);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5483);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045671b8 = 1;
  }
  RaidPlayerInfoHelper__BHNOCDOCAJD(HEHMPFLAEGE,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5482,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5483,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private static void PNEPEGFGDBE(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3262A0C]
// BDGDJDGHMJI$$PNEPEGFGDBE @ RVA 0x3262A0C

void BDGDJDGHMJI__PNEPEGFGDBE(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = IDCGLBOIAFJ;
  if ((DAT_045671b9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5484);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5485);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5486);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5487);
    FUN_01bab630(&byte___TypeInfo);
    auVar7 = FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045671b9 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar3 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (bVar3) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5484,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5485,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar4,(MethodInfo *)0x0);
      auVar7 = FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      pNVar6 = auVar7._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar7._8_8_;
      auVar7 = auVar1 << 0x40;
      if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_03362bd0;
      if ((int)pNVar6->max_length != 0) {
        pNVar6->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5486,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5487,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar4,(MethodInfo *)0x0);
      auVar7 = FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      pNVar6 = auVar7._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar7._8_8_;
      auVar7 = auVar2 << 0x40;
      if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_03362bd0;
      if ((int)pNVar6->max_length != 0) {
        pNVar6->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03362bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}


// ===== private static string ONJBFPKLAJG(string[] BFPCMHPBAGL)  [RVA 0x3262BD8]
// BDGDJDGHMJI$$ONJBFPKLAJG @ RVA 0x3262BD8

System_String_o * BDGDJDGHMJI__ONJBFPKLAJG(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  HCKCBFOGMMJ_o *pHVar6;
  System_Nullable_int__o SVar7;
  SFRequestSender_o *pKVar8;
  IKCANHIFLGJ_o *pIVar9;
  
  if ((DAT_045671ba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5488);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5489);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5490);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5491);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5492);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5493);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5494);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5495);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5496);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5497);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5498);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5499);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5500);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5501);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671ba = 1;
  }
  pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return StringLiteral_1/*""*/;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5488,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5489,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5490,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5491,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5492,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5493,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5494,
                   (MethodInfo *)0x0);
                    /* try { // try from 03362f88 to 03462f97 has its CatchHandler @ 03362f98 */
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03362ec4 with catch @ 03362f98
                       catch() { ... } // from try @ 03362f88 with catch @ 03362f98 */
                    /* try { // try from 03362f9c to 03462f9f has its CatchHandler @ 03362fa8 */
                    /* try { // try from 03362fa0 to 03462fab has its CatchHandler @ 03362e3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03362f9c with catch @ 03362fa8
                        */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5495,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar2,pSVar5,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5500,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5501,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          goto LAB_03362ee4;
        }
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pHVar6 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if (pHVar6 != (HCKCBFOGMMJ_o *)0x0) {
        (*(pHVar6->klass->vtable)._4_BOADOENMDDN.methodPtr)
                  (pHVar6,(pHVar6->klass->vtable)._4_BOADOENMDDN.method);
        pKVar8 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar8 != (SFRequestSender_o *)0x0) {
          SFRequestSender__GJHLAGIIMKK(pKVar8,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5498,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5499,
                     (MethodInfo *)0x0);
          pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
      goto LAB_033630d8;
    }
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pHVar6 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (pHVar6 != (HCKCBFOGMMJ_o *)0x0) {
    (*(pHVar6->klass->vtable)._4_BOADOENMDDN.methodPtr)
              (pHVar6,(pHVar6->klass->vtable)._4_BOADOENMDDN.method);
    pHVar6 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (pHVar6 != (HCKCBFOGMMJ_o *)0x0) {
      pIVar9 = (pHVar6->fields).HDPMNCIAOFO;
                    /* try { // try from 03362e3c to 03462e83 has its CatchHandler @ 03362e3c
                       catch() { ... } // from try @ 03362e3c with catch @ 03362e3c
                       catch() { ... } // from try @ 03362e98 with catch @ 03362e3c
                       catch() { ... } // from try @ 03362edc with catch @ 03362e3c
                       catch() { ... } // from try @ 03362fa0 with catch @ 03362e3c */
      SVar7 = AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if (pIVar9 != (IKCANHIFLGJ_o *)0x0) {
        (pIVar9->fields).PBMOPGPGINM = SVar7.fields.value;
        pKVar8 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar8 != (SFRequestSender_o *)0x0) {
          SFRequestSender__GJHLAGIIMKK(pKVar8,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5496,
                     (MethodInfo *)0x0);
                    /* try { // try from 03362e84 to 03462e87 has its CatchHandler @ 03362ea8 */
                    /* try { // try from 03362e8c to 03462e97 has its CatchHandler @ 03362eac */
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03362e98 to 03462ec3 has its CatchHandler @ 03362e3c */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5497,
                     (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03362e84 with catch @ 03362ea8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03362e8c with catch @ 03362eac
                        */
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pHVar6 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                    /* try { // try from 03362ec4 to 03462edb has its CatchHandler @ 03362f98 */
          if ((pHVar6 != (HCKCBFOGMMJ_o *)0x0) &&
             (pIVar9 = (pHVar6->fields).HDPMNCIAOFO, pIVar9 != (IKCANHIFLGJ_o *)0x0)) {
            pSVar2 = System_Int32__ToString((int)pIVar9 + 0x10,(MethodInfo *)0x0);
                    /* try { // try from 03362edc to 03462f87 has its CatchHandler @ 03362e3c */
LAB_03362ee4:
            pSVar2 = System_String__Concat(pSVar5,pSVar2,(MethodInfo *)0x0);
            return pSVar2;
          }
        }
      }
    }
  }
LAB_033630d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string AHIINKMMNKP(string[] BFPCMHPBAGL)  [RVA 0x32630DC]
// BDGDJDGHMJI$$AHIINKMMNKP @ RVA 0x32630DC

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__AHIINKMMNKP(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  LPAPAMPGDFN_o *pLVar7;
  System_String_o *pSVar8;
  PlayerData_o *pEVar9;
  NDPMLPGANCI_o *__this;
  FKDLCJJOGIP_o *__this_00;
  long lVar10;
  undefined8 *puVar11;
  MethodInfo *str0;
  MethodInfo *method_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar12;
  Roster_o *pAVar13;
  System_RuntimeFieldHandle_Fields *pSVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  System_String_o *a;
  undefined1 auVar18 [16];
  System_Nullable_bool__Fields local_48 [2];
  System_Nullable_bool__Fields local_44 [2];
  
  auVar18._8_8_ = method;
  auVar18._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671bb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5502);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5503);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5504);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5505);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5506);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5507);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5508);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5509);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5510);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5511);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5512);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5513);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5514);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5515);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5516);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5518);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5519);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5520);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5521);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5522);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5523);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5524);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5525);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5526);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5527);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5528);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5529);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5530);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5531);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5532);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5533);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5534);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5535);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5536);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5537);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5538);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5539);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5540);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5541);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5542);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5543);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5544);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5546);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5547);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    auVar18 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671bb = 1;
  }
  local_44[0].hasValue = false;
  local_44[0].value = false;
  local_48[0].hasValue = false;
  local_48[0].value = false;
  if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_033640b0;
  if (BFPCMHPBAGL->max_length == 0) {
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5502,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033638cc to 034638d7 has its CatchHandler @ 033639e0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5503,(MethodInfo *)0x0)
    ;
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 033638e8 to 034638ef has its CatchHandler @ 033639f4 */
    method_00 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03363900 to 03463907 has its CatchHandler @ 033639e8 */
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar8 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
                    /* try { // try from 03363918 to 0346391f has its CatchHandler @ 033639e0 */
    pSVar8 = System_String__Concat((System_String_o *)str0,pSVar8,(MethodInfo *)0x0);
    return pSVar8;
  }
  if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0(auVar18._0_8_,auVar18._8_8_);
  }
  a = BFPCMHPBAGL->m_Items[0];
  pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(1,BFPCMHPBAGL,(MethodInfo *)0x0);
  pSVar8 = StringLiteral_1/*""*/;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar8 = pSVar4;
  }
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5504,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5505,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
  if (bVar2) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar13 == (Roster_o *)0x0) ||
       (pLVar7 = (pAVar13->fields).LMCDOMHENMC, pLVar7 == (LPAPAMPGDFN_o *)0x0)) {
LAB_033640b0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LPAPAMPGDFN__HCMCKCNCLPH(pLVar7,-0x14,true,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar13 == (Roster_o *)0x0) ||
       (pLVar7 = (pAVar13->fields).LMCDOMHENMC, pLVar7 == (LPAPAMPGDFN_o *)0x0)) goto LAB_033640b0;
    LPAPAMPGDFN__DHALEEECIOA(pLVar7,false,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5506,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5507,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5508,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5509,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if (pAVar13 == (Roster_o *)0x0) goto LAB_033640b0;
    Roster__LMJFPPDAPBF(pAVar13,pSVar8,pSVar4,0,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 03363648 to 0346373b has its CatchHandler @ 03363648
                       catch() { ... } // from try @ 03363648 with catch @ 03363648
                       catch() { ... } // from try @ 03363984 with catch @ 03363648
                       catch() { ... } // from try @ 033639dc with catch @ 03363648
                       catch() { ... } // from try @ 03363a44 with catch @ 03363648
                       catch() { ... } // from try @ 03363a74 with catch @ 03363648 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar13 == (Roster_o *)0x0) ||
       (pLVar7 = (pAVar13->fields).LMCDOMHENMC, pLVar7 == (LPAPAMPGDFN_o *)0x0)) goto LAB_033640b0;
    LPAPAMPGDFN__MKACHLMIINH(pLVar7,0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5510,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5511,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5512,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0336373c to 03463743 has its CatchHandler @ 03363a28 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5513,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0336374c to 03463753 has its CatchHandler @ 03363a20 */
                    /* try { // try from 03363758 to 0346375f has its CatchHandler @ 03363a24 */
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if (pEVar9 == (PlayerData_o *)0x0) goto LAB_033640b0;
    PlayerData__IOCIGCHAANI(pEVar9,pSVar8,pSVar4,(MethodInfo *)0x0);
    pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar9 == (PlayerData_o *)0x0) goto LAB_033640b0;
    PlayerData__BBMCMFOPMFN(pEVar9,(MethodInfo *)0x0);
                    /* try { // try from 0336378c to 0346379b has its CatchHandler @ 03363a0c */
    __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this == (NDPMLPGANCI_o *)0x0) goto LAB_033640b0;
    NDPMLPGANCI__KJGGEPNHOBK(__this,(MethodInfo *)0x0);
                    /* try { // try from 033637a0 to 034637b7 has its CatchHandler @ 03363a14 */
    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (FKDLCJJOGIP_o *)0x0) goto LAB_033640b0;
    FKDLCJJOGIP__LLBIEPFEJPG(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033637bc to 034637c7 has its CatchHandler @ 03363a04 */
    lVar10 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01b81620();
    }
                    /* try { // try from 033637cc to 034637d7 has its CatchHandler @ 033639f8 */
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01b81620();
    }
    plVar17 = (long *)**(undefined8 **)(lVar10 + 0xb8);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5514,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0336381c to 03463827 has its CatchHandler @ 033639e8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5515,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if (plVar17 == (long *)0x0) goto LAB_033640b0;
    lVar10 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 0336386c to 03463877 has its CatchHandler @ 033639f4 */
        if (*(HCOEEOMMEFL_c **)(piVar16 + -2) == HCOEEOMMEFL_TypeInfo) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_03363b4c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
                    /* try { // try from 0336387c to 03463887 has its CatchHandler @ 033639e4 */
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_01b81914(plVar17,HCOEEOMMEFL_TypeInfo,1);
LAB_03363b4c:
    (*(code *)*puVar11)(plVar17,pSVar8,0,puVar11[1]);
  }
  else {
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5516,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03363960 to 03463983 has its CatchHandler @ 033639fc */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5517,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03363984 to 034639af has its CatchHandler @ 03363648 */
    bVar2 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
    if (bVar2) {
      iVar3 = BFKOGEBDAEH__HDLGLCEKGAN(pSVar8,(MethodInfo *)0x0);
      KFCFGKEHPNK__LKMPIPHGNKF(iVar3,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033639b0 to 034639b3 has its CatchHandler @ 03363a1c */
                    /* try { // try from 033639b4 to 034639b7 has its CatchHandler @ 03363a18 */
                    /* try { // try from 033639b8 to 034639bb has its CatchHandler @ 03363a10 */
                    /* try { // try from 033639bc to 034639bf has its CatchHandler @ 03363a00 */
                    /* try { // try from 033639c0 to 034639c3 has its CatchHandler @ 03363a10 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5518,
                 (MethodInfo *)0x0);
                    /* try { // try from 033639c4 to 034639cb has its CatchHandler @ 03363a08 */
                    /* try { // try from 033639cc to 034639d3 has its CatchHandler @ 033639f0 */
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033639d4 to 034639db has its CatchHandler @ 033639ec */
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5519;
      goto LAB_03363b98;
    }
                    /* try { // try from 033639dc to 03463a3f has its CatchHandler @ 03363648 */
                    /* catch() { ... } // from try @ 033638cc with catch @ 033639e0
                       catch() { ... } // from try @ 03363918 with catch @ 033639e0 */
                    /* catch() { ... } // from try @ 0336387c with catch @ 033639e4 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0336381c with catch @ 033639e8
                       catch() { ... } // from try @ 03363900 with catch @ 033639e8 */
                    /* catch() { ... } // from try @ 033639d4 with catch @ 033639ec */
                    /* catch() { ... } // from try @ 033639cc with catch @ 033639f0 */
                    /* catch() { ... } // from try @ 0336386c with catch @ 033639f4
                       catch() { ... } // from try @ 033638e8 with catch @ 033639f4 */
                    /* catch() { ... } // from try @ 033637cc with catch @ 033639f8 */
                    /* catch() { ... } // from try @ 03363960 with catch @ 033639fc */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5520,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 033639bc with catch @ 03363a00 */
                    /* catch() { ... } // from try @ 033637bc with catch @ 03363a04 */
                    /* catch() { ... } // from try @ 033639c4 with catch @ 03363a08 */
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0336378c with catch @ 03363a0c */
                    /* catch() { ... } // from try @ 033639b8 with catch @ 03363a10
                       catch() { ... } // from try @ 033639c0 with catch @ 03363a10 */
                    /* catch() { ... } // from try @ 033637a0 with catch @ 03363a14 */
                    /* catch() { ... } // from try @ 033639b4 with catch @ 03363a18 */
                    /* catch() { ... } // from try @ 033639b0 with catch @ 03363a1c */
                    /* catch() { ... } // from try @ 0336374c with catch @ 03363a20 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5521,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 03363758 with catch @ 03363a24 */
                    /* catch() { ... } // from try @ 0336373c with catch @ 03363a28 */
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03363a40 to 03463a43 has its CatchHandler @ 03363a64 */
    bVar2 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03363a44 to 03463a6b has its CatchHandler @ 03363648 */
    if (bVar2) {
      local_44[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if (((ushort)local_44[0] & 0xff) == 0) {
                    /* catch() { ... } // from try @ 03363a40 with catch @ 03363a64 */
                    /* try { // try from 03363a6c to 03463a73 has its CatchHandler @ 03363a88 */
                    /* try { // try from 03363a74 to 03463a7f has its CatchHandler @ 03363648 */
        System_Nullable<bool>___ctor
                  ((System_Nullable_bool__o)SUB82(local_44,0),false,
                   Method_System_Nullable<bool>__ctor__);
      }
                    /* try { // try from 03363a80 to 03463a87 has its CatchHandler @ 03363a88 */
                    /* catch() { ... } // from try @ 03363a6c with catch @ 03363a88
                       catch() { ... } // from try @ 03363a80 with catch @ 03363a88 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar13 != (Roster_o *)0x0) {
        pLVar7 = (pAVar13->fields).LMCDOMHENMC;
        bVar2 = System_Nullable<bool>__get_Value
                          ((System_Nullable_bool__o)SUB82(local_44,0),
                           Method_System_Nullable<bool>_get_Value__);
        if (pLVar7 != (LPAPAMPGDFN_o *)0x0) {
          LPAPAMPGDFN__DHALEEECIOA(pLVar7,bVar2,(MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5522,
                     (MethodInfo *)0x0);
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar14 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5523;
          goto LAB_03363b98;
        }
      }
      goto LAB_033640b0;
    }
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5524,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5525,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
    if (bVar2) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar13 != (Roster_o *)0x0) {
        pLVar7 = (pAVar13->fields).LMCDOMHENMC;
        iVar3 = CONLFJJLALA__AHPIBAFDJDJ(pSVar8,(MethodInfo *)0x0);
        if (pLVar7 != (LPAPAMPGDFN_o *)0x0) {
          LPAPAMPGDFN__HCMCKCNCLPH(pLVar7,iVar3,true,(MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5526,
                     (MethodInfo *)0x0);
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar14 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5527;
          goto LAB_03363b98;
        }
      }
      goto LAB_033640b0;
    }
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5528,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5529,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,pSVar8,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar12 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar12 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_033640b0;
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar12,0x25,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5530,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5531;
      goto LAB_03363b98;
    }
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5532,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5533,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,pSVar8,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar12 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar12 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_033640b0;
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar12,0x24,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5534,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5535;
      goto LAB_03363b98;
    }
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5536,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5537,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,pSVar8,(MethodInfo *)0x0);
    if (bVar2) {
      local_48[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if (((ushort)local_48[0] & 0xff) == 0) {
        System_Nullable<bool>___ctor
                  ((System_Nullable_bool__o)SUB82(local_48,0),false,
                   Method_System_Nullable<bool>__ctor__);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5538,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5539,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      bVar2 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_48,0),
                         Method_System_Nullable<bool>_get_Value__);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5542;
      if (!bVar2) {
        pSVar14 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5540;
      }
      pSVar1 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5543;
      if (!bVar2) {
        pSVar1 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5541;
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar14->value,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar1->value,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (pAVar13 == (Roster_o *)0x0) goto LAB_033640b0;
      Roster__LMJFPPDAPBF(pAVar13,pSVar8,pSVar4,0,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5544,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5545;
      goto LAB_03363b98;
    }
  }
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5546,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar14 = (System_RuntimeFieldHandle_Fields *)
            &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5547;
LAB_03363b98:
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar14->value,(MethodInfo *)0x0)
  ;
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  return pSVar8;
}


// ===== public bool ECKDICODLME()  [RVA 0x32640B8]
// BDGDJDGHMJI$$ECKDICODLME @ RVA 0x32640B8

bool BDGDJDGHMJI__ECKDICODLME(BDGDJDGHMJI_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public static string BCDOLHMOPNM()  [RVA 0x32640C0]
// BDGDJDGHMJI$$BCDOLHMOPNM @ RVA 0x32640C0

System_String_o * BDGDJDGHMJI__BCDOLHMOPNM(MethodInfo *method)

{
  SFRequestSender_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045671bc & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5548);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5549);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5550);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5551);
    FUN_01bab630(&Method_BDGDJDGHMJI_NGCHAEMMHOH__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    DAT_045671bc = 1;
  }
  __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5548,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5549,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this != (SFRequestSender_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,pSVar3,(Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,
               0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5550,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5551,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string BFADCPFLMPM()  [RVA 0x3264294]
// BDGDJDGHMJI$$BFADCPFLMPM @ RVA 0x3264294

System_String_o * BDGDJDGHMJI__BFADCPFLMPM(MethodInfo *method)

{
  SFRequestSender_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045671bd & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5552);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5553);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5554);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5555);
    FUN_01bab630(&Method_BDGDJDGHMJI_BJHAOOLENMG__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    DAT_045671bd = 1;
  }
  __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5552,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5553,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this != (SFRequestSender_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,pSVar3,(Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,
               0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5554,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5555,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KLKBNDHGCGC(string KGLJICLJHEL, int CJNHFNHJHPE)  [RVA 0x3264468]
// BDGDJDGHMJI$$KLKBNDHGCGC @ RVA 0x3264468

void BDGDJDGHMJI__KLKBNDHGCGC(System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  OMFJHNMDIBF_o *__this;
  PIADCKMDDAK_o *__this_00;
  SFRequestSender_o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *CELOLGNMKCG;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  PIADCKMDDAK_o **ppPVar1;
  
  if ((DAT_045671be & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5556);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5557);
    FUN_01bab630(&Method_BDGDJDGHMJI_BCEONJKKFKD__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045671be = 1;
  }
  __this = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo);
  OMFJHNMDIBF___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
  PIADCKMDDAK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this != (OMFJHNMDIBF_o *)0x0) {
    ppPVar1 = &(__this->fields).JMACIOLHEOF;
    *ppPVar1 = __this_00;
    thunk_FUN_01c20e04(ppPVar1,__this_00);
    if (*ppPVar1 != (PIADCKMDDAK_o *)0x0) {
      PIADCKMDDAK__HCOCAAIGNNL(*ppPVar1,KGLJICLJHEL,(MethodInfo *)0x0);
      if (*ppPVar1 != (PIADCKMDDAK_o *)0x0) {
        ((*ppPVar1)->fields).GDKPGIBMFPA = CJNHFNHJHPE;
        __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5556,
                   (MethodInfo *)0x0);
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5557,
                   (MethodInfo *)0x0);
        CELOLGNMKCG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (SFRequestSender_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)__this,
                     BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3264634]
// BDGDJDGHMJI$$.ctor @ RVA 0x3264634

void BDGDJDGHMJI___ctor(BDGDJDGHMJI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static string AOCDCCLEBGM(string[] BFPCMHPBAGL)  [RVA 0x326463C]
// BDGDJDGHMJI$$AOCDCCLEBGM @ RVA 0x326463C

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__AOCDCCLEBGM(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Nullable_int__Fields SVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  MethodInfo *str0;
  MethodInfo *pMVar7;
  System_RuntimeFieldHandle_Fields *pSVar8;
  undefined1 auVar9 [16];
  int local_54;
  System_Nullable_int__Fields local_50;
  System_Nullable_int__Fields local_48;
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671bf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5558);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5559);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5560);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5561);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5562);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5564);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5565);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    auVar9 = FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045671bf = 1;
  }
  local_54 = 0;
  if (BFPCMHPBAGL == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
  }
  if ((int)BFPCMHPBAGL->max_length - 1U < 2) {
    SVar3 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
    local_48 = SVar3;
    local_50 = (System_Nullable_int__Fields)
               AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
    if (((ulong)local_50 & 0xff) == 0) {
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_50,0,Method_System_Nullable<int>__ctor__);
      SVar3 = (System_Nullable_int__Fields)((ulong)local_48 & 0xff);
    }
    if (((ulong)SVar3 & 0xff) == 0) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5560,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5561;
    }
    else {
      iVar2 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_48,Method_System_Nullable<int>_get_Value__);
      if (6 < iVar2) {
        System_Nullable<int>___ctor
                  ((System_Nullable_int__o)&local_48,6,Method_System_Nullable<int>__ctor__);
      }
      local_54 = 0;
      iVar2 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_48,Method_System_Nullable<int>_get_Value__);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (-1 < iVar2) {
        do {
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5562,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5563,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          str1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          pMVar7 = (MethodInfo *)0x0;
          pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
          iVar2 = System_Nullable<int>__get_Value
                            ((System_Nullable_int__o)&local_50,
                             Method_System_Nullable<int>_get_Value__);
          if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
          }
          BDGDJDGHMJI__KLKBNDHGCGC(pSVar6,iVar2,pMVar7);
          iVar1 = local_54 + 1;
          local_54 = iVar1;
          iVar2 = System_Nullable<int>__get_Value
                            ((System_Nullable_int__o)&local_48,
                             Method_System_Nullable<int>_get_Value__);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        } while (iVar1 <= iVar2);
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5564,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5565;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar8->value,(MethodInfo *)0x0
              );
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5558,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5559,(MethodInfo *)0x0)
    ;
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pMVar7 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      pMVar7 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar6 = BDGDJDGHMJI__HDDPPDKDAKG(pMVar7);
    pSVar6 = System_String__Concat((System_String_o *)str0,pSVar6,(MethodInfo *)0x0);
  }
  return pSVar6;
}


// ===== private static string NBCFNIKCLKP(string[] BFPCMHPBAGL)  [RVA 0x3264A00]
// BDGDJDGHMJI$$NBCFNIKCLKP @ RVA 0x3264A00

System_String_o * BDGDJDGHMJI__NBCFNIKCLKP(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  
  if ((DAT_045671c0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5566);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5567);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    DAT_045671c0 = 1;
  }
  pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
  }
  ppSVar3 = &KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                    (KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB,(MethodInfo *)0x0);
  if (bVar1) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5566,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5567,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar2;
  }
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB;
}


// ===== private static string EINFELGOJPL(string[] BFPCMHPBAGL)  [RVA 0x3264B3C]
// BDGDJDGHMJI$$EINFELGOJPL @ RVA 0x3264B3C

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__EINFELGOJPL(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  RaidViewController_o *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *x;
  System_RuntimeFieldHandle_Fields *pSVar3;
  System_RuntimeFieldHandle_Fields *pSVar4;
  
  if ((DAT_045671c1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5568);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5569);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5570);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5571);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671c1 = 1;
    method = extraout_x1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
    DAT_045660f3 = '\x01';
  }
  x = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5569;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5568;
  }
  else {
    if ((x == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) ||
       (__this = (x->fields).Controller, __this == (RaidViewController_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    RaidViewController__BIFIGDCAHGN(__this,(MethodInfo *)0x0);
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5571;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5570;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,(System_RuntimeFieldHandle_o)pSVar3->value,
             (MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,(System_RuntimeFieldHandle_o)pSVar4->value,
             (MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private static string GDLIEPLBANO(string[] BFPCMHPBAGL)  [RVA 0x3264C94]
// BDGDJDGHMJI$$GDLIEPLBANO @ RVA 0x3264C94

System_String_o * BDGDJDGHMJI__GDLIEPLBANO(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *str1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  int32_t local_34;
  
  if ((DAT_045671c2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5572);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5573);
    FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671c2 = 1;
  }
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if (((ulong)SVar1.fields & 0xff) == 0) {
    if ((BGPFALGFJIL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          (BGPFALGFJIL_TypeInfo->static_fields->JBGPHLKPICA).fields,
                          (MethodInfo *)0x0);
  }
  else {
    local_34 = SVar1.fields.value;
  }
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(local_34,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (HJPEKDOPBHN_TypeInfo->static_fields->ENCOAOMGLKD).fields = CVar3;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5572,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5573,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  str1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private static string EPPOAOAJPBC(string[] BFPCMHPBAGL)  [RVA 0x3264E2C]
// BDGDJDGHMJI$$EPPOAOAJPBC @ RVA 0x3264E2C

System_String_o * BDGDJDGHMJI__EPPOAOAJPBC(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  MethodInfo *str0;
  System_String_o *str0_00;
  System_String_o *str2;
  System_String_o *str3;
  MethodInfo *pMVar5;
  undefined1 auVar6 [16];
  int32_t local_3c;
  System_Nullable_int__Fields local_38;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671c3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5574);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5575);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5576);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5577);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5578);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5579);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5580);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5581);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    auVar6 = FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045671c3 = 1;
  }
  local_3c = 0;
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length == 2) {
      pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      pMVar5 = (MethodInfo *)0x0;
      local_38 = (System_Nullable_int__Fields)
                 AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if ((((ulong)local_38 & 0xff) == 0) ||
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0), bVar1)) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5576,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5577,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      else {
        CJNHFNHJHPE = System_Nullable<int>__get_Value
                                ((System_Nullable_int__o)&local_38,
                                 Method_System_Nullable<int>_get_Value__);
        if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
        }
        BDGDJDGHMJI__KLKBNDHGCGC(pSVar2,CJNHFNHJHPE,pMVar5);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5578,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5579,
                   (MethodInfo *)0x0);
        str0_00 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5580,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5581,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_3c = System_Nullable<int>__get_Value
                             ((System_Nullable_int__o)&local_38,
                              Method_System_Nullable<int>_get_Value__);
        str3 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(str0_00,pSVar2,str2,str3,(MethodInfo *)0x0);
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5574,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5575,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pMVar5 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        pMVar5 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar2 = BDGDJDGHMJI__HDDPPDKDAKG(pMVar5);
      pSVar2 = System_String__Concat((System_String_o *)str0,pSVar2,(MethodInfo *)0x0);
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}


// ===== private static void EMIEFDFIEMD(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3265184]
// BDGDJDGHMJI$$EMIEFDFIEMD @ RVA 0x3265184

void BDGDJDGHMJI__EMIEFDFIEMD(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  PlayerData_o *__this;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  PIADCKMDDAK_o *CHMGGEMGDPE;
  
  if ((DAT_045671c4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5582);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5583);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5584);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5585);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
    DAT_045671c4 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        CHMGGEMGDPE = pIVar2[2].monitor;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
        __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this != (PlayerData_o *)0x0) {
          PlayerData__KFDOOFMOAEH(__this,CHMGGEMGDPE,false,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5582,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5583,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                   FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
          if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
            if ((int)pNVar6->max_length != 0) {
              pNVar6->m_Items[0] = 6;
              Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
              return;
            }
            goto LAB_033653c0;
          }
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5584,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5585,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar6->max_length != 0) {
          pNVar6->m_Items[0] = 6;
          Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
          return;
        }
LAB_033653c0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string MHGOCDEIGLJ(string[] BFPCMHPBAGL)  [RVA 0x32653C4]
// BDGDJDGHMJI$$MHGOCDEIGLJ @ RVA 0x32653C4

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__MHGOCDEIGLJ(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *b;
  RaidConfig_o *pJVar6;
  EGMONPGHHDP_o *pEVar7;
  RaidConfig_CKEMIAEPGKD_array *pJVar8;
  EGMONPGHHDP_o *__this;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_RuntimeFieldHandle_Fields *pSVar9;
  RaidConfig_CKEMIAEPGKD_o *CLDEGLBDGGE;
  
  if ((DAT_045671c5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5586);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5587);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5588);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5589);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5590);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5592);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5593);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5594);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5595);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5596);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5597);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045671c5 = 1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_033657a4;
  if (BFPCMHPBAGL->max_length == 0) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5586,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar9 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5587;
LAB_033656a4:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar9->value,(MethodInfo *)0x0
              );
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    method_00 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((int)BFPCMHPBAGL->max_length == 0) {
LAB_033657a8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  if (BFPCMHPBAGL->m_Items[0] != (System_String_o *)0x0) {
    pSVar3 = System_String__ToLower(BFPCMHPBAGL->m_Items[0],(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5588,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5589,(MethodInfo *)0x0)
    ;
    b = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5596,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar9 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5597;
      goto LAB_033656a4;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar6 != (RaidConfig_o *)0x0) {
      if ((pJVar6->fields)._NFFDCNIMBHK_k__BackingField == (RaidConfig_JMEJFGKJNEA_o *)0x0) {
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5590,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5591;
        goto LAB_0336573c;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar7 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if ((pEVar7 != (EGMONPGHHDP_o *)0x0) &&
         (pJVar8 = EGMONPGHHDP__BILAAEOFDBJ(pEVar7,(MethodInfo *)0x0),
         pJVar8 != (RaidConfig_CKEMIAEPGKD_array *)0x0)) {
        if ((uint)pJVar8->max_length < 2) goto LAB_033657a8;
        CLDEGLBDGGE = pJVar8->m_Items[1];
        if ((CLDEGLBDGGE == (RaidConfig_CKEMIAEPGKD_o *)0x0) &&
           (CLDEGLBDGGE = pJVar8->m_Items[0], CLDEGLBDGGE == (RaidConfig_CKEMIAEPGKD_o *)0x0)) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5592,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar9 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5593;
LAB_0336573c:
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar9->value,
                     (MethodInfo *)0x0);
          pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          return pSVar3;
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar7 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
        __this = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
        if (__this != (EGMONPGHHDP_o *)0x0) {
          iVar2 = EGMONPGHHDP__AKDNGOBCGHB(__this,CLDEGLBDGGE,(MethodInfo *)0x0);
          if (pEVar7 != (EGMONPGHHDP_o *)0x0) {
            EGMONPGHHDP__LJAGKBMCPGO(pEVar7,iVar2 + 1,true,(MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5594,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar9 = (System_RuntimeFieldHandle_Fields *)
                     &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5595;
            goto LAB_0336573c;
          }
        }
      }
    }
  }
LAB_033657a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void CMAHLJPEJGE(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x32657AC]
// BDGDJDGHMJI$$CMAHLJPEJGE @ RVA 0x32657AC

void BDGDJDGHMJI__CMAHLJPEJGE(EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  MethodInfo *extraout_x1;
  
  if ((DAT_045671c6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5598);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5599);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CGFIAJGHIPL_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045671c6 = 1;
    method = extraout_x1;
  }
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo,method);
  }
  CGFIAJGHIPL__MDCDPEPHAIC(HEHMPFLAEGE,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5598,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5599,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private static string IFIMMEKBCOD(string[] BFPCMHPBAGL)  [RVA 0x32658C8]
// BDGDJDGHMJI$$IFIMMEKBCOD @ RVA 0x32658C8

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__IFIMMEKBCOD(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t OGPGLGPMEPD;
  System_Nullable_int__Fields SVar2;
  System_Nullable_float__Fields SVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_String_o *pSVar6;
  System_RuntimeFieldHandle_Fields *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *x;
  RaidViewController_o *__this;
  float LFJGFLNMBMC;
  System_Nullable_float__Fields local_28;
  System_Nullable_int__Fields local_18;
  
  if ((DAT_045671c7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5600);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5601);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5602);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5603);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5604);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5605);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671c7 = 1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_03365c18;
  if ((int)BFPCMHPBAGL->max_length - 1U < 2) {
    SVar2 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
    local_18 = SVar2;
    SVar3 = (System_Nullable_float__Fields)AJAMDCEKAFE__FOKFAIPDIMB(1,BFPCMHPBAGL,(MethodInfo *)0x0)
    ;
    local_28 = SVar3;
    if (((ulong)SVar2 & 0xff) == 0) {
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_18,0,Method_System_Nullable<int>__ctor__);
      SVar3 = (System_Nullable_float__Fields)((ulong)local_28 & 0xff);
    }
    if (((ulong)SVar3 & 0xff) == 0) {
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_28,0.0,Method_System_Nullable<float>__ctor__);
    }
    if (DAT_045660f3 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
      DAT_045660f3 = '\x01';
    }
    x = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5602,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5603;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
LAB_03365c18:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this = (x->fields).Controller;
      OGPGLGPMEPD = System_Nullable<int>__get_Value
                              ((System_Nullable_int__o)&local_18,
                               Method_System_Nullable<int>_get_Value__);
      LFJGFLNMBMC = System_Nullable<float>__get_Value
                              ((System_Nullable_float__o)&local_28,
                               Method_System_Nullable<float>_get_Value__);
      if (__this == (RaidViewController_o *)0x0) goto LAB_03365c18;
      RaidViewController__DNGIFOCGGCN(__this,OGPGLGPMEPD,LFJGFLNMBMC,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5604,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5605;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar7->value,(MethodInfo *)0x0
              );
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5600,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5601,(MethodInfo *)0x0)
    ;
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    method_00 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar6 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    pSVar6 = System_String__Concat((System_String_o *)str0,pSVar6,(MethodInfo *)0x0);
  }
  return pSVar6;
}


// ===== private static void BJHAOOLENMG(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3265C1C]
// BDGDJDGHMJI$$BJHAOOLENMG @ RVA 0x3265C1C

void BDGDJDGHMJI__BJHAOOLENMG(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  RaidManager_o *__this;
  SFRequestSender_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  UnityEngine_Object_o *exists;
  
  if ((DAT_045671c8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5606);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5607);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5608);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5609);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045671c8 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (bVar1) {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03365ef0;
        Nekki_SF2_GUI_Map_MapScene__CloseRaids
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0
                  );
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this != (RaidManager_o *)0x0) {
        RaidManager__GJPOEDJOAAM(__this,false,(MethodInfo *)0x0);
        __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        if (__this_00 != (SFRequestSender_o *)0x0) {
          SFRequestSender__FHIODBIPGBG(__this_00,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5606,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5607,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                   FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
          if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
            if ((int)pNVar6->max_length != 0) {
              pNVar6->m_Items[0] = 6;
              Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
              return;
            }
            goto LAB_03365ef4;
          }
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5608,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5609,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar6->max_length != 0) {
          pNVar6->m_Items[0] = 6;
          Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
          return;
        }
LAB_03365ef4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_03365ef0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string GBAFJIHMNCI(string[] BFPCMHPBAGL)  [RVA 0x3265EF8]
// BDGDJDGHMJI$$GBAFJIHMNCI @ RVA 0x3265EF8

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__GBAFJIHMNCI(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  bool bVar3;
  System_Nullable_bool__o SVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *CJNHFNHJHPE;
  Roster_o *__this;
  
  if ((DAT_045671c9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5610);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5611);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5612);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5613);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5614);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5615);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5616);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5617);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    DAT_045671c9 = 1;
  }
  SVar4 = AJAMDCEKAFE__FAEBPLENEGK(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5610,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5611,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  bVar3 = (ushort)SVar4.fields >> 8 != 0;
  pSVar1 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5612;
  if (bVar3) {
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5614;
  }
  pSVar2 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5613;
  if (bVar3) {
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5615;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0);
  CJNHFNHJHPE = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  if (__this != (Roster_o *)0x0) {
    Roster__LMJFPPDAPBF(__this,pSVar7,CJNHFNHJHPE,0,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5616,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5617,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    return pSVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string PEIBABOGLNI(string[] BFPCMHPBAGL)  [RVA 0x3266180]
// BDGDJDGHMJI$$PEIBABOGLNI @ RVA 0x3266180

System_String_o * BDGDJDGHMJI__PEIBABOGLNI(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *str1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  int32_t local_34;
  
  if ((DAT_045671ca & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5618);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5619);
    FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671ca = 1;
  }
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if (((ulong)SVar1.fields & 0xff) == 0) {
    if ((BGPFALGFJIL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          (BGPFALGFJIL_TypeInfo->static_fields->NLEJEOIFOMI).fields,
                          (MethodInfo *)0x0);
  }
  else {
    local_34 = SVar1.fields.value;
  }
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(local_34,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (HJPEKDOPBHN_TypeInfo->static_fields->MJEPNDCEBCK).fields = CVar3;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5618,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5619,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  str1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private static void GOMNKJKIJEB(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3266318]
// BDGDJDGHMJI$$GOMNKJKIJEB @ RVA 0x3266318

void BDGDJDGHMJI__GOMNKJKIJEB(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Roster_o *__this;
  PlayerData_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar7;
  
  if ((DAT_045671cb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5620);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5621);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5622);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5623);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671cb = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
         __this != (Roster_o *)0x0)) {
        Roster__OGPHHGFFKHD(__this,(long)pIVar2[1].monitor >> 0x20,7,false,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 != (PlayerData_o *)0x0) {
          PlayerData__PJDFGEMEJAC
                    (__this_00,*(int32_t *)((long)&pIVar2[1].monitor + 4),(MethodInfo *)0x0);
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
          ;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar1) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                     _JPDNDPEAJAL_k__BackingField;
            if (pNVar7 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03366674;
            Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(pNVar7,(MethodInfo *)0x0);
          }
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5620,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5621,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                   FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
          if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
            if ((int)pNVar6->max_length != 0) {
              pNVar6->m_Items[0] = 6;
              Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
              return;
            }
            goto LAB_03366678;
          }
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5622,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5623,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar6->max_length != 0) {
          pNVar6->m_Items[0] = 6;
          Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
          return;
        }
LAB_03366678:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_03366674:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string KDLOHPGJKDG(string[] BFPCMHPBAGL)  [RVA 0x326667C]
// BDGDJDGHMJI$$KDLOHPGJKDG @ RVA 0x326667C

System_String_o * BDGDJDGHMJI__KDLOHPGJKDG(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  MethodInfo *str0;
  System_String_o *str0_00;
  System_String_o *str2;
  System_String_o *str3;
  MethodInfo *pMVar5;
  undefined1 auVar6 [16];
  int32_t local_3c;
  System_Nullable_int__Fields local_38;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671cc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5624);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5625);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5626);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5627);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5631);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    auVar6 = FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045671cc = 1;
  }
  local_3c = 0;
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length == 2) {
      pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      pMVar5 = (MethodInfo *)0x0;
      local_38 = (System_Nullable_int__Fields)
                 AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if ((((ulong)local_38 & 0xff) == 0) ||
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0), bVar1)) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5626,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5627,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      else {
        CJNHFNHJHPE = System_Nullable<int>__get_Value
                                ((System_Nullable_int__o)&local_38,
                                 Method_System_Nullable<int>_get_Value__);
        if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
        }
        BDGDJDGHMJI__MKNJLMOFDHM(pSVar2,CJNHFNHJHPE,pMVar5);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5628,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5629,
                   (MethodInfo *)0x0);
        str0_00 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5630,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5631,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_3c = System_Nullable<int>__get_Value
                             ((System_Nullable_int__o)&local_38,
                              Method_System_Nullable<int>_get_Value__);
        str3 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(str0_00,pSVar2,str2,str3,(MethodInfo *)0x0);
      }
    }
    else {
                    /* try { // try from 033667fc to 034669cf has its CatchHandler @ 033667fc
                       catch() { ... } // from try @ 033667fc with catch @ 033667fc
                       catch() { ... } // from try @ 03366a44 with catch @ 033667fc
                       catch() { ... } // from try @ 03366c88 with catch @ 033667fc
                       catch() { ... } // from try @ 03366cd4 with catch @ 033667fc
                       catch() { ... } // from try @ 03366d14 with catch @ 033667fc */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5624,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5625,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pMVar5 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        pMVar5 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar2 = BDGDJDGHMJI__HDDPPDKDAKG(pMVar5);
      pSVar2 = System_String__Concat((System_String_o *)str0,pSVar2,(MethodInfo *)0x0);
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033669d0 to 034669d7 has its CatchHandler @ 03366c8c */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}


// ===== private static string FEAPLDIKLJB(string[] BFPCMHPBAGL)  [RVA 0x32669D4]
// BDGDJDGHMJI$$FEAPLDIKLJB @ RVA 0x32669D4

System_String_o * BDGDJDGHMJI__FEAPLDIKLJB(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *b;
  System_Nullable_int__o SVar5;
  MethodInfo *str0;
  MethodInfo *method_00;
  int32_t iVar6;
  undefined1 auVar7 [16];
  int32_t local_34;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671cd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5633);
                    /* try { // try from 03366a10 to 03466a17 has its CatchHandler @ 03366ca0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5637);
                    /* try { // try from 03366a3c to 03466a43 has its CatchHandler @ 03366c94 */
                    /* try { // try from 03366a44 to 03466c67 has its CatchHandler @ 033667fc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5639);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    auVar7 = FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671cd = 1;
  }
  local_34 = 0;
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if (BFPCMHPBAGL->max_length == 0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5632,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5633,
                 (MethodInfo *)0x0);
                    /* try { // try from 03366c68 to 03466c6b has its CatchHandler @ 03366cb0 */
                    /* try { // try from 03366c6c to 03466c6f has its CatchHandler @ 03366ca8 */
                    /* try { // try from 03366c70 to 03466c73 has its CatchHandler @ 03366ca4 */
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03366c74 to 03466c77 has its CatchHandler @ 03366c9c */
                    /* try { // try from 03366c78 to 03466c7b has its CatchHandler @ 03366c98 */
                    /* try { // try from 03366c7c to 03466c7f has its CatchHandler @ 03366c90 */
                    /* try { // try from 03366c84 to 03466c87 has its CatchHandler @ 03366cb4 */
                    /* try { // try from 03366c88 to 03466ccf has its CatchHandler @ 033667fc */
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033669d0 with catch @ 03366c8c */
                    /* catch() { ... } // from try @ 03366c7c with catch @ 03366c90 */
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
                    /* catch() { ... } // from try @ 03366a3c with catch @ 03366c94 */
      pSVar2 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    }
    else {
      if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0(auVar7._0_8_,auVar7._8_8_);
      }
      if (BFPCMHPBAGL->m_Items[0] == (System_String_o *)0x0) goto LAB_03366d18;
      pSVar2 = System_String__ToLower(BFPCMHPBAGL->m_Items[0],(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5634,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5635,
                 (MethodInfo *)0x0);
      b = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,b,(MethodInfo *)0x0);
      if (!bVar1) {
                    /* catch() { ... } // from try @ 03366c68 with catch @ 03366cb0 */
                    /* catch() { ... } // from try @ 03366c84 with catch @ 03366cb4 */
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5638,
                   (MethodInfo *)0x0);
                    /* try { // try from 03366cd0 to 03466cd3 has its CatchHandler @ 03366cfc */
                    /* try { // try from 03366cd4 to 03466d0b has its CatchHandler @ 033667fc */
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5639,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03366cd0 with catch @ 03366cfc */
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        return pSVar2;
      }
      SVar5 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      iVar6 = 10;
      if (((ulong)SVar5.fields & 0xff) != 0) {
        iVar6 = SVar5.fields.value;
      }
      if (DAT_04566746 == '\0') {
        FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
        DAT_04566746 = '\x01';
      }
      Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField = iVar6;
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5636,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5637,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (DAT_0456720c == '\0') {
        FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
        DAT_0456720c = '\x01';
      }
      local_34 = Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField;
      pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 03366c78 with catch @ 03366c98 */
                    /* catch() { ... } // from try @ 03366c74 with catch @ 03366c9c */
                    /* catch() { ... } // from try @ 03366a10 with catch @ 03366ca0 */
                    /* catch() { ... } // from try @ 03366c70 with catch @ 03366ca4 */
    pSVar2 = System_String__Concat((System_String_o *)str0,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 03366d0c to 03466d13 has its CatchHandler @ 03366d28 */
                    /* try { // try from 03366d14 to 03466d1f has its CatchHandler @ 033667fc */
    return pSVar2;
                    /* catch() { ... } // from try @ 03366c6c with catch @ 03366ca8 */
  }
LAB_03366d18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3266D20]
// BDGDJDGHMJI$$KCBILPIAPHN @ RVA 0x3266D20

int32_t BDGDJDGHMJI__KCBILPIAPHN(BDGDJDGHMJI_o *__this,MethodInfo *method)

{
                    /* try { // try from 03366d20 to 03466d27 has its CatchHandler @ 03366d28 */
  return 0;
}


// ===== private static string LLJPNLBOHOO(string[] BFPCMHPBAGL)  [RVA 0x3266D28]
// BDGDJDGHMJI$$LLJPNLBOHOO @ RVA 0x3266D28

System_String_o * BDGDJDGHMJI__LLJPNLBOHOO(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  PlayerData_o *pEVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03366d0c with catch @ 03366d28
                       catch() { ... } // from try @ 03366d20 with catch @ 03366d28 */
  if ((DAT_045671ce & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5640);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5641);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045671ce = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (PlayerData_o *)0x0) {
    (pEVar1->fields).NCMLGNEFKBF = 0;
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5640,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5641,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string MGIGPNKGILA()  [RVA 0x3266E08]
// BDGDJDGHMJI$$MGIGPNKGILA @ RVA 0x3266E08

System_String_o * BDGDJDGHMJI__MGIGPNKGILA(MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  RaidManager_o *__this;
  SFRequestSender_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  UnityEngine_Object_o *exists;
  
  if ((DAT_045671cf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5642);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5643);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045671cf = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03366fb8;
    Nekki_SF2_GUI_Map_MapScene__CloseRaids
              ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this != (RaidManager_o *)0x0) {
    RaidManager__GJPOEDJOAAM(__this,false,(MethodInfo *)0x0);
    __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (SFRequestSender_o *)0x0) {
      SFRequestSender__FHIODBIPGBG(__this_00,(MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5642,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5643,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
LAB_03366fb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string OMFBPCMMJKP(string[] BFPCMHPBAGL)  [RVA 0x3266FBC]
// BDGDJDGHMJI$$OMFBPCMMJKP @ RVA 0x3266FBC

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__OMFBPCMMJKP(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_bool__o SVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_Nullable_int__o SVar5;
  System_String_o *pSVar6;
  MethodInfo *str0;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_RuntimeFieldHandle_Fields *pSVar7;
  RaidViewController_o *__this;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *x;
  
  if ((DAT_045671d0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5644);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5645);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5646);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5647);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5648);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5649);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5650);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5651);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671d0 = 1;
    method = extraout_x1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) {
LAB_033672d4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (BFPCMHPBAGL->max_length != 0) {
    if (DAT_045660f3 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
      DAT_045660f3 = '\x01';
    }
    x = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5646,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5647;
    }
    else {
      SVar5 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      if ((((ulong)SVar5.fields & 0xff) == 0) || ((long)SVar5.fields < 0)) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5648,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar7 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5649;
        goto LAB_03367278;
      }
      SVar2 = AJAMDCEKAFE__FAEBPLENEGK(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if ((x == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) ||
         (__this = (x->fields).Controller, __this == (RaidViewController_o *)0x0)) goto LAB_033672d4;
      RaidViewController__DLHAPMJGHKJ
                (__this,SVar5.fields.value,(ushort)SVar2.fields >> 8 != 0,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5650,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5651;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar7->value,(MethodInfo *)0x0
              );
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    return pSVar6;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5644,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar7 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5645;
LAB_03367278:
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar7->value,(MethodInfo *)0x0);
  str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  method_00 = str0;
  if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
  }
  pSVar6 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
  pSVar6 = System_String__Concat((System_String_o *)str0,pSVar6,(MethodInfo *)0x0);
  return pSVar6;
}


// ===== public static string DIOLFKOOCEH()  [RVA 0x32672D8]
// BDGDJDGHMJI$$DIOLFKOOCEH @ RVA 0x32672D8

System_String_o * BDGDJDGHMJI__DIOLFKOOCEH(MethodInfo *method)

{
  ushort uVar1;
  PlayerData_o *pEVar2;
  NFFDIPBFJHP_o *pNVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  System_String_array *values;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_String_o *KCFLBKINDFM;
  GLPEFEEGCPM_o *pGVar9;
  FADHMEJJCPO_o *pFVar10;
  GCPFDLNAFDF_c *pGVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE;
  int32_t local_78;
  int32_t local_74;
  int64_t local_70;
  int32_t local_64;
  int64_t local_60;
  int64_t local_58;
  
  if ((DAT_045671d1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5652);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5653);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5654);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5655);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5656);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5657);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5660);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5661);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5662);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5663);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5664);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5665);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5666);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5667);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5668);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5669);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5670);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5671);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5672);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5673);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671d1 = 1;
  }
  local_78 = 0;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar14 = GameUtils_TypeInfo->static_fields->KIINGPDGEDJ;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar2 != (PlayerData_o *)0x0) {
    local_58 = PlayerData__APCMGOCHMGC(pEVar2,(MethodInfo *)0x0);
    pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if ((pNVar3 != (NFFDIPBFJHP_o *)0x0) &&
       (pGVar9 = (pNVar3->fields).NEACDFLBNFO, pGVar9 != (GLPEFEEGCPM_o *)0x0)) {
      local_60 = (pGVar9->fields).LAEGCKIFDOC;
      pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if ((pNVar3 != (NFFDIPBFJHP_o *)0x0) &&
         ((pGVar9 = (pNVar3->fields).NEACDFLBNFO, pGVar9 != (GLPEFEEGCPM_o *)0x0 &&
          (pFVar10 = (pGVar9->fields).PBBGNHKFEPG, pFVar10 != (FADHMEJJCPO_o *)0x0)))) {
        local_64 = (pFVar10->fields).PDOMCPONBNB;
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (PlayerData_o *)0x0) {
          local_70 = PlayerData__DHLIBNAGDAD(pEVar2,(MethodInfo *)0x0);
          local_74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                (HJPEKDOPBHN_TypeInfo->static_fields->MJEPNDCEBCK).fields,
                                (MethodInfo *)0x0);
          if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
          }
          pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
          if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
            pGVar11 = pGVar4->klass;
            uVar1._0_1_ = (pGVar11->_2).rank;
            uVar1._1_1_ = (pGVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar1;
            if (uVar12 != 0) {
              piVar13 = &((pGVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)KADDELABILH_TypeInfo) {
                  pVVar5 = pGVar11->vtable + (*piVar13 + 4);
                  goto LAB_033675d4;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,KADDELABILH_TypeInfo,4);
LAB_033675d4:
            CJNHFNHJHPE.fields =
                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 (*pVVar5->methodPtr)(pGVar4,pVVar5->method);
            local_78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                 (CJNHFNHJHPE,(MethodInfo *)0x0);
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xf);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5652,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5653,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            if (values != (System_String_array *)0x0) {
              if ((int)values->max_length != 0) {
                values->m_Items[0] = pSVar8;
                thunk_FUN_01c20e04(values->m_Items,pSVar8);
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = pSVar14;
                  thunk_FUN_01c20e04(values->m_Items + 1,pSVar14);
                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar6,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5654,
                             (MethodInfo *)0x0);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5655,
                             (MethodInfo *)0x0);
                  pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                  if (2 < (uint)values->max_length) {
                    values->m_Items[2] = pSVar14;
                    thunk_FUN_01c20e04(values->m_Items + 2,pSVar14);
                    pSVar14 = System_Int64__ToString((int64_t)&local_58,(MethodInfo *)0x0);
                    if (3 < (uint)values->max_length) {
                      values->m_Items[3] = pSVar14;
                      thunk_FUN_01c20e04(values->m_Items + 3,pSVar14);
                      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar6,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5656,
                                 (MethodInfo *)0x0);
                      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar7,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5657,
                                 (MethodInfo *)0x0);
                      pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                      if (4 < (uint)values->max_length) {
                        values->m_Items[4] = pSVar14;
                        thunk_FUN_01c20e04(values->m_Items + 4,pSVar14);
                        pSVar14 = System_Int64__ToString((int64_t)&local_60,(MethodInfo *)0x0);
                        if (5 < (uint)values->max_length) {
                          values->m_Items[5] = pSVar14;
                          thunk_FUN_01c20e04(values->m_Items + 5,pSVar14);
                          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar6,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5658
                                     ,(MethodInfo *)0x0);
                          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar7,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5659
                                     ,(MethodInfo *)0x0);
                          pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                          if (6 < (uint)values->max_length) {
                            values->m_Items[6] = pSVar14;
                            thunk_FUN_01c20e04(values->m_Items + 6,pSVar14);
                            pSVar14 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                            if (7 < (uint)values->max_length) {
                              values->m_Items[7] = pSVar14;
                              thunk_FUN_01c20e04(values->m_Items + 7,pSVar14);
                              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar6,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5660
                                         ,(MethodInfo *)0x0);
                              pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar7,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5661
                                         ,(MethodInfo *)0x0);
                              pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                              if (8 < (uint)values->max_length) {
                                values->m_Items[8] = pSVar14;
                                thunk_FUN_01c20e04(values->m_Items + 8,pSVar14);
                                pSVar14 = System_Int64__ToString
                                                    ((int64_t)&local_70,(MethodInfo *)0x0);
                                if (9 < (uint)values->max_length) {
                                  values->m_Items[9] = pSVar14;
                                  thunk_FUN_01c20e04(values->m_Items + 9,pSVar14);
                                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar6,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5662
                                             ,(MethodInfo *)0x0);
                                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar7,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5663
                                             ,(MethodInfo *)0x0);
                                  pSVar14 = OMHODMCHILE__NPKGDBHJKCK
                                                      (pSVar6,pSVar7,(MethodInfo *)0x0);
                                  if (10 < (uint)values->max_length) {
                                    values->m_Items[10] = pSVar14;
                                    thunk_FUN_01c20e04(values->m_Items + 10,pSVar14);
                                    pSVar14 = System_Int32__ToString
                                                        ((int32_t)&local_74,(MethodInfo *)0x0);
                                    if (0xb < (uint)values->max_length) {
                                      values->m_Items[0xb] = pSVar14;
                                      thunk_FUN_01c20e04(values->m_Items + 0xb,pSVar14);
                                      pSVar6 = (System_Byte_array *)
                                               FUN_01bab718(byte___TypeInfo,0x40);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                ((System_Array_o *)pSVar6,
                                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5664
                                                 ,(MethodInfo *)0x0);
                                      pSVar7 = (System_Byte_array *)
                                               FUN_01bab718(byte___TypeInfo,0x40);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                ((System_Array_o *)pSVar7,
                                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5665
                                                 ,(MethodInfo *)0x0);
                                      pSVar14 = OMHODMCHILE__NPKGDBHJKCK
                                                          (pSVar6,pSVar7,(MethodInfo *)0x0);
                                      if (0xc < (uint)values->max_length) {
                                        values->m_Items[0xc] = pSVar14;
                                        thunk_FUN_01c20e04(values->m_Items + 0xc,pSVar14);
                                        pSVar14 = System_Int32__ToString
                                                            ((int32_t)&local_78,(MethodInfo *)0x0);
                                        if (0xd < (uint)values->max_length) {
                                          values->m_Items[0xd] = pSVar14;
                                          thunk_FUN_01c20e04(values->m_Items + 0xd,pSVar14);
                                          pSVar6 = (System_Byte_array *)
                                                   FUN_01bab718(byte___TypeInfo,0x40);
                                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                    ((System_Array_o *)pSVar6,
                                                                                                          
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5666
                                                  ,(MethodInfo *)0x0);
                                          pSVar7 = (System_Byte_array *)
                                                   FUN_01bab718(byte___TypeInfo,0x40);
                                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                    ((System_Array_o *)pSVar7,
                                                                                                          
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5667
                                                  ,(MethodInfo *)0x0);
                                          pSVar14 = OMHODMCHILE__NPKGDBHJKCK
                                                              (pSVar6,pSVar7,(MethodInfo *)0x0);
                                          if (0xe < (uint)values->max_length) {
                                            values->m_Items[0xe] = pSVar14;
                                            thunk_FUN_01c20e04();
                                            pSVar14 = System_String__Concat
                                                                (values,(MethodInfo *)0x0);
                                            pSVar6 = (System_Byte_array *)
                                                     FUN_01bab718(byte___TypeInfo,0x40);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      ((System_Array_o *)pSVar6,
                                                                                                              
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5668
                                                  ,(MethodInfo *)0x0);
                                            pSVar7 = (System_Byte_array *)
                                                     FUN_01bab718(byte___TypeInfo,0x40);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      ((System_Array_o *)pSVar7,
                                                                                                              
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5669
                                                  ,(MethodInfo *)0x0);
                                            pSVar8 = OMHODMCHILE__NPKGDBHJKCK
                                                               (pSVar6,pSVar7,(MethodInfo *)0x0);
                                            pSVar6 = (System_Byte_array *)
                                                     FUN_01bab718(byte___TypeInfo,0x40);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      ((System_Array_o *)pSVar6,
                                                                                                              
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5670
                                                  ,(MethodInfo *)0x0);
                                            pSVar7 = (System_Byte_array *)
                                                     FUN_01bab718(byte___TypeInfo,0x40);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      ((System_Array_o *)pSVar7,
                                                                                                              
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5671
                                                  ,(MethodInfo *)0x0);
                                            KCFLBKINDFM = OMHODMCHILE__NPKGDBHJKCK
                                                                    (pSVar6,pSVar7,(MethodInfo *)0x0
                                                                    );
                                            DialogsOpener__JNDPLPKDPCP
                                                      (pSVar8,pSVar14,KCFLBKINDFM,StringLiteral_1/*""*/,
                                                       (System_Action_object__o *)0x0,1,0,false,
                                                       false,StringLiteral_1/*""*/,false,true,true,false,
                                                       (MethodInfo *)0x0);
                                            pSVar6 = (System_Byte_array *)
                                                     FUN_01bab718(byte___TypeInfo,0x40);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      ((System_Array_o *)pSVar6,
                                                                                                              
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5672
                                                  ,(MethodInfo *)0x0);
                                            pSVar7 = (System_Byte_array *)
                                                     FUN_01bab718(byte___TypeInfo,0x40);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      ((System_Array_o *)pSVar7,
                                                                                                              
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5673
                                                  ,(MethodInfo *)0x0);
                                            pSVar14 = OMHODMCHILE__NPKGDBHJKCK
                                                                (pSVar6,pSVar7,(MethodInfo *)0x0);
                                            return pSVar14;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void BCEONJKKFKD(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3267C6C]
// BDGDJDGHMJI$$BCEONJKKFKD @ RVA 0x3267C6C

void BDGDJDGHMJI__BCEONJKKFKD(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  PlayerData_o *__this;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  
  if ((DAT_045671d2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5674);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5675);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5676);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5677);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
    DAT_045671d2 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pIVar2 != (Il2CppObject *)0x0) && (__this != (PlayerData_o *)0x0)) {
        PlayerData__KILLKMHKIMI(__this,(PIADCKMDDAK_o *)pIVar2[2].klass,false,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5674,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5675,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                 FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
        if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
          if ((int)pNVar6->max_length != 0) {
            pNVar6->m_Items[0] = 6;
            Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03367ea8;
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5676,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5677,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar6->max_length != 0) {
          pNVar6->m_Items[0] = 6;
          Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
          return;
        }
LAB_03367ea8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string OGFEANAJGHH(string[] BFPCMHPBAGL)  [RVA 0x3267EAC]
// BDGDJDGHMJI$$OGFEANAJGHH @ RVA 0x3267EAC

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__OGFEANAJGHH(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_String_o *pSVar4;
  System_RuntimeFieldHandle_Fields *pSVar5;
  undefined1 auVar6 [16];
  System_Nullable_bool__Fields local_24 [2];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671d3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5678);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5680);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5681);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5682);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5683);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    auVar6 = FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_045671d3 = 1;
  }
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length < 2) {
      local_24[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      if (((ushort)local_24[0] & 0xff) == 0) {
        System_Nullable<bool>___ctor
                  ((System_Nullable_bool__o)SUB82(local_24,0),false,
                   Method_System_Nullable<bool>__ctor__);
      }
      bVar1 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_24,0),
                         Method_System_Nullable<bool>_get_Value__);
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
      }
      KDDOKHLOKMI_TypeInfo->static_fields->MANGIHDNLPM = bVar1;
      bVar1 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_24,0),
                         Method_System_Nullable<bool>_get_Value__);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (bVar1) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5682,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar5 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5683;
      }
      else {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5680,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar5 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5681;
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar5->value,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5678,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5679,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar4 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
      pSVar4 = System_String__Concat((System_String_o *)str0,pSVar4,(MethodInfo *)0x0);
    }
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}


// ===== private static string JPPBFPKGOJG(string[] BFPCMHPBAGL)  [RVA 0x326813C]
// BDGDJDGHMJI$$JPPBFPKGOJG @ RVA 0x326813C

System_String_o * BDGDJDGHMJI__JPPBFPKGOJG(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045671d4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5684);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5685);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045671d4 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5684,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5685,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x32681EC]
// BDGDJDGHMJI$$AJJLBBCJAAL @ RVA 0x32681EC

/* WARNING: Type propagation algorithm not settling */

System_String_o *
BDGDJDGHMJI__AJJLBBCJAAL(BDGDJDGHMJI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  uint32_t uVar4;
  System_String_o *pSVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  SFRequestSender_o *pKVar9;
  System_String_array *BFPCMHPBAGL;
  System_String_o **ppSVar10;
  BDGDJDGHMJI_c *pBVar11;
  RaidMovesChecker_o *__this_00;
  MethodInfo *str0;
  MethodInfo *pMVar12;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *extraout_x1_11;
  MethodInfo *extraout_x1_12;
  MethodInfo *extraout_x1_13;
  MethodInfo *extraout_x1_14;
  MethodInfo *extraout_x1_15;
  MethodInfo *extraout_x1_16;
  undefined8 extraout_x1_17;
  MethodInfo *extraout_x1_18;
  MethodInfo *extraout_x1_19;
  MethodInfo *extraout_x1_20;
  MethodInfo *extraout_x1_21;
  undefined8 extraout_x1_22;
  MethodInfo *extraout_x1_23;
  MethodInfo *extraout_x1_24;
  MethodInfo *extraout_x1_25;
  MethodInfo *extraout_x1_26;
  MethodInfo *extraout_x1_27;
  MethodInfo *extraout_x1_28;
  MethodInfo *extraout_x1_29;
  MethodInfo *extraout_x1_30;
  MethodInfo *extraout_x1_31;
  MethodInfo *extraout_x1_32;
  MethodInfo *extraout_x1_33;
  MethodInfo *extraout_x1_34;
  MethodInfo *extraout_x1_35;
  MethodInfo *extraout_x1_36;
  MethodInfo *extraout_x1_37;
  MethodInfo *extraout_x1_38;
  MethodInfo *extraout_x1_39;
  MethodInfo *extraout_x1_40;
  MethodInfo *extraout_x1_41;
  MethodInfo *extraout_x1_42;
  ulong uVar13;
  System_RuntimeFieldHandle_Fields *pSVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if ((DAT_045671d5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5686);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5687);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5688);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5689);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5690);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5691);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5692);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5693);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5694);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5695);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5696);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5697);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5698);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5699);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5700);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5701);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5702);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5703);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5704);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5705);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5706);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5707);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5708);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5709);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5710);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5711);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5712);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5713);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5714);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5715);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5716);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5717);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5718);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5719);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5720);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5721);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5722);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5723);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5724);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5725);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5726);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5727);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5728);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5729);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5730);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5731);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5732);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5733);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5734);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5735);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5736);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5737);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5738);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5739);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5740);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5741);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5742);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5743);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5744);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5745);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5746);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5747);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5748);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5749);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5750);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5751);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5752);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5753);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5754);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5755);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5756);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5757);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5758);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5759);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5760);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5761);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5762);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5763);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5764);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5765);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5766);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5767);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5768);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5769);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5770);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5771);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5772);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5773);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_045671d5 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_0336a228:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar5;
  }
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = KDDOKHLOKMI__ACEAKFIFGJC((MethodInfo *)0x0);
  if (!bVar3) {
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5686,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar14 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5687;
LAB_03368a64:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar6,(MethodInfo *)0x0);
    return pSVar5;
  }
  if ((int)OPAEPDIIOEB->max_length == 0) {
LAB_0336a224:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  if (OPAEPDIIOEB->m_Items[0] == (System_String_o *)0x0) goto LAB_0336a228;
  pSVar5 = System_String__ToLower(OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5688,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5689,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5690,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5691,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5692,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5693,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5694,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5695,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5696,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5697,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5698,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5699,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
            if (bVar3) {
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5700,
                         (MethodInfo *)0x0);
              pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar7,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5701,
                         (MethodInfo *)0x0);
              pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
              bVar3 = System_String__op_Inequality(pSVar5,pSVar8,(MethodInfo *)0x0);
              if (bVar3) {
                pKVar9 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                if (pKVar9 == (SFRequestSender_o *)0x0) goto LAB_0336a228;
                if ((pKVar9->fields).super._MGGBEPKMPCF_k__BackingField == false) {
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5702,
                             (MethodInfo *)0x0);
                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  pSVar14 = (System_RuntimeFieldHandle_Fields *)
                            &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5703;
                  goto LAB_03368a64;
                }
              }
            }
          }
        }
      }
    }
  }
  JLAHCMDABIM__GIENGNEGHPJ((MethodInfo *)0x0);
                    /* try { // try from 033689ec to 03468aab has its CatchHandler @ 033689ec
                       catch() { ... } // from try @ 033689ec with catch @ 033689ec
                       catch() { ... } // from try @ 03368afc with catch @ 033689ec
                       catch() { ... } // from try @ 03368b98 with catch @ 033689ec
                       catch() { ... } // from try @ 03368bcc with catch @ 033689ec
                       catch() { ... } // from try @ 03368c04 with catch @ 033689ec */
  BFPCMHPBAGL = (System_String_array *)
                FUN_01bab718(string___TypeInfo,(int)OPAEPDIIOEB->max_length + -1);
  iVar2 = (int)OPAEPDIIOEB->max_length;
  if (1 < iVar2) {
    BFPCMHPBAGL = (System_String_array *)FUN_01bab718(string___TypeInfo,iVar2 + -1);
    uVar15 = OPAEPDIIOEB->max_length;
                    /* try { // try from 03368aac to 03468ab3 has its CatchHandler @ 03368bac */
    if (0 < (int)uVar15 + -1) {
      ppSVar10 = BFPCMHPBAGL->m_Items;
      uVar13 = 0;
      do {
        uVar1 = uVar13 + 1;
        if ((uVar15 & 0xffffffff) <= uVar1) goto LAB_0336a224;
        if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_0336a228;
        if ((uint)BFPCMHPBAGL->max_length <= uVar13) goto LAB_0336a224;
                    /* try { // try from 03368ae0 to 03468afb has its CatchHandler @ 03368bb0 */
        *ppSVar10 = OPAEPDIIOEB->m_Items[uVar13 + 1];
        thunk_FUN_01c20e04();
        uVar15 = OPAEPDIIOEB->max_length;
                    /* try { // try from 03368afc to 03468b87 has its CatchHandler @ 033689ec */
        ppSVar10 = ppSVar10 + 1;
        uVar13 = uVar1;
      } while ((long)uVar1 < (long)((int)uVar15 + -1));
    }
  }
  uVar4 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (0x82b904c5 < uVar4) {
    if (uVar4 < 0xa728e123) {
                    /* try { // try from 03368bc8 to 03468bcb has its CatchHandler @ 03368bf4 */
                    /* try { // try from 03368bcc to 03468bfb has its CatchHandler @ 033689ec */
      if (uVar4 < 0x932bd741) {
        if (uVar4 < 0x87ec0947) {
          if (uVar4 == 0x83fc7ffd) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5728,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5729,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
            if (bVar3) {
              pMVar12 = extraout_x1_20;
              if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar12 = extraout_x1_21;
              }
              pSVar5 = BDGDJDGHMJI__IIIFFANNPHP(BFPCMHPBAGL,pMVar12);
              return pSVar5;
            }
          }
          else {
                    /* catch() { ... } // from try @ 03368bc8 with catch @ 03368bf4 */
                    /* try { // try from 03368bfc to 03468c03 has its CatchHandler @ 03368c18 */
            if (uVar4 == 0x87ec0946) {
                    /* try { // try from 03368c04 to 03468c0f has its CatchHandler @ 033689ec */
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03368c10 to 03468c17 has its CatchHandler @ 03368c18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03368bfc with catch @ 03368c18
                       catch(type#2 @ 00000000) { ... } // from try @ 03368c10 with catch @ 03368c18
                        */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5740,
                         (MethodInfo *)0x0);
              pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar7,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5741,
                         (MethodInfo *)0x0);
              pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
              bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
              if (bVar3) {
                pMVar12 = extraout_x1;
                if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  pMVar12 = extraout_x1_00;
                }
                pSVar5 = BDGDJDGHMJI__IFIMMEKBCOD(BFPCMHPBAGL,pMVar12);
                return pSVar5;
              }
            }
          }
        }
        else if (uVar4 == 0x918a681b) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5754,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5755,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_31;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_32;
            }
            pSVar5 = BDGDJDGHMJI__PEIBABOGLNI(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else if (uVar4 == 0x932bd740) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5734,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5735,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_11;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_12;
            }
            pSVar5 = BDGDJDGHMJI__OMFBPCMMJKP(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
      }
      else if (uVar4 < 0x99b59aa4) {
        if (uVar4 == 0x9725bfc3) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5748,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5749,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_25;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_26;
            }
            pSVar5 = BDGDJDGHMJI__DMIFLGAIJAA(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else if (uVar4 == 0x99b59aa3) {
                    /* try { // try from 03368f58 to 03468f83 has its CatchHandler @ 033690ec */
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5770,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5771,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          auVar16._8_8_ = extraout_x1_05;
          auVar16._0_8_ = BDGDJDGHMJI_TypeInfo;
          if (bVar3) {
                    /* try { // try from 03368fc0 to 0346902f has its CatchHandler @ 033690f8 */
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              auVar16 = thunk_FUN_01ba7564();
            }
            pSVar5 = BDGDJDGHMJI__OEPPKOILLGN(auVar16._0_8_,auVar16._8_8_);
            return pSVar5;
          }
        }
      }
      else {
                    /* try { // try from 033694c4 to 034694df has its CatchHandler @ 03369580 */
        if (uVar4 == 0xa511a225) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5758,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5759,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = RaidMovesChecker__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_00 != (RaidMovesChecker_o *)0x0) {
              pSVar5 = RaidMovesChecker__MADPDGHGHKB(__this_00,BFPCMHPBAGL,(MethodInfo *)0x0);
              return pSVar5;
            }
            goto LAB_0336a228;
          }
        }
        else if (uVar4 == 0xa728e122) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033694f0 to 03469517 has its CatchHandler @ 03369570 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5744,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03369518 to 0346955b has its CatchHandler @ 0336934c */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5745,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
                    /* try { // try from 0336955c to 0346955f has its CatchHandler @ 03369578 */
                    /* try { // try from 03369560 to 03469563 has its CatchHandler @ 03369574 */
            pMVar12 = extraout_x1_15;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03369564 to 03469597 has its CatchHandler @ 0336934c */
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_16;
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033694f0 with catch @ 03369570
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03369560 with catch @ 03369574
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336955c with catch @ 03369578
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033694a4 with catch @ 0336957c
                        */
            pSVar5 = BDGDJDGHMJI__AHIINKMMNKP(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
      }
      goto LAB_0336a14c;
    }
    if (uVar4 < 0xe82135d4) {
      if (0xe10c2473 < uVar4) {
        if (uVar4 == 0xe7405b28) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5706,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5707,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_35;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_36;
            }
            pSVar5 = BDGDJDGHMJI__KDLOHPGJKDG(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else if (uVar4 == 0xe82135d3) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5752,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5753,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_13;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_14;
            }
            pSVar5 = BDGDJDGHMJI__GDLIEPLBANO(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        goto LAB_0336a14c;
      }
      if (uVar4 != 0xcb532ae5) {
        if (uVar4 == 0xe10c2473) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5712,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03368df4 to 03468efb has its CatchHandler @ 03368df4
                       catch() { ... } // from try @ 03368df4 with catch @ 03368df4
                       catch() { ... } // from try @ 03369030 with catch @ 03368df4
                       catch() { ... } // from try @ 033690d4 with catch @ 03368df4
                       catch() { ... } // from try @ 033690dc with catch @ 03368df4
                       catch() { ... } // from try @ 0336918c with catch @ 03368df4 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5713,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pBVar11 = BDGDJDGHMJI_TypeInfo;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              pBVar11 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564();
            }
            pSVar5 = BDGDJDGHMJI__PGJDLIJFCDD((MethodInfo *)pBVar11);
            return pSVar5;
          }
        }
        goto LAB_0336a14c;
      }
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5710,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5711;
    }
    else {
      if (uVar4 < 0xf2891051) {
                    /* try { // try from 033690c4 to 034690cb has its CatchHandler @ 033690e8 */
                    /* try { // try from 033690cc to 034690d3 has its CatchHandler @ 033690f4 */
        if (uVar4 == 0xee7c8504) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5760,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5761,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_27;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_28;
            }
            pSVar5 = BDGDJDGHMJI__FEAPLDIKLJB(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else {
                    /* try { // try from 033690d4 to 034690d7 has its CatchHandler @ 03368df4 */
                    /* try { // try from 033690d8 to 034690db has its CatchHandler @ 033690e4 */
                    /* try { // try from 033690dc to 03469107 has its CatchHandler @ 03368df4 */
          if (uVar4 == 0xf2891050) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033690d8 with catch @ 033690e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033690c4 with catch @ 033690e8
                        */
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368f58 with catch @ 033690ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368efc with catch @ 033690f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033690cc with catch @ 033690f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368fc0 with catch @ 033690f8
                        */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5730,
                       (MethodInfo *)0x0);
                    /* try { // try from 03369108 to 0346910b has its CatchHandler @ 0336911c */
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03369108 with catch @ 0336911c */
                    /* try { // try from 03369124 to 0346918b has its CatchHandler @ 033691a0 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5731,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
            if (bVar3) {
              pMVar12 = extraout_x1_07;
              if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar12 = extraout_x1_08;
              }
              pSVar5 = BDGDJDGHMJI__IJKJBFHNDOD(BFPCMHPBAGL,pMVar12);
              return pSVar5;
            }
          }
        }
        goto LAB_0336a14c;
      }
      if (uVar4 != 0xf60c4582) {
        if (uVar4 != 0xf70c4715) {
          if (uVar4 == 0xf94a08cd) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5738,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5739,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
            if (bVar3) {
              pMVar12 = extraout_x1_18;
              if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar12 = extraout_x1_19;
              }
              pSVar5 = BDGDJDGHMJI__AOCDCCLEBGM(BFPCMHPBAGL,pMVar12);
              return pSVar5;
            }
          }
          goto LAB_0336a14c;
        }
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5714,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar14 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5715;
        goto LAB_0336a0ec;
      }
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5708,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5709;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      pBVar11 = BDGDJDGHMJI_TypeInfo;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        pBVar11 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564();
      }
      pSVar5 = BDGDJDGHMJI__BCDOLHMOPNM((MethodInfo *)pBVar11);
      return pSVar5;
    }
    goto LAB_0336a14c;
  }
  if (uVar4 < 0x56299124) {
    if (uVar4 < 0x4146216f) {
      if (0x27cb3b23 < uVar4) {
        if (uVar4 == 0x3eb86ff8) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5742,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5743,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_29;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_30;
            }
            pSVar5 = BDGDJDGHMJI__OGFEANAJGHH(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else {
                    /* try { // try from 0336918c to 03469197 has its CatchHandler @ 03368df4 */
                    /* try { // try from 03369198 to 0346919f has its CatchHandler @ 033691a0 */
          if (uVar4 == 0x4146216e) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03369124 with catch @ 033691a0
                       catch(type#2 @ 00000000) { ... } // from try @ 03369198 with catch @ 033691a0
                        */
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5746,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5747,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
            if (bVar3) {
              pMVar12 = extraout_x1_09;
              if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar12 = extraout_x1_10;
              }
              pSVar5 = BDGDJDGHMJI__GBAFJIHMNCI(BFPCMHPBAGL,pMVar12);
              return pSVar5;
            }
          }
        }
        goto LAB_0336a14c;
      }
      if (uVar4 == 0xfb40705) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5724,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar14 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5725;
        goto LAB_0336974c;
      }
      if (uVar4 != 0x27cb3b23) goto LAB_0336a14c;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03368b88 to 03468b8b has its CatchHandler @ 03368ba8 */
                    /* try { // try from 03368b8c to 03468b8f has its CatchHandler @ 03368ba4 */
                    /* try { // try from 03368b90 to 03468b93 has its CatchHandler @ 03368ba0 */
                    /* try { // try from 03368b94 to 03468b97 has its CatchHandler @ 03368b9c */
                    /* try { // try from 03368b98 to 03468bc7 has its CatchHandler @ 033689ec */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5720,
                 (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368b94 with catch @ 03368b9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368b90 with catch @ 03368ba0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368b8c with catch @ 03368ba4
                        */
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368b88 with catch @ 03368ba8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368aac with catch @ 03368bac
                        */
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5721;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03368ae0 with catch @ 03368bb0
                        */
    }
    else {
      if (uVar4 < 0x4d2bc190) {
        if (uVar4 == 0x484e4bf2) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5726,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5727,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_23;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_24;
            }
            pSVar5 = BDGDJDGHMJI__NOILEDGGCKJ(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else if (uVar4 == 0x4d2bc18f) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5766,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5767,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
                    /* try { // try from 03368efc to 03468f23 has its CatchHandler @ 033690f0 */
            pMVar12 = extraout_x1_03;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_04;
            }
            pSVar5 = BDGDJDGHMJI__MHGOCDEIGLJ(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        goto LAB_0336a14c;
      }
      if (uVar4 == 0x51d8c522) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5756,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5757,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
        if (bVar3) {
          pMVar12 = extraout_x1_37;
          if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar12 = extraout_x1_38;
          }
          pSVar5 = BDGDJDGHMJI__AMIAHGCBOIA(BFPCMHPBAGL,pMVar12);
          return pSVar5;
        }
        goto LAB_0336a14c;
      }
      if (uVar4 != 0x56299123) goto LAB_0336a14c;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5718,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5719;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
                    /* try { // try from 033694a4 to 034694ab has its CatchHandler @ 0336957c */
      pBVar11 = BDGDJDGHMJI_TypeInfo;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        pBVar11 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564();
      }
      pSVar5 = BDGDJDGHMJI__MGIGPNKGILA((MethodInfo *)pBVar11);
      return pSVar5;
    }
  }
  else {
    if (0x64548834 < uVar4) {
      if (0x6922f347 < uVar4) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033694c4 with catch @ 03369580
                        */
        if (uVar4 == 0x806d0088) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5764,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5765,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            pMVar12 = extraout_x1_39;
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar12 = extraout_x1_40;
            }
            pSVar5 = BDGDJDGHMJI__NBCFNIKCLKP(BFPCMHPBAGL,pMVar12);
            return pSVar5;
          }
        }
        else {
                    /* try { // try from 03369598 to 0346959b has its CatchHandler @ 033695c4 */
                    /* try { // try from 0336959c to 034695d3 has its CatchHandler @ 0336934c */
          if (uVar4 == 0x82b904c5) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5704,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5705,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
            if (bVar3) {
              pMVar12 = extraout_x1_41;
              if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar12 = extraout_x1_42;
              }
              pSVar5 = BDGDJDGHMJI__EPPOAOAJPBC(BFPCMHPBAGL,pMVar12);
              return pSVar5;
            }
          }
          else if (uVar4 == 0x795f332b) {
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03369598 with catch @ 033695c4 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5750,
                       (MethodInfo *)0x0);
                    /* try { // try from 033695d4 to 034695db has its CatchHandler @ 033695f0 */
                    /* try { // try from 033695dc to 034695e7 has its CatchHandler @ 0336934c */
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033695e8 to 034695ef has its CatchHandler @ 033695f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033695d4 with catch @ 033695f0
                       catch(type#2 @ 00000000) { ... } // from try @ 033695e8 with catch @ 033695f0
                        */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5751,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
            auVar18._8_8_ = extraout_x1_17;
            auVar18._0_8_ = BDGDJDGHMJI_TypeInfo;
            if (bVar3) {
              if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                auVar18 = thunk_FUN_01ba7564();
              }
              pSVar5 = BDGDJDGHMJI__LLJPNLBOHOO(auVar18._0_8_,auVar18._8_8_);
              return pSVar5;
            }
          }
        }
        goto LAB_0336a14c;
      }
      if (uVar4 != 0x650d33c0) {
        if (uVar4 == 0x6922f347) {
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03369030 to 034690c3 has its CatchHandler @ 03368df4 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5736,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5737,
                     (MethodInfo *)0x0);
          pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
          auVar17._8_8_ = extraout_x1_06;
          auVar17._0_8_ = BDGDJDGHMJI_TypeInfo;
          if (bVar3) {
            if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
              auVar17 = thunk_FUN_01ba7564();
            }
            pSVar5 = BDGDJDGHMJI__EINFELGOJPL(auVar17._0_8_,auVar17._8_8_);
            return pSVar5;
          }
        }
        goto LAB_0336a14c;
      }
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5716,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5717;
LAB_0336a0ec:
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar14->value,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (bVar3) {
        pBVar11 = BDGDJDGHMJI_TypeInfo;
        if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
          pBVar11 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564();
        }
        pSVar5 = BDGDJDGHMJI__BFADCPFLMPM((MethodInfo *)pBVar11);
        return pSVar5;
      }
      goto LAB_0336a14c;
    }
    if (uVar4 < 0x5b3664f6) {
      if (uVar4 == 0x5875b6e4) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5768,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5769,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
        auVar19._8_8_ = extraout_x1_22;
        auVar19._0_8_ = BDGDJDGHMJI_TypeInfo;
        if (bVar3) {
          if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
            auVar19 = thunk_FUN_01ba7564();
          }
          pSVar5 = BDGDJDGHMJI__JPPBFPKGOJG(auVar19._0_8_,auVar19._8_8_);
          return pSVar5;
        }
      }
      else if (uVar4 == 0x5b3664f5) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5762,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5763,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
        if (bVar3) {
          pMVar12 = extraout_x1_01;
          if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar12 = extraout_x1_02;
          }
          pSVar5 = BDGDJDGHMJI__ONJBFPKLAJG(BFPCMHPBAGL,pMVar12);
          return pSVar5;
        }
      }
      goto LAB_0336a14c;
    }
    if (uVar4 == 0x63533de0) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5732,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5733,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (bVar3) {
        pMVar12 = extraout_x1_33;
        if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar12 = extraout_x1_34;
        }
        pSVar5 = BDGDJDGHMJI__BNACEHKJBBL(BFPCMHPBAGL,pMVar12);
        return pSVar5;
      }
      goto LAB_0336a14c;
    }
    if (uVar4 != 0x64548834) goto LAB_0336a14c;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5722,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar14 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5723;
                    /* try { // try from 0336934c to 034694a3 has its CatchHandler @ 0336934c
                       catch() { ... } // from try @ 0336934c with catch @ 0336934c
                       catch() { ... } // from try @ 03369518 with catch @ 0336934c
                       catch() { ... } // from try @ 03369564 with catch @ 0336934c
                       catch() { ... } // from try @ 0336959c with catch @ 0336934c
                       catch() { ... } // from try @ 033695dc with catch @ 0336934c */
LAB_0336974c:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      pBVar11 = BDGDJDGHMJI_TypeInfo;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        pBVar11 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564();
      }
      pSVar5 = BDGDJDGHMJI__DIOLFKOOCEH((MethodInfo *)pBVar11);
      return pSVar5;
    }
  }
LAB_0336a14c:
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5772,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5773,(MethodInfo *)0x0);
  str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  pMVar12 = str0;
  if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
    pMVar12 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
  }
  pSVar5 = BDGDJDGHMJI__HDDPPDKDAKG(pMVar12);
  pSVar5 = System_String__Concat((System_String_o *)str0,pSVar5,(MethodInfo *)0x0);
  return pSVar5;
}


// ===== public static string IJKJBFHNDOD(string[] BFPCMHPBAGL)  [RVA 0x326A22C]
// BDGDJDGHMJI$$IJKJBFHNDOD @ RVA 0x326A22C

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__IJKJBFHNDOD(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t value;
  OMFJHNMDIBF_o *__this;
  SFRequestSender_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_RuntimeFieldHandle_Fields *pSVar4;
  System_Nullable_int__Fields local_40;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_045671d6 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5774);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5775);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5776);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5777);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5778);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5779);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5780);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5781);
    FUN_01bab630(&Method_BDGDJDGHMJI_PNEPEGFGDBE__);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_045671d6 = 1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_0336a5a8;
  if ((int)BFPCMHPBAGL->max_length == 1) {
    local_38 = (System_Nullable_int__Fields)
               AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
    if (((ulong)local_38 & 0xff) == 0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5776,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar4 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5777;
    }
    else {
      __this = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo);
      OMFJHNMDIBF___ctor(__this,(MethodInfo *)0x0);
      value = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
      local_40.hasValue = false;
      local_40._1_3_ = 0;
      local_40.value = 0;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_40,value,Method_System_Nullable<int>__ctor__);
      if (__this == (OMFJHNMDIBF_o *)0x0) {
LAB_0336a5a8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this->fields).NLLKMEMKBAF.fields = local_40;
      __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5778,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5779,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 == (SFRequestSender_o *)0x0) goto LAB_0336a5a8;
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_00,pSVar3,(Google_Protobuf_IMessage_o *)__this,BLMFLPJJMPF,
                 0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5780,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar4 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5781;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,(System_RuntimeFieldHandle_o)pSVar4->value,(MethodInfo *)0x0
              );
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5774,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5775,(MethodInfo *)0x0)
    ;
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    method_00 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
  }
  return pSVar3;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x326A5AC]
// BDGDJDGHMJI$$IGMDDJFPIJL @ RVA 0x326A5AC

System_String_o * BDGDJDGHMJI__IGMDDJFPIJL(BDGDJDGHMJI_o *__this,MethodInfo *method)

{
  BDGDJDGHMJI_c *method_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045671d7 & 1) == 0) {
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    DAT_045671d7 = 1;
    method = extraout_x1;
  }
  method_00 = BDGDJDGHMJI_TypeInfo;
  if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo,method);
  }
  pSVar1 = BDGDJDGHMJI__HDDPPDKDAKG((MethodInfo *)method_00);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x326A5F8]
// BDGDJDGHMJI$$DLKKPFHKIPB @ RVA 0x326A5F8

System_Collections_Generic_IEnumerable_string__o *
BDGDJDGHMJI__DLKKPFHKIPB(BDGDJDGHMJI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045671d8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5782);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5783);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045671d8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5782,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5783,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x326A768]
// BDGDJDGHMJI$$.cctor @ RVA 0x326A768

void BDGDJDGHMJI___cctor(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045671d9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5784);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5785);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045671d9 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5784,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5785,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BDGDJDGHMJI_TypeInfo->static_fields->CCKABABJINH = pSVar1;
  thunk_FUN_01c20e04(BDGDJDGHMJI_TypeInfo->static_fields,pSVar1);
  return;
}

