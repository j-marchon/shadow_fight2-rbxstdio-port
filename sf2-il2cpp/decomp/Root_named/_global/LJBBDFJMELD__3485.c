// TypeDefIndex 3485
// Namespace: 
// public class LJBBDFJMELD : IEJKLPPLHMO
// Fields:

// ===== public string IGMDDJFPIJL()  [RVA 0x35715BC]
// LJBBDFJMELD$$IGMDDJFPIJL @ RVA 0x35715BC

System_String_o * LJBBDFJMELD__IGMDDJFPIJL(LJBBDFJMELD_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036715d0 to 037715f7 has its CatchHandler @ 036733f8 */
  if ((DAT_04568c64 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy512___field_1);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5150);
                    /* try { // try from 03671604 to 0377160b has its CatchHandler @ 0367337c */
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568c64 = 1;
  }
                    /* try { // try from 0367161c to 03771623 has its CatchHandler @ 03673360 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671630 to 03771637 has its CatchHandler @ 03673380 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5150,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x200);
                    /* try { // try from 03671648 to 0377164f has its CatchHandler @ 03673364 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy512___field_1,(MethodInfo *)0x0);
                    /* try { // try from 03671650 to 0377167b has its CatchHandler @ 036733a4 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x357166C]
// LJBBDFJMELD$$DLKKPFHKIPB @ RVA 0x357166C

System_Collections_Generic_IEnumerable_string__o *
LJBBDFJMELD__DLKKPFHKIPB(LJBBDFJMELD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0367167c to 0377167f has its CatchHandler @ 03673344 */
                    /* try { // try from 03671680 to 0377169f has its CatchHandler @ 036733fc */
                    /* try { // try from 036716ac to 037716b3 has its CatchHandler @ 03673354 */
  if ((DAT_04568c65 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5151);
                    /* try { // try from 036716c4 to 037716cb has its CatchHandler @ 03673348 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5152);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036716d8 to 037716df has its CatchHandler @ 03673358 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 036716f0 to 037716f7 has its CatchHandler @ 0367334c */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 036716f8 to 03771707 has its CatchHandler @ 0367335c */
    DAT_04568c65 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 0367170c to 0377172f has its CatchHandler @ 03673400 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5151,(MethodInfo *)0x0);
                    /* try { // try from 03671730 to 03771733 has its CatchHandler @ 03673350 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5152,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 03671764 to 0377176f has its CatchHandler @ 0367371c */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03671788 to 0377178b has its CatchHandler @ 03673524 */
                    /* try { // try from 0367178c to 03771793 has its CatchHandler @ 03673724 */
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 036717a0 to 037717a7 has its CatchHandler @ 03673674 */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 036717b8 to 037717bf has its CatchHandler @ 03673688 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 036717cc to 037717d3 has its CatchHandler @ 03673678 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x35717DC]
// LJBBDFJMELD$$ECKDICODLME @ RVA 0x35717DC

bool LJBBDFJMELD__ECKDICODLME(LJBBDFJMELD_o *__this,MethodInfo *method)

{
                    /* try { // try from 036717dc to 037717e3 has its CatchHandler @ 0367367c */
  return true;
}


// ===== public void .ctor()  [RVA 0x35717E4]
// LJBBDFJMELD$$.ctor @ RVA 0x35717E4

void LJBBDFJMELD___ctor(LJBBDFJMELD_o *__this,MethodInfo *method)

{
                    /* try { // try from 036717e4 to 037717f7 has its CatchHandler @ 0367366c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x35717EC]
// LJBBDFJMELD$$AJJLBBCJAAL @ RVA 0x35717EC

/* WARNING: Type propagation algorithm not settling */

System_String_o *
LJBBDFJMELD__AJJLBBCJAAL(LJBBDFJMELD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  bool bVar15;
  uint32_t uVar16;
  uint uVar17;
  System_Byte_array *pSVar18;
  System_Byte_array *pSVar19;
  System_String_o *pSVar20;
  MDHCGLMBHIG_o *pMVar21;
  Il2CppMethodPointer *ppIVar22;
  System_Nullable_int__o SVar23;
  System_String_o *str2;
  System_String_array *values;
  MDHCGLMBHIG_c *pMVar24;
  Roster_o *pAVar25;
  System_RuntimeFieldHandle_Fields *pSVar26;
  ulong uVar27;
  int32_t *piVar28;
  int32_t iVar29;
  System_String_o *pSVar30;
  uint local_48;
  System_Nullable_bool__Fields local_44 [2];
  undefined8 local_38;
  
                    /* try { // try from 03671804 to 03771807 has its CatchHandler @ 03673680 */
  if ((DAT_04568c66 & 1) == 0) {
                    /* try { // try from 03671818 to 0377181f has its CatchHandler @ 03673670 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5153);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5154);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5155);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5156);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5157);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5158);
                    /* try { // try from 0367185c to 0377185f has its CatchHandler @ 03673328 */
                    /* try { // try from 03671860 to 03771863 has its CatchHandler @ 036731b0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5159);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5160);
                    /* try { // try from 03671874 to 0377187b has its CatchHandler @ 03672e08 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5161);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5162);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5163);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5164);
                    /* try { // try from 036718a8 to 037718af has its CatchHandler @ 036734a0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5165);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5166);
                    /* try { // try from 036718c4 to 037718cb has its CatchHandler @ 0367349c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5167);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5168);
                    /* try { // try from 036718d4 to 037718db has its CatchHandler @ 03673488 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5169);
                    /* try { // try from 036718e8 to 037718ef has its CatchHandler @ 03673498 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5170);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5171);
                    /* try { // try from 036718f8 to 037718ff has its CatchHandler @ 03673484 */
                    /* try { // try from 03671900 to 0377190f has its CatchHandler @ 0367348c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5172);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5173);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5174);
                    /* try { // try from 03671920 to 03771927 has its CatchHandler @ 03673490 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5175);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5176);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5177);
                    /* try { // try from 03671940 to 03771943 has its CatchHandler @ 03673398 */
                    /* try { // try from 03671944 to 0377197f has its CatchHandler @ 036735fc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5178);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5179);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5180);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5181);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5182);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5183);
                    /* try { // try from 0367198c to 037719b3 has its CatchHandler @ 036735b8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5184);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5185);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5186);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5187);
                    /* try { // try from 036719c0 to 037719cf has its CatchHandler @ 03673494 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5188);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5189);
                    /* try { // try from 036719d4 to 037719db has its CatchHandler @ 03673480 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5190);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5191);
                    /* try { // try from 036719e8 to 037719f7 has its CatchHandler @ 036733b8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5192);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5193);
                    /* try { // try from 03671a08 to 03771a17 has its CatchHandler @ 03673198 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5194);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5195);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5196);
                    /* try { // try from 03671a24 to 03771a2b has its CatchHandler @ 03672df0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5197);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5198);
                    /* try { // try from 03671a3c to 03771a43 has its CatchHandler @ 03672d78 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5199);
                    /* try { // try from 03671a50 to 03771a57 has its CatchHandler @ 03672dfc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5200);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03671a68 to 03771a6f has its CatchHandler @ 03672d74 */
    FUN_01bab630(&COFJGMCPLCC_TypeInfo);
                    /* try { // try from 03671a70 to 03771a7f has its CatchHandler @ 03672df4 */
    FUN_01bab630(&GBMABNPFHLG_TypeInfo);
    FUN_01bab630(&MDHCGLMBHIG_TypeInfo);
    FUN_01bab630(&MDNILNIEMEM_TypeInfo);
                    /* try { // try from 03671a90 to 03771a97 has its CatchHandler @ 03672d6c */
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03671aa8 to 03771aaf has its CatchHandler @ 03672ddc */
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
                    /* try { // try from 03671abc to 03771ac3 has its CatchHandler @ 03672d70 */
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
                    /* try { // try from 03671ad4 to 03771adb has its CatchHandler @ 03672d7c */
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
                    /* try { // try from 03671adc to 03771aeb has its CatchHandler @ 03672df8 */
    FUN_01bab630(&PGHPINHICIC_TypeInfo);
                    /* try { // try from 03671aec to 03771b13 has its CatchHandler @ 03672eb8 */
    FUN_01bab630(&PILIGDMGJOI_TypeInfo);
    FUN_01bab630(&POLKDIBEHFH_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568c66 = 1;
  }
  local_38 = 0;
  local_44[0].hasValue = false;
  local_44[0].value = false;
                    /* try { // try from 03671b14 to 03771b3b has its CatchHandler @ 036731a4 */
  local_48 = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03672db4;
  if (OPAEPDIIOEB->max_length == 0) {
                    /* try { // try from 03671c80 to 03771c87 has its CatchHandler @ 03672d80 */
    pSVar30 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar30;
  }
  if ((int)OPAEPDIIOEB->max_length == 0) {
LAB_03672db8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03671b60 with catch @ 03672db8 */
    FUN_01bab8d0();
  }
  pSVar30 = OPAEPDIIOEB->m_Items[0];
  uVar16 = <PrivateImplementationDetails>__ComputeStringHash(pSVar30,(MethodInfo *)0x0);
                    /* try { // try from 03671b48 to 03771b4f has its CatchHandler @ 03672db4 */
  if (uVar16 < 0xbef81d15) {
    if (uVar16 < 0x411a658b) {
                    /* try { // try from 03671b60 to 03771b67 has its CatchHandler @ 03672db8 */
      if (uVar16 == 0x844ecd6) {
        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671ee4 to 03771f5f has its CatchHandler @ 03672d68 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar18,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5157,
                   (MethodInfo *)0x0);
        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar19,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5158,
                   (MethodInfo *)0x0);
        pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
        if (!bVar15) goto LAB_03672320;
        uVar17 = AJAMDCEKAFE__KBAMBAFJLFD(OPAEPDIIOEB,(MethodInfo *)0x0);
        pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pMVar21 == (MDHCGLMBHIG_o *)0x0) goto LAB_03672db4;
        pMVar24 = pMVar21->klass;
        uVar3._0_1_ = (pMVar24->_2).rank;
        uVar3._1_1_ = (pMVar24->_2).minimumAlignment;
        uVar27 = (ulong)uVar3;
        if (uVar27 != 0) {
                    /* try { // try from 03671f6c to 03771f73 has its CatchHandler @ 03672bb4 */
          piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                (Il2CppClass *)GBMABNPFHLG_TypeInfo) {
                    /* try { // try from 03672580 to 03772587 has its CatchHandler @ 036729c8 */
              ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
              goto LAB_0367258c;
            }
            uVar27 = uVar27 - 1;
                    /* try { // try from 03671f84 to 03771f8b has its CatchHandler @ 03672bb0 */
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,GBMABNPFHLG_TypeInfo,0);
                    /* try { // try from 03671f98 to 03771f9f has its CatchHandler @ 03672bac */
LAB_0367258c:
                    /* try { // try from 03672594 to 0377259b has its CatchHandler @ 036729c4 */
        (**ppIVar22)(pMVar21,(ulong)uVar17,(MethodInfo *)ppIVar22[1]);
        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036725ac to 037725b3 has its CatchHandler @ 036729c0 */
                    /* try { // try from 036725b4 to 037725c7 has its CatchHandler @ 036729bc */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar18,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5177,
                   (MethodInfo *)0x0);
                    /* try { // try from 036725c8 to 037725d3 has its CatchHandler @ 036729b8 */
        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar26 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5178;
        goto LAB_03672d7c;
      }
                    /* try { // try from 03671b74 to 03771b7b has its CatchHandler @ 03672dd8 */
      if (uVar16 == 0x411a658a) {
                    /* try { // try from 03671b8c to 03771b93 has its CatchHandler @ 03672dec */
        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671b94 to 03771bbf has its CatchHandler @ 03672eb4 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar18,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5171,
                   (MethodInfo *)0x0);
        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671bc0 to 03771bc3 has its CatchHandler @ 03672dcc */
                    /* try { // try from 03671bc4 to 03771be3 has its CatchHandler @ 036731a0 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar19,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5172,
                   (MethodInfo *)0x0);
        pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
                    /* try { // try from 03671bf0 to 03771bf7 has its CatchHandler @ 03672d94 */
                    /* try { // try from 03671c08 to 03771c0f has its CatchHandler @ 03672dc4 */
        if ((bVar15) &&
           (local_44[0] = (System_Nullable_bool__Fields)
                          AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0),
           ((ushort)local_44[0] & 0xff) != 0)) {
          pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03671c1c to 03771c23 has its CatchHandler @ 03672da4 */
          bVar15 = System_Nullable<bool>__get_Value
                             ((System_Nullable_bool__o)SUB82(local_44,0),
                              Method_System_Nullable<bool>_get_Value__);
          if (pMVar21 == (MDHCGLMBHIG_o *)0x0) goto LAB_03672db4;
                    /* try { // try from 03671c34 to 03771c3b has its CatchHandler @ 03672d9c */
          pMVar24 = pMVar21->klass;
          uVar1._0_1_ = (pMVar24->_2).rank;
          uVar1._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03671c3c to 03771c4b has its CatchHandler @ 03672dc0 */
          uVar27 = (ulong)uVar1;
          if (uVar27 != 0) {
                    /* try { // try from 03671c50 to 03771c73 has its CatchHandler @ 0367319c */
            piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)MDHCGLMBHIG_TypeInfo) {
                    /* catch() { ... } // from try @ 0366f71c with catch @ 03672cdc */
                    /* catch() { ... } // from try @ 0366f714 with catch @ 03672ce0 */
                    /* catch() { ... } // from try @ 0366f6fc with catch @ 03672ce4 */
                ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
                goto LAB_03672ce8;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,MDHCGLMBHIG_TypeInfo,0);
LAB_03672ce8:
                    /* catch() { ... } // from try @ 0366f6e8 with catch @ 03672ce8 */
                    /* catch() { ... } // from try @ 0366f6d0 with catch @ 03672cec */
                    /* catch() { ... } // from try @ 0366f4ec with catch @ 03672cf0 */
                    /* catch() { ... } // from try @ 0366ee60 with catch @ 03672cf4 */
          (**ppIVar22)(pMVar21,(ulong)bVar15,(MethodInfo *)ppIVar22[1]);
                    /* catch() { ... } // from try @ 0366ee40 with catch @ 03672cf8 */
                    /* catch() { ... } // from try @ 0366ee28 with catch @ 03672cfc */
                    /* catch() { ... } // from try @ 0366ee14 with catch @ 03672d00 */
          bVar15 = System_Nullable<bool>__get_Value
                             ((System_Nullable_bool__o)SUB82(local_44,0),
                              Method_System_Nullable<bool>_get_Value__);
                    /* catch() { ... } // from try @ 0366edfc with catch @ 03672d04 */
                    /* catch() { ... } // from try @ 0366ec44 with catch @ 03672d08 */
                    /* catch() { ... } // from try @ 0366ec28 with catch @ 03672d0c */
                    /* catch() { ... } // from try @ 0366ec20 with catch @ 03672d10 */
                    /* catch() { ... } // from try @ 0366ec08 with catch @ 03672d14 */
          pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366ebf4 with catch @ 03672d18 */
                    /* catch() { ... } // from try @ 0366ebdc with catch @ 03672d1c */
          if (bVar15) {
                    /* catch() { ... } // from try @ 0366eb7c with catch @ 03672d20 */
                    /* catch() { ... } // from try @ 0366eb74 with catch @ 03672d24 */
                    /* catch() { ... } // from try @ 0366eb5c with catch @ 03672d28 */
                    /* catch() { ... } // from try @ 0366eb48 with catch @ 03672d2c */
                    /* catch() { ... } // from try @ 0366eb30 with catch @ 03672d30 */
                    /* catch() { ... } // from try @ 0366ea58 with catch @ 03672d34 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar18,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5199,
                       (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366ea50 with catch @ 03672d38 */
                    /* catch() { ... } // from try @ 0366ea38 with catch @ 03672d3c */
                    /* catch() { ... } // from try @ 0366ea24 with catch @ 03672d40 */
            pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366ea0c with catch @ 03672d44 */
                    /* catch() { ... } // from try @ 0366e704 with catch @ 03672d48 */
            pSVar26 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5200;
                    /* catch() { ... } // from try @ 0366e6e4 with catch @ 03672d4c */
          }
          else {
                    /* catch() { ... } // from try @ 0366e6cc with catch @ 03672d50 */
                    /* catch() { ... } // from try @ 0366e6b8 with catch @ 03672d54 */
                    /* catch() { ... } // from try @ 0366e68c with catch @ 03672d58 */
                    /* catch() { ... } // from try @ 0366e6a0 with catch @ 03672d5c */
                    /* catch() { ... } // from try @ 0366da38 with catch @ 03672d60 */
                    /* catch() { ... } // from try @ 03672238 with catch @ 03672d64
                       catch() { ... } // from try @ 03672908 with catch @ 03672d64 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar18,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5197,
                       (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03671ee4 with catch @ 03672d68 */
                    /* catch() { ... } // from try @ 03671a90 with catch @ 03672d6c */
                    /* catch() { ... } // from try @ 03671abc with catch @ 03672d70 */
            pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03671a68 with catch @ 03672d74 */
                    /* catch() { ... } // from try @ 03671a3c with catch @ 03672d78 */
            pSVar26 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5198;
          }
          goto LAB_03672d7c;
        }
      }
      goto LAB_03672320;
    }
                    /* try { // try from 03671d58 to 03771d5f has its CatchHandler @ 03672de4 */
    if (uVar16 == 0xb0f8070a) {
                    /* try { // try from 03672070 to 03772077 has its CatchHandler @ 03672b38 */
      pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672088 to 0377208f has its CatchHandler @ 03672b30 */
                    /* try { // try from 03672090 to 0377209f has its CatchHandler @ 03672b28 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar18,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5159,
                 (MethodInfo *)0x0);
      pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar26 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5160;
LAB_03672294:
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar19,(System_RuntimeFieldHandle_o)pSVar26->value,
                 (MethodInfo *)0x0);
      pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
      bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
      if (bVar15) {
        pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pMVar21 == (MDHCGLMBHIG_o *)0x0) goto LAB_03672db4;
        pMVar24 = pMVar21->klass;
        uVar7._0_1_ = (pMVar24->_2).rank;
        uVar7._1_1_ = (pMVar24->_2).minimumAlignment;
        uVar27 = (ulong)uVar7;
        if (uVar27 != 0) {
          piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                (Il2CppClass *)MDHCGLMBHIG_TypeInfo) {
                    /* try { // try from 03672394 to 03772397 has its CatchHandler @ 03673328 */
                    /* try { // try from 03672398 to 0377239b has its CatchHandler @ 03672a7c */
              ppIVar22 = &pMVar24->vtable[*piVar28 + 5].methodPtr;
              goto LAB_036723a4;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
                    /* try { // try from 03672310 to 03772317 has its CatchHandler @ 03672acc */
        ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,MDHCGLMBHIG_TypeInfo,5);
LAB_036723a4:
                    /* try { // try from 036723ac to 037723b3 has its CatchHandler @ 03672a80 */
        (**ppIVar22)(pMVar21,0,(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 036723c4 to 037723cb has its CatchHandler @ 03672a78 */
        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036723d8 to 037723df has its CatchHandler @ 03672a74 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar18,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5179,
                   (MethodInfo *)0x0);
        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036723f0 to 037723f7 has its CatchHandler @ 03672a70 */
        pSVar26 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5180;
        goto LAB_03672d7c;
      }
      goto LAB_03672320;
    }
                    /* try { // try from 03671d60 to 03771d73 has its CatchHandler @ 03672dac */
    if (uVar16 != 0xbef81d14) {
      if (uVar16 == 0x5c547b9c) {
                    /* try { // try from 03671d80 to 03771d83 has its CatchHandler @ 03672da8 */
        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671d94 to 03771d9b has its CatchHandler @ 03672db0 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar18,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5169,
                   (MethodInfo *)0x0);
        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671db8 to 03771dbf has its CatchHandler @ 036731ac */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar19,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5170,
                   (MethodInfo *)0x0);
        pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* try { // try from 03671dec to 03771def has its CatchHandler @ 03673328 */
        bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
                    /* try { // try from 03671df0 to 03771df7 has its CatchHandler @ 03672c28 */
        if (bVar15) {
          pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
            pMVar24 = pMVar21->klass;
            uVar2._0_1_ = (pMVar24->_2).rank;
            uVar2._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03671e0c to 03771e0f has its CatchHandler @ 03673328 */
            uVar27 = (ulong)uVar2;
            if (uVar27 != 0) {
                    /* try { // try from 03671e1c to 03771e47 has its CatchHandler @ 03672c14 */
              piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)MDHCGLMBHIG_TypeInfo) {
                    /* try { // try from 03672630 to 03772637 has its CatchHandler @ 0367299c */
                  ppIVar22 = &pMVar24->vtable[*piVar28 + 1].methodPtr;
                  goto LAB_03672640;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,MDHCGLMBHIG_TypeInfo,1);
LAB_03672640:
                    /* try { // try from 03672648 to 0377264f has its CatchHandler @ 03672994 */
            (**ppIVar22)(pMVar21,(MethodInfo *)ppIVar22[1]);
            uVar17 = AJAMDCEKAFE__KBAMBAFJLFD(OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 0367265c to 03772663 has its CatchHandler @ 03672990 */
            pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
              pMVar24 = pMVar21->klass;
              uVar8._0_1_ = (pMVar24->_2).rank;
              uVar8._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03672674 to 0377267b has its CatchHandler @ 0367298c */
              uVar27 = (ulong)uVar8;
                    /* try { // try from 0367267c to 0377268f has its CatchHandler @ 03672988 */
              if (uVar27 != 0) {
                piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
                do {
                    /* try { // try from 03672690 to 0377269b has its CatchHandler @ 03672984 */
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                      (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
                    /* try { // try from 03672720 to 03772733 has its CatchHandler @ 03672954 */
                    ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
                    goto LAB_0367272c;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,POLKDIBEHFH_TypeInfo,0);
LAB_0367272c:
                    /* try { // try from 03672734 to 0377273f has its CatchHandler @ 03672950 */
              (**ppIVar22)(pMVar21,(ulong)uVar17,(MethodInfo *)ppIVar22[1]);
              pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
                pMVar24 = pMVar21->klass;
                uVar10._0_1_ = (pMVar24->_2).rank;
                uVar10._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03672758 to 0377275b has its CatchHandler @ 03673328 */
                uVar27 = (ulong)uVar10;
                    /* try { // try from 0367275c to 0377275f has its CatchHandler @ 03672934 */
                if (uVar27 != 0) {
                    /* try { // try from 03672764 to 03772767 has its CatchHandler @ 03673730 */
                  piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
                  do {
                    /* try { // try from 03672768 to 0377276b has its CatchHandler @ 0367372c */
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                        (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
                    /* try { // try from 036727e8 to 037727eb has its CatchHandler @ 03673410 */
                    /* try { // try from 036727ec to 037727f3 has its CatchHandler @ 036735c0 */
                    /* try { // try from 036727f4 to 037727ff has its CatchHandler @ 03673600 */
                      ppIVar22 = &pMVar24->vtable[*piVar28 + 1].methodPtr;
                      goto LAB_036727f8;
                    }
                    /* try { // try from 03672774 to 03772777 has its CatchHandler @ 03673720 */
                    uVar27 = uVar27 - 1;
                    /* try { // try from 03672778 to 0377277b has its CatchHandler @ 03673718 */
                    piVar28 = piVar28 + 4;
                    /* try { // try from 0367277c to 0377277f has its CatchHandler @ 03673704 */
                  } while (uVar27 != 0);
                }
                    /* try { // try from 03672788 to 0377278b has its CatchHandler @ 036736a0 */
                ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,POLKDIBEHFH_TypeInfo,1);
                    /* try { // try from 0367278c to 0377278f has its CatchHandler @ 03673698 */
LAB_036727f8:
                    /* try { // try from 03672800 to 0377280b has its CatchHandler @ 036735bc */
                (**ppIVar22)(pMVar21,(ulong)(uVar17 + 2),(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 0367280c to 0377280f has its CatchHandler @ 036733e4 */
                pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03672810 to 03772813 has its CatchHandler @ 036733c0 */
                    /* try { // try from 03672814 to 03772817 has its CatchHandler @ 036733b4 */
                    /* try { // try from 03672818 to 03772823 has its CatchHandler @ 036735c0 */
                pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672824 to 03772827 has its CatchHandler @ 03673378 */
                    /* try { // try from 03672828 to 0377282b has its CatchHandler @ 03673340 */
                    /* try { // try from 0367282c to 0377282f has its CatchHandler @ 0367332c */
                    /* try { // try from 03672830 to 0377283f has its CatchHandler @ 0366c1b0 */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar18,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5187,
                           (MethodInfo *)0x0);
                    /* try { // try from 03672840 to 03772843 has its CatchHandler @ 036733b0 */
                    /* try { // try from 03672844 to 03772847 has its CatchHandler @ 036733ac */
                pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672848 to 0377284b has its CatchHandler @ 0367333c */
                    /* try { // try from 0367284c to 0377284f has its CatchHandler @ 03673290 */
                    /* try { // try from 03672850 to 03772853 has its CatchHandler @ 0367331c */
                    /* try { // try from 03672854 to 0377285b has its CatchHandler @ 03673318 */
                    /* try { // try from 0367285c to 03772863 has its CatchHandler @ 0367339c */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar19,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5188,
                           (MethodInfo *)0x0);
                    /* try { // try from 03672864 to 03772867 has its CatchHandler @ 03673308 */
                    /* try { // try from 03672868 to 0377286f has its CatchHandler @ 03673304 */
                pSVar30 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* try { // try from 03672870 to 03772873 has its CatchHandler @ 03673300 */
                if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
                    /* try { // try from 03672874 to 03772877 has its CatchHandler @ 03673270 */
                    /* try { // try from 03672878 to 0377287b has its CatchHandler @ 036732fc */
                  pMVar24 = pMVar21->klass;
                    /* try { // try from 0367287c to 0377287f has its CatchHandler @ 03673260 */
                    /* try { // try from 03672880 to 03772883 has its CatchHandler @ 036732f8 */
                    /* try { // try from 03672884 to 03772887 has its CatchHandler @ 03673250 */
                  uVar11._0_1_ = (pMVar24->_2).rank;
                  uVar11._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03672888 to 0377288b has its CatchHandler @ 036732f4 */
                  uVar27 = (ulong)uVar11;
                    /* try { // try from 0367288c to 0377288f has its CatchHandler @ 03673240 */
                    /* try { // try from 03672890 to 03772893 has its CatchHandler @ 036732f0 */
                  if (uVar27 != 0) {
                    /* try { // try from 03672894 to 03772897 has its CatchHandler @ 036732e8 */
                    /* try { // try from 03672898 to 0377289b has its CatchHandler @ 03673230 */
                    piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
                    do {
                    /* try { // try from 0367289c to 037728a3 has its CatchHandler @ 0367322c */
                    /* try { // try from 036728a4 to 037728af has its CatchHandler @ 0367339c */
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                          (Il2CppClass *)PILIGDMGJOI_TypeInfo) {
                    /* try { // try from 036728cc to 037728cf has its CatchHandler @ 03672e1c */
                    /* try { // try from 036728d0 to 037728d3 has its CatchHandler @ 03672e0c */
                        ppIVar22 = &pMVar24->vtable[*piVar28 + 1].methodPtr;
                        goto LAB_036728d4;
                      }
                      uVar27 = uVar27 - 1;
                      piVar28 = piVar28 + 4;
                    /* try { // try from 036728b0 to 037728b3 has its CatchHandler @ 036731f4 */
                    } while (uVar27 != 0);
                  }
                    /* try { // try from 036728b4 to 037728b7 has its CatchHandler @ 036731f0 */
                    /* try { // try from 036728b8 to 037728bb has its CatchHandler @ 036731ec */
                    /* try { // try from 036728bc to 037728bf has its CatchHandler @ 036731e8 */
                  ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,PILIGDMGJOI_TypeInfo,1);
                    /* try { // try from 036728c0 to 037728cb has its CatchHandler @ 03673288 */
LAB_036728d4:
                    /* try { // try from 036728d4 to 037728d7 has its CatchHandler @ 036731b0 */
                    /* try { // try from 036728d8 to 037728df has its CatchHandler @ 036731ac */
                    /* try { // try from 036728e0 to 037728e3 has its CatchHandler @ 03672dd4 */
                    /* try { // try from 036728e4 to 037728e7 has its CatchHandler @ 03672dbc */
                  (**ppIVar22)(pMVar21,pSVar30,(ulong)(uVar17 + 4),(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 036728e8 to 037728eb has its CatchHandler @ 03672d84 */
                    /* try { // try from 036728ec to 037728ef has its CatchHandler @ 03673174 */
                  pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 036728f0 to 037728f3 has its CatchHandler @ 03673110 */
                  if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
                    /* try { // try from 036728f4 to 037728f7 has its CatchHandler @ 036730e4 */
                    /* try { // try from 036728f8 to 037728fb has its CatchHandler @ 03673084 */
                    pMVar24 = pMVar21->klass;
                    /* try { // try from 036728fc to 037728ff has its CatchHandler @ 03673058 */
                    /* try { // try from 03672900 to 03772903 has its CatchHandler @ 03672ff8 */
                    /* try { // try from 03672904 to 03772907 has its CatchHandler @ 036731c8 */
                    uVar12._0_1_ = (pMVar24->_2).rank;
                    uVar12._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03672908 to 0377290b has its CatchHandler @ 03672d64 */
                    uVar27 = (ulong)uVar12;
                    /* try { // try from 0367290c to 0377290f has its CatchHandler @ 036731a8 */
                    /* try { // try from 03672910 to 03772913 has its CatchHandler @ 03672c0c */
                    if (uVar27 != 0) {
                    /* try { // try from 03672914 to 03772917 has its CatchHandler @ 03672e04 */
                    /* try { // try from 03672918 to 0377291b has its CatchHandler @ 03672e00 */
                      piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
                      do {
                    /* catch() { ... } // from try @ 0366f4b0 with catch @ 0367291c
                       try { // try from 0367291c to 0377361b has its CatchHandler @ 0366c1b0 */
                    /* catch() { ... } // from try @ 0366f49c with catch @ 03672920 */
                    /* catch() { ... } // from try @ 0366f494 with catch @ 03672924 */
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                            (Il2CppClass *)PGHPINHICIC_TypeInfo) {
                    /* catch() { ... } // from try @ 0366f400 with catch @ 03672944 */
                    /* catch() { ... } // from try @ 0366f3ec with catch @ 03672948 */
                    /* catch() { ... } // from try @ 0366f3d4 with catch @ 0367294c */
                          ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
                          goto LAB_03672950;
                        }
                    /* catch() { ... } // from try @ 0366f47c with catch @ 03672928 */
                        uVar27 = uVar27 - 1;
                    /* catch() { ... } // from try @ 0366f468 with catch @ 0367292c */
                        piVar28 = piVar28 + 4;
                    /* catch() { ... } // from try @ 0366f450 with catch @ 03672930 */
                      } while (uVar27 != 0);
                    }
                    /* catch() { ... } // from try @ 0367275c with catch @ 03672934 */
                    /* catch() { ... } // from try @ 0366f434 with catch @ 03672938 */
                    /* catch() { ... } // from try @ 0366f420 with catch @ 0367293c */
                    ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,PGHPINHICIC_TypeInfo,0);
                    /* catch() { ... } // from try @ 0366f418 with catch @ 03672940 */
LAB_03672950:
                    /* catch() { ... } // from try @ 03672734 with catch @ 03672950 */
                    /* catch() { ... } // from try @ 03672720 with catch @ 03672954 */
                    /* catch() { ... } // from try @ 03672718 with catch @ 03672958 */
                    /* catch() { ... } // from try @ 03672700 with catch @ 0367295c */
                    (**ppIVar22)(pMVar21,(ulong)(uVar17 + 6),(MethodInfo *)ppIVar22[1]);
                    /* catch() { ... } // from try @ 036726ec with catch @ 03672960 */
                    /* catch() { ... } // from try @ 036726b8 with catch @ 03672964 */
                    pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036726d4 with catch @ 03672968 */
                    /* catch() { ... } // from try @ 0366f3b8 with catch @ 0367296c */
                    /* catch() { ... } // from try @ 0366f3a4 with catch @ 03672970 */
                    /* catch() { ... } // from try @ 0366f39c with catch @ 03672974 */
                    /* catch() { ... } // from try @ 0366f384 with catch @ 03672978 */
                    pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366f370 with catch @ 0367297c */
                    /* catch() { ... } // from try @ 0366f358 with catch @ 03672980 */
                    /* catch() { ... } // from try @ 03672690 with catch @ 03672984 */
                    /* catch() { ... } // from try @ 0367267c with catch @ 03672988 */
                    /* catch() { ... } // from try @ 03672674 with catch @ 0367298c */
                    /* catch() { ... } // from try @ 0367265c with catch @ 03672990 */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar18,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5189,
                               (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03672648 with catch @ 03672994 */
                    /* catch() { ... } // from try @ 036725f0 with catch @ 03672998 */
                    /* catch() { ... } // from try @ 03672630 with catch @ 0367299c */
                    pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366f33c with catch @ 036729a0 */
                    /* catch() { ... } // from try @ 0366f328 with catch @ 036729a4 */
                    /* catch() { ... } // from try @ 0366f320 with catch @ 036729a8 */
                    /* catch() { ... } // from try @ 0366f308 with catch @ 036729ac */
                    /* catch() { ... } // from try @ 0366f2f4 with catch @ 036729b0 */
                    /* catch() { ... } // from try @ 0366f2dc with catch @ 036729b4 */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar19,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5190,
                               (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036725c8 with catch @ 036729b8 */
                    /* catch() { ... } // from try @ 036725b4 with catch @ 036729bc */
                    /* catch() { ... } // from try @ 036725ac with catch @ 036729c0 */
                    /* catch() { ... } // from try @ 03672594 with catch @ 036729c4 */
                    pSVar30 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03672580 with catch @ 036729c8 */
                    if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
                    /* catch() { ... } // from try @ 03672554 with catch @ 036729cc */
                    /* catch() { ... } // from try @ 03672568 with catch @ 036729d0 */
                      pMVar24 = pMVar21->klass;
                    /* catch() { ... } // from try @ 0366f2c0 with catch @ 036729d4 */
                    /* catch() { ... } // from try @ 0366f2ac with catch @ 036729d8 */
                    /* catch() { ... } // from try @ 0366f2a4 with catch @ 036729dc */
                      uVar13._0_1_ = (pMVar24->_2).rank;
                      uVar13._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0366f28c with catch @ 036729e0 */
                      uVar27 = (ulong)uVar13;
                    /* catch() { ... } // from try @ 0366f278 with catch @ 036729e4 */
                    /* catch() { ... } // from try @ 0366f260 with catch @ 036729e8 */
                      if (uVar27 != 0) {
                    /* catch() { ... } // from try @ 0367252c with catch @ 036729ec */
                    /* catch() { ... } // from try @ 03672518 with catch @ 036729f0 */
                        piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
                        do {
                    /* catch() { ... } // from try @ 03672510 with catch @ 036729f4 */
                    /* catch() { ... } // from try @ 036724f8 with catch @ 036729f8 */
                    /* catch() { ... } // from try @ 036724e4 with catch @ 036729fc */
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                              (Il2CppClass *)MDNILNIEMEM_TypeInfo) {
                    /* catch() { ... } // from try @ 03672488 with catch @ 03672a1c */
                    /* catch() { ... } // from try @ 03672474 with catch @ 03672a20 */
                    /* catch() { ... } // from try @ 0367246c with catch @ 03672a24 */
                            ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
                            goto LAB_03672a28;
                          }
                    /* catch() { ... } // from try @ 036724cc with catch @ 03672a00 */
                          uVar27 = uVar27 - 1;
                    /* catch() { ... } // from try @ 0366f244 with catch @ 03672a04 */
                          piVar28 = piVar28 + 4;
                    /* catch() { ... } // from try @ 0366f230 with catch @ 03672a08 */
                        } while (uVar27 != 0);
                      }
                    /* catch() { ... } // from try @ 0366f228 with catch @ 03672a0c */
                    /* catch() { ... } // from try @ 0366f210 with catch @ 03672a10 */
                    /* catch() { ... } // from try @ 0366f1fc with catch @ 03672a14 */
                      ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,MDNILNIEMEM_TypeInfo,0)
                      ;
                    /* catch() { ... } // from try @ 0366f1e4 with catch @ 03672a18 */
LAB_03672a28:
                    /* catch() { ... } // from try @ 03672454 with catch @ 03672a28 */
                    /* catch() { ... } // from try @ 03672440 with catch @ 03672a2c */
                    /* catch() { ... } // from try @ 03672428 with catch @ 03672a30 */
                    /* catch() { ... } // from try @ 036724b0 with catch @ 03672a34 */
                    /* catch() { ... } // from try @ 0366fdf0 with catch @ 03672a38 */
                      (**ppIVar22)(pMVar21,pSVar30,(ulong)(uVar17 + 8),(MethodInfo *)ppIVar22[1]);
                    /* catch() { ... } // from try @ 0366fddc with catch @ 03672a3c */
                    /* catch() { ... } // from try @ 0366fdd4 with catch @ 03672a40 */
                      pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366fdbc with catch @ 03672a44 */
                      if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
                    /* catch() { ... } // from try @ 0366fda8 with catch @ 03672a48 */
                    /* catch() { ... } // from try @ 0366fd90 with catch @ 03672a4c */
                        pMVar24 = pMVar21->klass;
                    /* catch() { ... } // from try @ 0366f1c8 with catch @ 03672a50 */
                    /* catch() { ... } // from try @ 0366f1b4 with catch @ 03672a54 */
                    /* catch() { ... } // from try @ 0366f1ac with catch @ 03672a58 */
                        uVar14._0_1_ = (pMVar24->_2).rank;
                        uVar14._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0366f194 with catch @ 03672a5c */
                        uVar27 = (ulong)uVar14;
                    /* catch() { ... } // from try @ 0366f180 with catch @ 03672a60 */
                    /* catch() { ... } // from try @ 0366f168 with catch @ 03672a64 */
                        if (uVar27 != 0) {
                    /* catch() { ... } // from try @ 0367240c with catch @ 03672a68 */
                    /* catch() { ... } // from try @ 036723f8 with catch @ 03672a6c */
                          piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
                          do {
                    /* catch() { ... } // from try @ 036723f0 with catch @ 03672a70 */
                    /* catch() { ... } // from try @ 036723d8 with catch @ 03672a74 */
                    /* catch() { ... } // from try @ 036723c4 with catch @ 03672a78 */
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType
                                == (Il2CppClass *)COFJGMCPLCC_TypeInfo) {
                    /* catch() { ... } // from try @ 0366fd14 with catch @ 03672a98 */
                    /* catch() { ... } // from try @ 0366f14c with catch @ 03672a9c */
                    /* catch() { ... } // from try @ 0366f138 with catch @ 03672aa0 */
                              ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
                              goto LAB_03672aa4;
                            }
                    /* catch() { ... } // from try @ 03672398 with catch @ 03672a7c */
                            uVar27 = uVar27 - 1;
                    /* catch() { ... } // from try @ 036723ac with catch @ 03672a80 */
                            piVar28 = piVar28 + 4;
                    /* catch() { ... } // from try @ 0366fd74 with catch @ 03672a84 */
                          } while (uVar27 != 0);
                        }
                    /* catch() { ... } // from try @ 0366fd60 with catch @ 03672a88 */
                    /* catch() { ... } // from try @ 0366fd58 with catch @ 03672a8c */
                    /* catch() { ... } // from try @ 0366fd40 with catch @ 03672a90 */
                        ppIVar22 = (Il2CppMethodPointer *)
                                   FUN_01b81914(pMVar21,COFJGMCPLCC_TypeInfo,0);
                    /* catch() { ... } // from try @ 0366fd2c with catch @ 03672a94 */
LAB_03672aa4:
                    /* catch() { ... } // from try @ 0366f130 with catch @ 03672aa4 */
                    /* catch() { ... } // from try @ 0366f118 with catch @ 03672aa8 */
                    /* catch() { ... } // from try @ 0366f104 with catch @ 03672aac */
                    /* catch() { ... } // from try @ 0366f0ec with catch @ 03672ab0 */
                        (**ppIVar22)(pMVar21,(ulong)(uVar17 + 10),(MethodInfo *)ppIVar22[1]);
                    /* catch() { ... } // from try @ 03672370 with catch @ 03672ab4 */
                    /* catch() { ... } // from try @ 0367235c with catch @ 03672ab8 */
                    /* catch() { ... } // from try @ 03672354 with catch @ 03672abc */
                    /* catch() { ... } // from try @ 0367233c with catch @ 03672ac0 */
                    /* catch() { ... } // from try @ 03672328 with catch @ 03672ac4 */
                    /* catch() { ... } // from try @ 0366f05c with catch @ 03672ac8 */
                        local_38 = CONCAT44(local_38._4_4_,7);
                    /* catch() { ... } // from try @ 03672310 with catch @ 03672acc */
                        values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
                    /* catch() { ... } // from try @ 0366fe18 with catch @ 03672ad0 */
                    /* catch() { ... } // from try @ 0366f4e4 with catch @ 03672ad4 */
                    /* catch() { ... } // from try @ 0366fcf8 with catch @ 03672ad8 */
                    /* catch() { ... } // from try @ 0366fce4 with catch @ 03672adc */
                    /* catch() { ... } // from try @ 0366fcdc with catch @ 03672ae0 */
                        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366fcc4 with catch @ 03672ae4 */
                    /* catch() { ... } // from try @ 0366fcb0 with catch @ 03672ae8 */
                    /* catch() { ... } // from try @ 0366fc84 with catch @ 03672aec */
                    /* catch() { ... } // from try @ 0366fc98 with catch @ 03672af0 */
                    /* catch() { ... } // from try @ 0366f0d0 with catch @ 03672af4 */
                    /* catch() { ... } // from try @ 0366f0bc with catch @ 03672af8 */
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar18,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5191
                                   ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366f0b4 with catch @ 03672afc */
                    /* catch() { ... } // from try @ 0366f09c with catch @ 03672b00 */
                    /* catch() { ... } // from try @ 0366f088 with catch @ 03672b04 */
                        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366efc0 with catch @ 03672b08 */
                    /* catch() { ... } // from try @ 0366f070 with catch @ 03672b0c */
                    /* catch() { ... } // from try @ 0366f034 with catch @ 03672b10 */
                    /* catch() { ... } // from try @ 0366f020 with catch @ 03672b14 */
                    /* catch() { ... } // from try @ 0366f018 with catch @ 03672b18 */
                    /* catch() { ... } // from try @ 0366f000 with catch @ 03672b1c */
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar19,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5192
                                   ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366efec with catch @ 03672b20 */
                    /* catch() { ... } // from try @ 0366efd4 with catch @ 03672b24 */
                    /* catch() { ... } // from try @ 03672090 with catch @ 03672b28 */
                    /* catch() { ... } // from try @ 03672030 with catch @ 03672b2c */
                        pSVar30 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03672088 with catch @ 03672b30 */
                        if (values != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 03672028 with catch @ 03672b34 */
                    /* catch() { ... } // from try @ 03672070 with catch @ 03672b38 */
                          if ((int)values->max_length != 0) {
                    /* catch() { ... } // from try @ 03672010 with catch @ 03672b3c */
                    /* catch() { ... } // from try @ 0367205c with catch @ 03672b40 */
                            values->m_Items[0] = pSVar30;
                    /* catch() { ... } // from try @ 03671ffc with catch @ 03672b44 */
                    /* catch() { ... } // from try @ 03672044 with catch @ 03672b48 */
                    /* catch() { ... } // from try @ 03671fe4 with catch @ 03672b4c */
                            thunk_FUN_01c20e04(values->m_Items,pSVar30);
                    /* catch() { ... } // from try @ 0366fc5c with catch @ 03672b50 */
                    /* catch() { ... } // from try @ 0366fc48 with catch @ 03672b54 */
                    /* catch() { ... } // from try @ 0366fc40 with catch @ 03672b58 */
                            pSVar30 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366fc28 with catch @ 03672b5c */
                    /* catch() { ... } // from try @ 0366fc14 with catch @ 03672b60 */
                    /* catch() { ... } // from try @ 0366fbe8 with catch @ 03672b64 */
                            if (1 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 0366fbfc with catch @ 03672b68 */
                    /* catch() { ... } // from try @ 0366ef98 with catch @ 03672b6c */
                              values->m_Items[1] = pSVar30;
                    /* catch() { ... } // from try @ 0366ef84 with catch @ 03672b70 */
                    /* catch() { ... } // from try @ 0366ef7c with catch @ 03672b74 */
                    /* catch() { ... } // from try @ 0366ef64 with catch @ 03672b78 */
                              thunk_FUN_01c20e04(values->m_Items + 1,pSVar30);
                    /* catch() { ... } // from try @ 0366ef50 with catch @ 03672b7c */
                    /* catch() { ... } // from try @ 0366ef24 with catch @ 03672b80 */
                    /* catch() { ... } // from try @ 0366ef38 with catch @ 03672b84 */
                              pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0366e7fc with catch @ 03672b88 */
                    /* catch() { ... } // from try @ 0366e7e8 with catch @ 03672b8c */
                    /* catch() { ... } // from try @ 0366e7e0 with catch @ 03672b90 */
                    /* catch() { ... } // from try @ 0366e7c8 with catch @ 03672b94 */
                    /* catch() { ... } // from try @ 0366e7b4 with catch @ 03672b98 */
                    /* catch() { ... } // from try @ 0366e79c with catch @ 03672b9c */
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar18,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5193
                                         ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03671fcc with catch @ 03672ba0 */
                    /* catch() { ... } // from try @ 03671fb8 with catch @ 03672ba4 */
                    /* catch() { ... } // from try @ 03671fb0 with catch @ 03672ba8 */
                              pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03671f98 with catch @ 03672bac */
                    /* catch() { ... } // from try @ 03671f84 with catch @ 03672bb0 */
                    /* catch() { ... } // from try @ 03671f6c with catch @ 03672bb4 */
                    /* catch() { ... } // from try @ 03671e88 with catch @ 03672bb8 */
                    /* catch() { ... } // from try @ 0366fbc0 with catch @ 03672bbc */
                    /* catch() { ... } // from try @ 0366fbac with catch @ 03672bc0 */
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar19,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5194
                                         ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366fba4 with catch @ 03672bc4 */
                    /* catch() { ... } // from try @ 0366fb8c with catch @ 03672bc8 */
                    /* catch() { ... } // from try @ 0366fb78 with catch @ 03672bcc */
                    /* catch() { ... } // from try @ 0366fb4c with catch @ 03672bd0 */
                              pSVar30 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366fb60 with catch @ 03672bd4 */
                    /* catch() { ... } // from try @ 0366eefc with catch @ 03672bd8 */
                    /* catch() { ... } // from try @ 0366eee8 with catch @ 03672bdc */
                              if (2 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 0366eee0 with catch @ 03672be0 */
                    /* catch() { ... } // from try @ 0366eec8 with catch @ 03672be4 */
                                values->m_Items[2] = pSVar30;
                    /* catch() { ... } // from try @ 0366eeb4 with catch @ 03672be8 */
                    /* catch() { ... } // from try @ 0366ee88 with catch @ 03672bec */
                    /* catch() { ... } // from try @ 0366ee9c with catch @ 03672bf0 */
                                thunk_FUN_01c20e04(values->m_Items + 2,pSVar30);
                    /* catch() { ... } // from try @ 0366e780 with catch @ 03672bf4 */
                                local_48 = uVar17;
                    /* catch() { ... } // from try @ 0366e76c with catch @ 03672bf8 */
                    /* catch() { ... } // from try @ 0366e764 with catch @ 03672bfc */
                    /* catch() { ... } // from try @ 0366e74c with catch @ 03672c00 */
                                pSVar30 = System_Int32__ToString
                                                    ((int32_t)&local_48,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366e738 with catch @ 03672c04 */
                    /* catch() { ... } // from try @ 0366e720 with catch @ 03672c08 */
                    /* catch() { ... } // from try @ 036721e0 with catch @ 03672c0c
                       catch() { ... } // from try @ 03672910 with catch @ 03672c0c */
                                if (3 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 0367216c with catch @ 03672c10 */
                    /* catch() { ... } // from try @ 03671e1c with catch @ 03672c14 */
                                  values->m_Items[3] = pSVar30;
                    /* catch() { ... } // from try @ 0366e824 with catch @ 03672c18 */
                    /* catch() { ... } // from try @ 036720bc with catch @ 03672c1c */
                    /* catch() { ... } // from try @ 036721ac with catch @ 03672c20 */
                                  thunk_FUN_01c20e04(values->m_Items + 3,pSVar30);
                    /* catch() { ... } // from try @ 03671e5c with catch @ 03672c24 */
                    /* catch() { ... } // from try @ 03671df0 with catch @ 03672c28 */
                    /* catch() { ... } // from try @ 03671384 with catch @ 03672c2c */
                                  pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03670b6c with catch @ 03672c30 */
                    /* catch() { ... } // from try @ 03670b64 with catch @ 03672c34 */
                    /* catch() { ... } // from try @ 03670b4c with catch @ 03672c38 */
                    /* catch() { ... } // from try @ 03670b38 with catch @ 03672c3c */
                    /* catch() { ... } // from try @ 03670b20 with catch @ 03672c40 */
                    /* catch() { ... } // from try @ 036706cc with catch @ 03672c44 */
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar18,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5195
                                             ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036706c4 with catch @ 03672c48 */
                    /* catch() { ... } // from try @ 036706ac with catch @ 03672c4c */
                    /* catch() { ... } // from try @ 03670698 with catch @ 03672c50 */
                                  pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03670680 with catch @ 03672c54 */
                    /* catch() { ... } // from try @ 0367023c with catch @ 03672c58 */
                    /* catch() { ... } // from try @ 03670220 with catch @ 03672c5c */
                    /* catch() { ... } // from try @ 03670218 with catch @ 03672c60 */
                    /* catch() { ... } // from try @ 03670200 with catch @ 03672c64 */
                    /* catch() { ... } // from try @ 036701ec with catch @ 03672c68 */
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar19,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5196
                                             ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036701d4 with catch @ 03672c6c */
                    /* catch() { ... } // from try @ 03670174 with catch @ 03672c70 */
                    /* catch() { ... } // from try @ 0367016c with catch @ 03672c74 */
                    /* catch() { ... } // from try @ 03670154 with catch @ 03672c78 */
                                  pSVar30 = OMHODMCHILE__NPKGDBHJKCK
                                                      (pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03670140 with catch @ 03672c7c */
                    /* catch() { ... } // from try @ 03670128 with catch @ 03672c80 */
                    /* catch() { ... } // from try @ 03670050 with catch @ 03672c84 */
                                  if (4 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 03670048 with catch @ 03672c88 */
                    /* catch() { ... } // from try @ 03670030 with catch @ 03672c8c */
                                    values->m_Items[4] = pSVar30;
                    /* catch() { ... } // from try @ 0367001c with catch @ 03672c90 */
                    /* catch() { ... } // from try @ 03670004 with catch @ 03672c94 */
                    /* catch() { ... } // from try @ 0366fe20 with catch @ 03672c98 */
                                    thunk_FUN_01c20e04(values->m_Items + 4,pSVar30);
                    /* catch() { ... } // from try @ 0366fb24 with catch @ 03672c9c */
                                    local_48 = uVar17 + 0xc;
                    /* catch() { ... } // from try @ 0366fb04 with catch @ 03672ca0 */
                    /* catch() { ... } // from try @ 0366faec with catch @ 03672ca4 */
                    /* catch() { ... } // from try @ 0366fad8 with catch @ 03672ca8 */
                    /* catch() { ... } // from try @ 0366fac0 with catch @ 03672cac */
                                    pSVar30 = System_Int32__ToString
                                                        ((int32_t)&local_48,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0366f908 with catch @ 03672cb0 */
                    /* catch() { ... } // from try @ 0366f8ec with catch @ 03672cb4 */
                    /* catch() { ... } // from try @ 0366f8e4 with catch @ 03672cb8 */
                                    if (5 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 0366f8cc with catch @ 03672cbc */
                    /* catch() { ... } // from try @ 0366f8b8 with catch @ 03672cc0 */
                    /* catch() { ... } // from try @ 0366f8a0 with catch @ 03672cc4 */
                                      values->m_Items[5] = pSVar30;
                    /* catch() { ... } // from try @ 0366f840 with catch @ 03672cc8 */
                                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0366f838 with catch @ 03672ccc */
                    /* catch() { ... } // from try @ 0366f820 with catch @ 03672cd0 */
                    /* catch() { ... } // from try @ 0366f80c with catch @ 03672cd4 */
                                      pSVar30 = System_String__Concat(values,(MethodInfo *)0x0);
                                      return pSVar30;
                    /* catch() { ... } // from try @ 0366f7f4 with catch @ 03672cd8 */
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_03672db8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_03672db4;
        }
      }
      goto LAB_03672320;
    }
                    /* try { // try from 036720b8 to 037720bb has its CatchHandler @ 03673328 */
                    /* try { // try from 036720bc to 037720df has its CatchHandler @ 03672c1c */
    pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar18,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5163,(MethodInfo *)0x0)
    ;
    pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar26 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5164;
  }
  else {
                    /* try { // try from 03671c98 to 03771c9f has its CatchHandler @ 03672d8c */
    if (uVar16 < 0xefbc0d9a) {
      if (uVar16 != 0xc50f4599) {
                    /* try { // try from 03671cac to 03771cb3 has its CatchHandler @ 03672de8 */
        if (uVar16 == 0xefbc0d99) {
                    /* try { // try from 03671cc4 to 03771ccb has its CatchHandler @ 03672da0 */
                    /* try { // try from 03671ccc to 03771cdf has its CatchHandler @ 03672d90 */
          pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar18,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5167,
                     (MethodInfo *)0x0);
                    /* try { // try from 03671ce8 to 03771cef has its CatchHandler @ 03672d98 */
          pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671d00 to 03771d07 has its CatchHandler @ 03672de0 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar19,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5168,
                     (MethodInfo *)0x0);
                    /* try { // try from 03671d14 to 03771d1b has its CatchHandler @ 03672dd0 */
          pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
          bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
                    /* try { // try from 03671d2c to 03771d33 has its CatchHandler @ 03672d88 */
          if (bVar15) {
            SVar23 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 03671d40 to 03771d47 has its CatchHandler @ 03672dc8 */
            if (((ulong)SVar23.fields & 0xff) == 0) {
                    /* try { // try from 036723f8 to 0377240b has its CatchHandler @ 03672a6c */
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0367240c to 03772417 has its CatchHandler @ 03672a68 */
                thunk_FUN_01ba7564();
              }
              iVar29 = GameUtils_TypeInfo->static_fields->JDKIOMFLCFD;
            }
            else {
              iVar29 = SVar23.fields.value;
            }
            local_38 = CONCAT44(iVar29,(undefined4)local_38);
                    /* try { // try from 03672428 to 0377242f has its CatchHandler @ 03672a30 */
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03672440 to 03772447 has its CatchHandler @ 03672a2c */
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03672454 to 0377245b has its CatchHandler @ 03672a28 */
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0367246c to 03772473 has its CatchHandler @ 03672a24 */
            pAVar25 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03672474 to 03772487 has its CatchHandler @ 03672a20 */
            if (pAVar25 != (Roster_o *)0x0) {
              (pAVar25->fields).JDKIOMFLCFD = iVar29;
                    /* try { // try from 03672488 to 03772493 has its CatchHandler @ 03672a1c */
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              GameUtils_TypeInfo->static_fields->JDKIOMFLCFD = iVar29;
              pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036724ac to 037724af has its CatchHandler @ 03673328 */
                    /* try { // try from 036724b0 to 037724b3 has its CatchHandler @ 03672a34 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar18,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5183,
                         (MethodInfo *)0x0);
                    /* try { // try from 036724cc to 037724d3 has its CatchHandler @ 03672a00 */
              pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036724e4 to 037724eb has its CatchHandler @ 036729fc */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar19,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5184,
                         (MethodInfo *)0x0);
              pSVar30 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* try { // try from 036724f8 to 037724ff has its CatchHandler @ 036729f8 */
              pSVar20 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
                    /* try { // try from 03672510 to 03772517 has its CatchHandler @ 036729f4 */
                    /* try { // try from 03672518 to 0377252b has its CatchHandler @ 036729f0 */
              pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0367252c to 03772537 has its CatchHandler @ 036729ec */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar18,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5185,
                         (MethodInfo *)0x0);
              pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672550 to 03772553 has its CatchHandler @ 03673328 */
                    /* try { // try from 03672554 to 03772557 has its CatchHandler @ 036729cc */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar19,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5186,
                         (MethodInfo *)0x0);
              str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* try { // try from 03672568 to 0377256f has its CatchHandler @ 036729d0 */
              pSVar30 = System_String__Concat(pSVar30,pSVar20,str2,(MethodInfo *)0x0);
              return pSVar30;
            }
            goto LAB_03672db4;
          }
        }
        goto LAB_03672320;
      }
      pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671fb0 to 03771fb7 has its CatchHandler @ 03672ba8 */
                    /* try { // try from 03671fb8 to 03771fc7 has its CatchHandler @ 03672ba4 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar18,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5153,
                 (MethodInfo *)0x0);
                    /* try { // try from 03671fcc to 03771fcf has its CatchHandler @ 03672ba0 */
      pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03671fe4 to 03771feb has its CatchHandler @ 03672b4c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar19,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5154,
                 (MethodInfo *)0x0);
      pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* try { // try from 03671ffc to 03772003 has its CatchHandler @ 03672b44 */
      bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
      if (!bVar15) goto LAB_03672320;
                    /* try { // try from 03672010 to 03772017 has its CatchHandler @ 03672b3c */
      pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
        pMVar24 = pMVar21->klass;
        uVar4._0_1_ = (pMVar24->_2).rank;
        uVar4._1_1_ = (pMVar24->_2).minimumAlignment;
                    /* try { // try from 03672028 to 0377202f has its CatchHandler @ 03672b34 */
        uVar27 = (ulong)uVar4;
                    /* try { // try from 03672030 to 0377203f has its CatchHandler @ 03672b2c */
        if (uVar27 != 0) {
          piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 03672044 to 0377204b has its CatchHandler @ 03672b48 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                (Il2CppClass *)MDHCGLMBHIG_TypeInfo) {
              ppIVar22 = &pMVar24->vtable[*piVar28 + 1].methodPtr;
              goto LAB_036725e8;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
                    /* try { // try from 0367205c to 03772063 has its CatchHandler @ 03672b40 */
        ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,MDHCGLMBHIG_TypeInfo,1);
LAB_036725e8:
                    /* try { // try from 036725ec to 037725ef has its CatchHandler @ 03673328 */
                    /* try { // try from 036725f0 to 037725f3 has its CatchHandler @ 03672998 */
        (**ppIVar22)(pMVar21,(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 036725f8 to 037725fb has its CatchHandler @ 036738cc */
                    /* try { // try from 036725fc to 037725ff has its CatchHandler @ 036738c8 */
        pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672600 to 03772603 has its CatchHandler @ 036738b4 */
                    /* try { // try from 03672604 to 03772607 has its CatchHandler @ 036738a8 */
                    /* try { // try from 03672608 to 0377260b has its CatchHandler @ 036738a4 */
                    /* try { // try from 0367260c to 0377260f has its CatchHandler @ 03673898 */
                    /* try { // try from 03672610 to 03772613 has its CatchHandler @ 03673980 */
                    /* try { // try from 03672614 to 03772617 has its CatchHandler @ 03673874 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar18,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5173,
                   (MethodInfo *)0x0);
                    /* try { // try from 03672618 to 0377261b has its CatchHandler @ 03673980 */
                    /* try { // try from 0367261c to 0377261f has its CatchHandler @ 03673870 */
                    /* try { // try from 03672620 to 03772623 has its CatchHandler @ 03673818 */
        pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar26 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5174;
        goto LAB_03672d7c;
      }
      goto LAB_03672db4;
    }
    if (uVar16 == 0xf006c1cb) {
      pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar18,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5155,
                 (MethodInfo *)0x0);
                    /* try { // try from 036721ac to 037721b3 has its CatchHandler @ 03672c20 */
      pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar19,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5156,
                 (MethodInfo *)0x0);
      pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
                    /* try { // try from 036721e0 to 037721e3 has its CatchHandler @ 03672c0c */
                    /* try { // try from 036721e4 to 0377220b has its CatchHandler @ 03672e04 */
      bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
      if (bVar15) {
        uVar17 = AJAMDCEKAFE__KBAMBAFJLFD(OPAEPDIIOEB,(MethodInfo *)0x0);
        pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
          pMVar24 = pMVar21->klass;
          uVar6._0_1_ = (pMVar24->_2).rank;
          uVar6._1_1_ = (pMVar24->_2).minimumAlignment;
          uVar27 = (ulong)uVar6;
          if (uVar27 != 0) {
            piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)GBMABNPFHLG_TypeInfo) {
                    /* try { // try from 036726b4 to 037726b7 has its CatchHandler @ 03673328 */
                    /* try { // try from 036726b8 to 037726bb has its CatchHandler @ 03672964 */
                    /* try { // try from 036726c0 to 037726c3 has its CatchHandler @ 036737d0 */
                ppIVar22 = &pMVar24->vtable[*piVar28 + 1].methodPtr;
                goto LAB_036726c4;
              }
                    /* try { // try from 03672238 to 0377223b has its CatchHandler @ 03672d64 */
              uVar27 = uVar27 - 1;
                    /* try { // try from 0367223c to 03772267 has its CatchHandler @ 036731a8 */
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,GBMABNPFHLG_TypeInfo,1);
LAB_036726c4:
                    /* try { // try from 036726c4 to 037726c7 has its CatchHandler @ 036737cc */
          (**ppIVar22)(pMVar21,(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 036726d4 to 037726db has its CatchHandler @ 03672968 */
          pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pMVar21 != (MDHCGLMBHIG_o *)0x0) {
            pMVar24 = pMVar21->klass;
            uVar9._0_1_ = (pMVar24->_2).rank;
            uVar9._1_1_ = (pMVar24->_2).minimumAlignment;
            uVar27 = (ulong)uVar9;
                    /* try { // try from 036726ec to 037726f3 has its CatchHandler @ 03672960 */
            if (uVar27 != 0) {
              piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 03672700 to 03772707 has its CatchHandler @ 0367295c */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)GBMABNPFHLG_TypeInfo) {
                    /* try { // try from 03672790 to 03772793 has its CatchHandler @ 0367368c */
                    /* try { // try from 03672794 to 03772797 has its CatchHandler @ 03673684 */
                    /* try { // try from 03672798 to 0377279f has its CatchHandler @ 036736a4 */
                  ppIVar22 = &pMVar24->vtable[*piVar28].methodPtr;
                  goto LAB_0367279c;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
                    /* try { // try from 03672718 to 0377271f has its CatchHandler @ 03672958 */
            ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,GBMABNPFHLG_TypeInfo,0);
LAB_0367279c:
                    /* try { // try from 036727a0 to 037727a3 has its CatchHandler @ 036735c8 */
                    /* try { // try from 036727a4 to 037727a7 has its CatchHandler @ 036735a4 */
                    /* try { // try from 036727a8 to 037727ab has its CatchHandler @ 036735a0 */
            (**ppIVar22)(pMVar21,(ulong)uVar17,(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 036727ac to 037727af has its CatchHandler @ 0367359c */
                    /* try { // try from 036727b0 to 037727b3 has its CatchHandler @ 0367356c */
                    /* try { // try from 036727b4 to 037727b7 has its CatchHandler @ 03673538 */
            pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036727b8 to 037727c3 has its CatchHandler @ 036736a4 */
                    /* try { // try from 036727c4 to 037727c7 has its CatchHandler @ 03673508 */
                    /* try { // try from 036727c8 to 037727cb has its CatchHandler @ 03673504 */
                    /* try { // try from 036727cc to 037727cf has its CatchHandler @ 036734c0 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar18,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5175,
                       (MethodInfo *)0x0);
                    /* try { // try from 036727d0 to 037727d3 has its CatchHandler @ 036735bc */
                    /* try { // try from 036727d4 to 037727db has its CatchHandler @ 03673600 */
            pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036727dc to 037727df has its CatchHandler @ 03673464 */
                    /* try { // try from 036727e0 to 037727e3 has its CatchHandler @ 03673448 */
            pSVar26 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5176;
                    /* try { // try from 036727e4 to 037727e7 has its CatchHandler @ 0367342c */
            goto LAB_03672d7c;
          }
        }
        goto LAB_03672db4;
      }
      goto LAB_03672320;
    }
                    /* try { // try from 03671e5c to 03771e63 has its CatchHandler @ 03672c24 */
    if (uVar16 == 0xfaf87b88) {
      pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672268 to 0377230f has its CatchHandler @ 0366c1b0 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar18,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5161,
                 (MethodInfo *)0x0);
      pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar26 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5162;
      goto LAB_03672294;
    }
    if (uVar16 != 0xfbf87d1b) goto LAB_03672320;
                    /* try { // try from 03671e7c to 03771e7f has its CatchHandler @ 03673328 */
                    /* try { // try from 03671e88 to 03771ee3 has its CatchHandler @ 03672bb8 */
    pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar18,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5165,(MethodInfo *)0x0)
    ;
    pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar26 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5166;
  }
                    /* try { // try from 036720ec to 03772113 has its CatchHandler @ 03672e00 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar19,(System_RuntimeFieldHandle_o)pSVar26->value,(MethodInfo *)0x0
            );
  pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
  bVar15 = System_String__op_Equality(pSVar30,pSVar20,(MethodInfo *)0x0);
  if (bVar15) {
                    /* try { // try from 03672124 to 03772163 has its CatchHandler @ 036731c8 */
    pMVar21 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pMVar21 == (MDHCGLMBHIG_o *)0x0) {
LAB_03672db4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03671b48 with catch @ 03672db4 */
      FUN_01bab8c8();
    }
    pMVar24 = pMVar21->klass;
    uVar5._0_1_ = (pMVar24->_2).rank;
    uVar5._1_1_ = (pMVar24->_2).minimumAlignment;
    uVar27 = (ulong)uVar5;
    if (uVar27 != 0) {
      piVar28 = &((pMVar24->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
            (Il2CppClass *)MDHCGLMBHIG_TypeInfo) {
                    /* try { // try from 0367233c to 03772343 has its CatchHandler @ 03672ac0 */
          ppIVar22 = &pMVar24->vtable[*piVar28 + 5].methodPtr;
          goto LAB_03672340;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
                    /* try { // try from 0367216c to 03772197 has its CatchHandler @ 03672c10 */
    ppIVar22 = (Il2CppMethodPointer *)FUN_01b81914(pMVar21,MDHCGLMBHIG_TypeInfo,5);
LAB_03672340:
    (**ppIVar22)(pMVar21,1,(MethodInfo *)ppIVar22[1]);
                    /* try { // try from 03672354 to 0377235b has its CatchHandler @ 03672abc */
                    /* try { // try from 0367235c to 0377236f has its CatchHandler @ 03672ab8 */
    pSVar18 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03672370 to 0377237b has its CatchHandler @ 03672ab4 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar18,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5181,(MethodInfo *)0x0)
    ;
    pSVar19 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar26 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5182;
LAB_03672d7c:
                    /* catch() { ... } // from try @ 03671ad4 with catch @ 03672d7c */
                    /* catch() { ... } // from try @ 03671c80 with catch @ 03672d80 */
                    /* catch() { ... } // from try @ 036728e8 with catch @ 03672d84 */
                    /* catch() { ... } // from try @ 03671d2c with catch @ 03672d88 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar19,(System_RuntimeFieldHandle_o)pSVar26->value,
               (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03671c98 with catch @ 03672d8c */
                    /* catch() { ... } // from try @ 03671ccc with catch @ 03672d90 */
                    /* catch() { ... } // from try @ 03671bf0 with catch @ 03672d94 */
                    /* catch() { ... } // from try @ 03671ce8 with catch @ 03672d98 */
    pSVar30 = OMHODMCHILE__NPKGDBHJKCK(pSVar18,pSVar19,(MethodInfo *)0x0);
    return pSVar30;
  }
LAB_03672320:
                    /* try { // try from 03672328 to 0377232f has its CatchHandler @ 03672ac4 */
  pSVar30 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03671c34 with catch @ 03672d9c */
                    /* catch() { ... } // from try @ 03671cc4 with catch @ 03672da0 */
                    /* catch() { ... } // from try @ 03671c1c with catch @ 03672da4 */
                    /* catch() { ... } // from try @ 03671d80 with catch @ 03672da8 */
                    /* catch() { ... } // from try @ 03671d60 with catch @ 03672dac */
                    /* catch() { ... } // from try @ 03671d94 with catch @ 03672db0 */
  return pSVar30;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3572DBC]
// LJBBDFJMELD$$KCBILPIAPHN @ RVA 0x3572DBC

int32_t LJBBDFJMELD__KCBILPIAPHN(LJBBDFJMELD_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 036728e4 with catch @ 03672dbc */
                    /* catch() { ... } // from try @ 03671c3c with catch @ 03672dc0 */
  return 0;
}

