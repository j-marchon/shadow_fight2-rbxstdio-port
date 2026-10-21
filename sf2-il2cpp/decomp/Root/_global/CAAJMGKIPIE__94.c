// TypeDefIndex 94
// Namespace: 
// public class CAAJMGKIPIE
// Fields:
//   private CAAJMGKIPIE.GGMOLMPJAHF JDNKKGPNHPB; // 0x10
//   public CAAJMGKIPIE.FBOGOHEIDCK OEKGJBJANED; // 0x18
//   private string DEKCPPOJFEH; // 0x20
//   private OBOBEOMMECI AEFFBMHBHMO; // 0x28
//   private OBOBEOMMECI DLHBONAANAJ; // 0x30
//   private OBOBEOMMECI CAHGCIHODKA; // 0x38
//   private OBOBEOMMECI DFNILIFNDDA; // 0x40
//   private OBOBEOMMECI IOKMJABOHIH; // 0x48
//   private List<MGNDHCBAPEN<string, OBOBEOMMECI>> ECCIEDIDMNL; // 0x50
//   private List<MGNDHCBAPEN<string, OBOBEOMMECI>> EPIHANAMOIN; // 0x58
//   private OBOBEOMMECI KDANBNPKEJM; // 0x60
//   private OBOBEOMMECI LBBPPBGDLEF; // 0x68
//   private OBOBEOMMECI PCMGAMANNPL; // 0x70
//   private MGNDHCBAPEN<OBOBEOMMECI, OBOBEOMMECI> MHCJDLGAEJJ; // 0x78
//   private MGNDHCBAPEN<OBOBEOMMECI, OBOBEOMMECI> CIDOBADNLEA; // 0x80
//   private MGNDHCBAPEN<OBOBEOMMECI, OBOBEOMMECI> KJIMMPAJBBH; // 0x88
//   private MGNDHCBAPEN<OBOBEOMMECI, OBOBEOMMECI> ACFLMPNDONK; // 0x90
//   private List<MGNDHCBAPEN<string, OBOBEOMMECI>> NAHLKNEFLAA; // 0x98
//   private List<MGNDHCBAPEN<string, OBOBEOMMECI>> EPELDAJNLHI; // 0xA0

// ===== private static CAAJMGKIPIE.GGMOLMPJAHF CNOMHMIIEAB(string HCBBECJJIKK)  [RVA 0x3000D48]
// CAAJMGKIPIE$$CNOMHMIIEAB @ RVA 0x3000D48

int32_t CAAJMGKIPIE__CNOMHMIIEAB(System_String_o *HCBBECJJIKK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04565b28 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10999/*"Random"*/);
    FUN_01bab630(&StringLiteral_12806/*"Tabular"*/);
    FUN_01bab630(&StringLiteral_12437/*"Strange tactic type: {0}"*/);
    DAT_04565b28 = 1;
  }
  bVar1 = System_String__op_Equality(HCBBECJJIKK,StringLiteral_10999/*"Random"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(HCBBECJJIKK,StringLiteral_12806/*"Tabular"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((HCBBECJJIKK != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(HCBBECJJIKK,(((args->obj).klass)->_1).element_class),
         lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)HCBBECJJIKK;
      thunk_FUN_01c20e04(args->m_Items,HCBBECJJIKK);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_12437/*"Strange tactic type: {0}"*/,args,(MethodInfo *)0x0);
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ===== public float DGOPOPEDMIG(ECENNHNBAME NLEBDPHNIDI, FHHDFKADHEI OKBIKHHKOEN)  [RVA 0x3000E8C]
// CAAJMGKIPIE$$DGOPOPEDMIG @ RVA 0x3000E8C

float CAAJMGKIPIE__DGOPOPEDMIG
                (CAAJMGKIPIE_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,FHHDFKADHEI_o *OKBIKHHKOEN,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *__this_00;
  Il2CppClass *a;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565b29 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b29 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NAHLKNEFLAA;
  if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
            );
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                      );
    pIVar1 = local_70.fields._current;
    if (!bVar2) {
      fVar3 = 0.0;
      goto LAB_03100fc0;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    a = local_70.fields._current[1].klass;
    bVar2 = System_String__op_Equality((System_String_o *)a,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (bVar2) break;
    if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = ECENNHNBAME__CBJGGDFAACP(NLEBDPHNIDI,(System_String_o *)a,(MethodInfo *)0x0);
    if (bVar2) {
LAB_03100fa4:
      if (pIVar1[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar3 = OBOBEOMMECI__PPOKEOHAHFG
                        (pIVar1[1].monitor,OKBIKHHKOEN,(NLEBDPHNIDI->fields).JIJLBFGKNJK,
                         (MethodInfo *)0x0);
LAB_03100fc0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                );
      return fVar3;
    }
  }
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_03100fa4;
}


// ===== public void .ctor(XmlNode ELOCKFLGKNO)  [RVA 0x3001084]
// CAAJMGKIPIE$$.ctor @ RVA 0x3001084

/* WARNING: Removing unreachable block (ram,0x03101ddc) */
/* WARNING: Removing unreachable block (ram,0x03102134) */
/* WARNING: Removing unreachable block (ram,0x03102128) */

void CAAJMGKIPIE___ctor(CAAJMGKIPIE_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  CAAJMGKIPIE_FBOGOHEIDCK_o *pCVar5;
  OBOBEOMMECI_o *pOVar6;
  OBOBEOMMECI_o **ppOVar7;
  OBOBEOMMECI_o **ppOVar8;
  OBOBEOMMECI_o **ppOVar9;
  OBOBEOMMECI_o **ppOVar10;
  OBOBEOMMECI_o **ppOVar11;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar12;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o **ppSVar13;
  OBOBEOMMECI_o **ppOVar14;
  OBOBEOMMECI_o **ppOVar15;
  OBOBEOMMECI_o *pOVar16;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar17;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o **ppMVar18;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o **ppMVar19;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o **ppMVar20;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o **ppSVar21;
  System_Xml_XmlAttributeCollection_o *pSVar22;
  System_Xml_XmlAttribute_o *pSVar23;
  System_String_o *pSVar24;
  long *plVar25;
  System_Xml_XmlNode_o *pSVar26;
  undefined8 *puVar27;
  MGNDHCBAPEN_string__OBOBEOMMECI__o *pMVar28;
  MethodInfo *method_00;
  MethodInfo *pMVar29;
  long lVar30;
  MGNDHCBAPEN_string__OBOBEOMMECI__array *pMVar31;
  ulong uVar32;
  int *piVar33;
  System_String_o **ppSVar34;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o **ppMVar35;
  CAAJMGKIPIE_FBOGOHEIDCK_o **ppCVar36;
  float fVar37;
  CAAJMGKIPIE_FBOGOHEIDCK_Fields CVar38;
  
  if ((DAT_04565b2a & 1) == 0) {
    FUN_01bab630(&CAAJMGKIPIE_FBOGOHEIDCK_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&OBOBEOMMECI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5768/*"EnemyResponseDelay"*/);
    FUN_01bab630(&StringLiteral_5450/*"DodgeChance"*/);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_11334/*"ResponseDelay"*/);
    FUN_01bab630(&StringLiteral_4832/*"CounterAttackChance"*/);
    FUN_01bab630(&StringLiteral_6578/*"FrameError"*/);
    FUN_01bab630(&StringLiteral_3512/*"BlockChance"*/);
    FUN_01bab630(&StringLiteral_14617/*"UseDefense"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5452/*"DodgeMissilesChance"*/);
                    /* try { // try from 031011f4 to 03201407 has its CatchHandler @ 031011f4
                       catch() { ... } // from try @ 031011f4 with catch @ 031011f4
                       catch() { ... } // from try @ 03101478 with catch @ 031011f4
                       catch() { ... } // from try @ 031015d4 with catch @ 031011f4
                       catch() { ... } // from try @ 03101778 with catch @ 031011f4
                       catch() { ... } // from try @ 0310179c with catch @ 031011f4
                       catch() { ... } // from try @ 03101800 with catch @ 031011f4
                       catch() { ... } // from try @ 0310183c with catch @ 031011f4 */
    FUN_01bab630(&StringLiteral_12468/*"Strikes"*/);
    FUN_01bab630(&StringLiteral_12796/*"TableAttackChance"*/);
    FUN_01bab630(&StringLiteral_5451/*"DodgeMagicChance"*/);
    FUN_01bab630(&StringLiteral_14621/*"UseSafeAttackChance"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_2982/*"AnimationWeights"*/);
    FUN_01bab630(&StringLiteral_5978/*"Evades"*/);
    FUN_01bab630(&StringLiteral_8945/*"Memory"*/);
    FUN_01bab630(&StringLiteral_6085/*"ExpectedWait"*/);
    FUN_01bab630(&StringLiteral_10730/*"QuickAttacks"*/);
    FUN_01bab630(&StringLiteral_5979/*"Evades21a"*/);
    FUN_01bab630(&StringLiteral_11434/*"RoundFactor"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_4209/*"CautiousMovementsChance"*/);
    FUN_01bab630(&StringLiteral_5424/*"DistanceError"*/);
    FUN_01bab630(&StringLiteral_10731/*"QuickAttacks21a"*/);
    DAT_04565b2a = 1;
  }
  pCVar5 = (CAAJMGKIPIE_FBOGOHEIDCK_o *)thunk_FUN_01bda818(CAAJMGKIPIE_FBOGOHEIDCK_TypeInfo);
  CVar38 = (CAAJMGKIPIE_FBOGOHEIDCK_Fields)NEON_fmov(0x41200000,4);
  pCVar5->fields = CVar38;
  System_Object___ctor((Il2CppObject *)pCVar5,(MethodInfo *)0x0);
  ppCVar36 = &(__this->fields).OEKGJBJANED;
  *ppCVar36 = pCVar5;
  thunk_FUN_01c20e04(ppCVar36,pCVar5);
  ppSVar34 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar34 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar34);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar7 = &(__this->fields).AEFFBMHBHMO;
  *ppOVar7 = pOVar6;
  thunk_FUN_01c20e04(ppOVar7,pOVar6);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar8 = &(__this->fields).DLHBONAANAJ;
  *ppOVar8 = pOVar6;
  thunk_FUN_01c20e04(ppOVar8,pOVar6);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar9 = &(__this->fields).CAHGCIHODKA;
  *ppOVar9 = pOVar6;
  thunk_FUN_01c20e04(ppOVar9,pOVar6);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar10 = &(__this->fields).DFNILIFNDDA;
  *ppOVar10 = pOVar6;
  thunk_FUN_01c20e04(ppOVar10,pOVar6);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar11 = &(__this->fields).IOKMJABOHIH;
  *ppOVar11 = pOVar6;
  thunk_FUN_01c20e04(ppOVar11,pOVar6);
  pSVar12 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
            thunk_FUN_01bda818(
                              System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                              );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar12,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar13 = &(__this->fields).ECCIEDIDMNL;
  *ppSVar13 = pSVar12;
  thunk_FUN_01c20e04(ppSVar13,pSVar12);
  pSVar12 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
            thunk_FUN_01bda818(
                              System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                              );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar12,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar13 = &(__this->fields).EPIHANAMOIN;
  *ppSVar13 = pSVar12;
                    /* try { // try from 03101408 to 0320140f has its CatchHandler @ 03101598 */
  thunk_FUN_01c20e04(ppSVar13,pSVar12);
                    /* try { // try from 03101410 to 03201433 has its CatchHandler @ 031015a0 */
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar14 = &(__this->fields).KDANBNPKEJM;
  *ppOVar14 = pOVar6;
  thunk_FUN_01c20e04(ppOVar14,pOVar6);
                    /* try { // try from 03101434 to 03201447 has its CatchHandler @ 0310159c */
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar14 = &(__this->fields).LBBPPBGDLEF;
  *ppOVar14 = pOVar6;
                    /* try { // try from 03101458 to 0320145b has its CatchHandler @ 03101594 */
  thunk_FUN_01c20e04(ppOVar14,pOVar6);
                    /* try { // try from 0310145c to 03201477 has its CatchHandler @ 031015a4 */
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  ppOVar15 = &(__this->fields).PCMGAMANNPL;
  *ppOVar15 = pOVar6;
                    /* try { // try from 03101478 to 032015bb has its CatchHandler @ 031011f4 */
  thunk_FUN_01c20e04(ppOVar15,pOVar6);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pOVar16 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar16,(MethodInfo *)0x0);
  pMVar17 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
            thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar17,(Il2CppObject *)pOVar6,(Il2CppObject *)pOVar16,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar18 = &(__this->fields).MHCJDLGAEJJ;
  *ppMVar18 = pMVar17;
  thunk_FUN_01c20e04(ppMVar18,pMVar17);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pOVar16 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar16,(MethodInfo *)0x0);
  pMVar17 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
            thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar17,(Il2CppObject *)pOVar6,(Il2CppObject *)pOVar16,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar19 = &(__this->fields).CIDOBADNLEA;
  *ppMVar19 = pMVar17;
  thunk_FUN_01c20e04(ppMVar19,pMVar17);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pOVar16 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar16,(MethodInfo *)0x0);
  pMVar17 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
            thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar17,(Il2CppObject *)pOVar6,(Il2CppObject *)pOVar16,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar20 = &(__this->fields).KJIMMPAJBBH;
  *ppMVar20 = pMVar17;
  thunk_FUN_01c20e04(ppMVar20,pMVar17);
                    /* catch() { ... } // from try @ 03101458 with catch @ 03101594 */
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
                    /* catch() { ... } // from try @ 03101408 with catch @ 03101598 */
                    /* catch() { ... } // from try @ 03101434 with catch @ 0310159c */
                    /* catch() { ... } // from try @ 03101410 with catch @ 031015a0 */
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0310145c with catch @ 031015a4 */
  pOVar16 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar16,(MethodInfo *)0x0);
                    /* try { // try from 031015bc to 032015d3 has its CatchHandler @ 031017f8 */
  pMVar17 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
            thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar17,(Il2CppObject *)pOVar6,(Il2CppObject *)pOVar16,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar35 = &(__this->fields).ACFLMPNDONK;
                    /* try { // try from 031015d4 to 03201757 has its CatchHandler @ 031011f4 */
  *ppMVar35 = pMVar17;
  thunk_FUN_01c20e04(ppMVar35,pMVar17);
  pSVar12 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
            thunk_FUN_01bda818(
                              System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                              );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar12,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar13 = &(__this->fields).NAHLKNEFLAA;
  *ppSVar13 = pSVar12;
  thunk_FUN_01c20e04(ppSVar13,pSVar12);
  pSVar12 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
            thunk_FUN_01bda818(
                              System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                              );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar12,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar21 = &(__this->fields).EPELDAJNLHI;
  *ppSVar21 = pSVar12;
  thunk_FUN_01c20e04(ppSVar21,pSVar12);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar22 = (System_Xml_XmlAttributeCollection_o *)
                (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                          (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method),
     pSVar22 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_03102108;
  pSVar23 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar22,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
  pSVar24 = EIABCPKDEBD__JPKEHIBGOEM(pSVar23,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  *ppSVar34 = pSVar24;
  thunk_FUN_01c20e04(ppSVar34,pSVar24);
  pSVar22 = (System_Xml_XmlAttributeCollection_o *)
            (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                      (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
  if (pSVar22 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03102108;
  pSVar23 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar22,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  pSVar24 = EIABCPKDEBD__JPKEHIBGOEM(pSVar23,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  iVar4 = CAAJMGKIPIE__CNOMHMIIEAB(pSVar24,method_00);
  (__this->fields).JDNKKGPNHPB = iVar4;
  plVar25 = (long *)(*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                              (ELOCKFLGKNO,StringLiteral_8945/*"Memory"*/,
                               (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (plVar25 != (long *)0x0) {
    pCVar5 = *ppCVar36;
    pSVar22 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar25 + 0x238))(plVar25,*(undefined8 *)(*plVar25 + 0x240));
    if (pSVar22 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03102108;
    pSVar23 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar22,StringLiteral_12468/*"Strikes"*/,(MethodInfo *)0x0);
    fVar37 = EIABCPKDEBD__GICIEKCGOHA(pSVar23,0.0,(MethodInfo *)0x0);
    if (pCVar5 == (CAAJMGKIPIE_FBOGOHEIDCK_o *)0x0) goto LAB_03102108;
    (pCVar5->fields).APFANODMCKP = fVar37;
    pCVar5 = *ppCVar36;
                    /* try { // try from 03101758 to 0320175b has its CatchHandler @ 03101808 */
                    /* try { // try from 0310175c to 03201777 has its CatchHandler @ 0310180c */
    pSVar22 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar25 + 0x238))(plVar25,*(undefined8 *)(*plVar25 + 0x240));
    if (pSVar22 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03102108;
    pSVar23 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar22,StringLiteral_11434/*"RoundFactor"*/,(MethodInfo *)0x0);
                    /* try { // try from 03101778 to 03201783 has its CatchHandler @ 031011f4 */
    fVar37 = EIABCPKDEBD__GICIEKCGOHA(pSVar23,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03101784 to 0320179b has its CatchHandler @ 031017f8 */
    if (pCVar5 == (CAAJMGKIPIE_FBOGOHEIDCK_o *)0x0) goto LAB_03102108;
    (pCVar5->fields).BAJKKDHKEPH = fVar37;
  }
                    /* try { // try from 0310179c to 032017e3 has its CatchHandler @ 031011f4 */
  plVar25 = (long *)(*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                              (ELOCKFLGKNO,StringLiteral_14617/*"UseDefense"*/,
                               (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (plVar25 != (long *)0x0) {
    pOVar6 = *ppOVar7;
    pSVar26 = (System_Xml_XmlNode_o *)
              (**(code **)(*plVar25 + 0x468))
                        (plVar25,StringLiteral_4832/*"CounterAttackChance"*/,*(undefined8 *)(*plVar25 + 0x470));
    if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
                    /* try { // try from 031017e4 to 032017f3 has its CatchHandler @ 031017f8 */
    OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031015bc with catch @ 031017f8
                       catch() { ... } // from try @ 03101784 with catch @ 031017f8
                       catch() { ... } // from try @ 031017e4 with catch @ 031017f8 */
                    /* try { // try from 031017fc to 032017ff has its CatchHandler @ 03101874 */
                    /* try { // try from 03101800 to 03201823 has its CatchHandler @ 031011f4 */
                    /* catch() { ... } // from try @ 03101758 with catch @ 03101808 */
    pOVar6 = *ppOVar8;
                    /* catch() { ... } // from try @ 0310175c with catch @ 0310180c */
    pSVar26 = (System_Xml_XmlNode_o *)
              (**(code **)(*plVar25 + 0x468))
                        (plVar25,StringLiteral_5450/*"DodgeChance"*/,*(undefined8 *)(*plVar25 + 0x470));
    if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
                    /* try { // try from 03101824 to 0320183b has its CatchHandler @ 03101868 */
    OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
                    /* try { // try from 0310183c to 03201857 has its CatchHandler @ 031011f4 */
    pOVar6 = *ppOVar9;
    pSVar26 = (System_Xml_XmlNode_o *)
              (**(code **)(*plVar25 + 0x468))
                        (plVar25,StringLiteral_3512/*"BlockChance"*/,*(undefined8 *)(*plVar25 + 0x470));
    if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
                    /* try { // try from 03101858 to 03201867 has its CatchHandler @ 03101868 */
    OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 03101824 with catch @ 03101868
                       catch() { ... } // from try @ 03101858 with catch @ 03101868 */
                    /* try { // try from 0310186c to 0320186f has its CatchHandler @ 03101874 */
                    /* catch() { ... } // from try @ 031017fc with catch @ 03101874
                       catch() { ... } // from try @ 0310186c with catch @ 03101874 */
  pOVar6 = *ppOVar10;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                      (ELOCKFLGKNO,StringLiteral_14621/*"UseSafeAttackChance"*/,
                       (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
  OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
  pOVar6 = *ppOVar11;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                      (ELOCKFLGKNO,StringLiteral_12796/*"TableAttackChance"*/,
                       (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
  OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
  pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_10730/*"QuickAttacks"*/);
  if (pSVar26 == (System_Xml_XmlNode_o *)0x0) {
    pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
    pSVar26 = (System_Xml_XmlNode_o *)
              (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                        (ELOCKFLGKNO,StringLiteral_10731/*"QuickAttacks21a"*/);
  }
  CAAJMGKIPIE__GNGPBDNFABC(__this,pSVar26,pMVar29);
  pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_5978/*"Evades"*/);
  if (pSVar26 == (System_Xml_XmlNode_o *)0x0) {
    pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
    pSVar26 = (System_Xml_XmlNode_o *)
              (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_5979/*"Evades21a"*/)
    ;
  }
  CAAJMGKIPIE__BEFOEBBDKDJ(__this,pSVar26,pMVar29);
  pOVar6 = (__this->fields).KDANBNPKEJM;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                      (ELOCKFLGKNO,StringLiteral_4209/*"CautiousMovementsChance"*/,
                       (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
  OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
  pOVar6 = *ppOVar14;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                      (ELOCKFLGKNO,StringLiteral_5452/*"DodgeMissilesChance"*/,
                       (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
  OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
  pOVar6 = *ppOVar15;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                      (ELOCKFLGKNO,StringLiteral_5451/*"DodgeMagicChance"*/,
                       (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (pOVar6 == (OBOBEOMMECI_o *)0x0) goto LAB_03102108;
  OBOBEOMMECI__HNIHOIAMDPC(pOVar6,pSVar26,(MethodInfo *)0x0);
  pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_5424/*"DistanceError"*/);
  CAAJMGKIPIE__JJJPBBLJNCD(pSVar26,*ppMVar18,pMVar29);
  pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_6578/*"FrameError"*/);
  CAAJMGKIPIE__JJJPBBLJNCD(pSVar26,*ppMVar19,pMVar29);
  pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_11334/*"ResponseDelay"*/);
  CAAJMGKIPIE__JJJPBBLJNCD(pSVar26,*ppMVar20,pMVar29);
  pMVar29 = (ELOCKFLGKNO->klass->vtable)._51_get_Item.method;
  pSVar26 = (System_Xml_XmlNode_o *)
            (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)(ELOCKFLGKNO,StringLiteral_5768/*"EnemyResponseDelay"*/);
  CAAJMGKIPIE__JJJPBBLJNCD(pSVar26,*ppMVar35,pMVar29);
  plVar25 = (long *)(*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                              (ELOCKFLGKNO,StringLiteral_2982/*"AnimationWeights"*/,
                               (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (plVar25 != (long *)0x0) {
    plVar25 = (long *)(**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
    if (plVar25 != (long *)0x0) {
      plVar25 = (long *)(**(code **)(*plVar25 + 0x1b8))(plVar25,*(undefined8 *)(*plVar25 + 0x1c0));
      if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar30 = *plVar25;
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 != 0) {
          piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar33 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar27 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_03101ba0;
            }
            uVar32 = uVar32 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar32 != 0);
        }
        puVar27 = (undefined8 *)FUN_01b81914(plVar25,System_Collections_IEnumerator_TypeInfo,0);
LAB_03101ba0:
        uVar32 = (*(code *)*puVar27)(plVar25,puVar27[1]);
        if ((uVar32 & 1) == 0) {
          plVar25 = (long *)thunk_FUN_01bda71c(plVar25,System_IDisposable_TypeInfo);
          if (plVar25 == (long *)0x0) goto LAB_03101de0;
          lVar30 = *plVar25;
          uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar32 == 0) goto LAB_03101da8;
          piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          goto LAB_03101d90;
        }
        lVar30 = *plVar25;
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 != 0) {
          piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar33 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar27 = (undefined8 *)(lVar30 + (long)(*piVar33 + 1) * 0x10 + 0x138);
              goto LAB_03101c00;
            }
            uVar32 = uVar32 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar32 != 0);
        }
        puVar27 = (undefined8 *)FUN_01b81914(plVar25,System_Collections_IEnumerator_TypeInfo,1);
LAB_03101c00:
        pSVar26 = (System_Xml_XmlNode_o *)(*(code *)*puVar27)(plVar25,puVar27[1]);
        if (pSVar26 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar26->klass->_2).naturalAligment < bVar1) ||
           ((pSVar26->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar26);
        }
        pSVar24 = (System_String_o *)
                  (*(pSVar26->klass->vtable)._8_unknown.methodPtr)
                            (pSVar26,(pSVar26->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar24,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar22 = (System_Xml_XmlAttributeCollection_o *)
                    (*(pSVar26->klass->vtable)._16_get_Attributes.methodPtr)
                              (pSVar26,(pSVar26->klass->vtable)._16_get_Attributes.method);
          if (pSVar22 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar23 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar22,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar24 = EIABCPKDEBD__JPKEHIBGOEM(pSVar23,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
          OBOBEOMMECI___ctor(pOVar6,pSVar26,(MethodInfo *)0x0);
          pSVar12 = *ppSVar13;
          pMVar28 = (MGNDHCBAPEN_string__OBOBEOMMECI__o *)
                    thunk_FUN_01bda818(MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
          MGNDHCBAPEN<object,_object>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)pMVar28,(Il2CppObject *)pSVar24,(Il2CppObject *)pOVar6
                     ,Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
          lVar30 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__;
          if (pSVar12 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar31 = (pSVar12->fields)._items;
          (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
          if (pMVar31 == (MGNDHCBAPEN_string__OBOBEOMMECI__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar12->fields)._size;
          if (uVar2 < (uint)pMVar31->max_length) {
            (pSVar12->fields)._size = uVar2 + 1;
            pMVar31->m_Items[(int)uVar2] = pMVar28;
            thunk_FUN_01c20e04(pMVar31->m_Items + (int)uVar2,pMVar28);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)pMVar28,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
    goto LAB_03102108;
  }
  goto LAB_03101de0;
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar33 = piVar33 + 4;
    if (uVar32 == 0) break;
LAB_0310208c:
    if (*(System_IDisposable_c **)(piVar33 + -2) == System_IDisposable_TypeInfo) {
      puVar27 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_031020c0;
    }
  }
LAB_031020a4:
  puVar27 = (undefined8 *)FUN_01b81914(plVar25,System_IDisposable_TypeInfo,0);
LAB_031020c0:
  (*(code *)*puVar27)(plVar25,puVar27[1]);
  return;
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar33 = piVar33 + 4;
    if (uVar32 == 0) break;
LAB_03101d90:
    if (*(System_IDisposable_c **)(piVar33 + -2) == System_IDisposable_TypeInfo) {
      puVar27 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_03101dc4;
    }
  }
LAB_03101da8:
  puVar27 = (undefined8 *)FUN_01b81914(plVar25,System_IDisposable_TypeInfo,0);
LAB_03101dc4:
  (*(code *)*puVar27)(plVar25,puVar27[1]);
LAB_03101de0:
  plVar25 = (long *)(*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                              (ELOCKFLGKNO,StringLiteral_6085/*"ExpectedWait"*/,
                               (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
  if (plVar25 == (long *)0x0) {
    return;
  }
  plVar25 = (long *)(**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
  if (plVar25 != (long *)0x0) {
    plVar25 = (long *)(**(code **)(*plVar25 + 0x1b8))(plVar25,*(undefined8 *)(*plVar25 + 0x1c0));
    if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar30 = *plVar25;
      uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar32 != 0) {
        piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar33 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar27 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_03101ea8;
          }
          uVar32 = uVar32 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar32 != 0);
      }
      puVar27 = (undefined8 *)FUN_01b81914(plVar25,System_Collections_IEnumerator_TypeInfo,0);
LAB_03101ea8:
      uVar32 = (*(code *)*puVar27)(plVar25,puVar27[1]);
      if ((uVar32 & 1) == 0) {
        plVar25 = (long *)thunk_FUN_01bda71c(plVar25,System_IDisposable_TypeInfo);
        if (plVar25 == (long *)0x0) {
          return;
        }
        lVar30 = *plVar25;
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 == 0) goto LAB_031020a4;
        piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        goto LAB_0310208c;
      }
      lVar30 = *plVar25;
      uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar32 != 0) {
        piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar33 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar27 = (undefined8 *)(lVar30 + (long)(*piVar33 + 1) * 0x10 + 0x138);
            goto LAB_03101f08;
          }
          uVar32 = uVar32 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar32 != 0);
      }
      puVar27 = (undefined8 *)FUN_01b81914(plVar25,System_Collections_IEnumerator_TypeInfo,1);
LAB_03101f08:
      pSVar26 = (System_Xml_XmlNode_o *)(*(code *)*puVar27)(plVar25,puVar27[1]);
      if (pSVar26 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar26->klass->_2).naturalAligment < bVar1) ||
         ((pSVar26->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar26);
      }
      pSVar24 = (System_String_o *)
                (*(pSVar26->klass->vtable)._8_unknown.methodPtr)
                          (pSVar26,(pSVar26->klass->vtable)._8_unknown.method);
      bVar3 = System_String__op_Equality(pSVar24,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar22 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar26->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar26,(pSVar26->klass->vtable)._16_get_Attributes.method);
        if (pSVar22 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar23 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar22,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar24 = EIABCPKDEBD__JPKEHIBGOEM(pSVar23,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
        OBOBEOMMECI___ctor(pOVar6,pSVar26,(MethodInfo *)0x0);
        pSVar12 = *ppSVar21;
        pMVar28 = (MGNDHCBAPEN_string__OBOBEOMMECI__o *)
                  thunk_FUN_01bda818(MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
        MGNDHCBAPEN<object,_object>___ctor
                  ((MGNDHCBAPEN_T1__T2__o *)pMVar28,(Il2CppObject *)pSVar24,(Il2CppObject *)pOVar6,
                   Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
        lVar30 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__;
        if (pSVar12 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar31 = (pSVar12->fields)._items;
        (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
        if (pMVar31 == (MGNDHCBAPEN_string__OBOBEOMMECI__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar12->fields)._size;
        if (uVar2 < (uint)pMVar31->max_length) {
          (pSVar12->fields)._size = uVar2 + 1;
          pMVar31->m_Items[(int)uVar2] = pMVar28;
          thunk_FUN_01c20e04(pMVar31->m_Items + (int)uVar2,pMVar28);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)pMVar28,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
LAB_03102108:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BKAIGLDAJPC(List<ECENNHNBAME> ELAGKBMJCOD, ECENNHNBAME LFDMFHFMPFA, FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3002F54]
// CAAJMGKIPIE$$BKAIGLDAJPC @ RVA 0x3002F54

int32_t CAAJMGKIPIE__BKAIGLDAJPC
                  (CAAJMGKIPIE_o *__this,System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD
                  ,ECENNHNBAME_o *LFDMFHFMPFA,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  ECENNHNBAME_o *pEVar1;
  FHHDFKADHEI_o *method_00;
  int iVar2;
  int index;
  float fVar3;
  float fVar4;
  
  method_00 = MJEOBEDMNHL;
  if ((DAT_04565b2b & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    DAT_04565b2b = 1;
  }
  if (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    if (0 < (ELAGKBMJCOD->fields)._size) {
      iVar2 = 0;
      fVar4 = 0.0;
      do {
        pEVar1 = (ECENNHNBAME_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,iVar2,
                            Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        if (pEVar1 == (ECENNHNBAME_o *)0x0 && LFDMFHFMPFA != (ECENNHNBAME_o *)0x0) {
          pEVar1 = LFDMFHFMPFA;
        }
        if (pEVar1 != (ECENNHNBAME_o *)0x0) {
          fVar3 = CAAJMGKIPIE__DGOPOPEDMIG(__this,pEVar1,MJEOBEDMNHL,(MethodInfo *)method_00);
          fVar4 = fVar4 + fVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (ELAGKBMJCOD->fields)._size);
      if (0.0 < fVar4) {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar4 = LIIFLGALGNK__GFHNCCOMPAJ(fVar4,(MethodInfo *)0x0);
        if (0 < (ELAGKBMJCOD->fields)._size) {
          iVar2 = 0;
          index = 0;
          do {
            pEVar1 = (ECENNHNBAME_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,
                                Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
            if (pEVar1 == (ECENNHNBAME_o *)0x0 && LFDMFHFMPFA != (ECENNHNBAME_o *)0x0) {
              pEVar1 = LFDMFHFMPFA;
            }
            if (pEVar1 != (ECENNHNBAME_o *)0x0) {
              fVar3 = CAAJMGKIPIE__DGOPOPEDMIG(__this,pEVar1,MJEOBEDMNHL,(MethodInfo *)method_00);
              fVar4 = fVar4 - fVar3;
              if (fVar4 < 0.0) {
                return iVar2;
              }
              iVar2 = iVar2 + 1;
            }
            index = index + 1;
          } while (index < (ELAGKBMJCOD->fields)._size);
        }
      }
    }
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x30030C4]
// CAAJMGKIPIE$$RandomizeObscuredVars @ RVA 0x30030C4

void CAAJMGKIPIE__RandomizeObscuredVars(CAAJMGKIPIE_o *__this,MethodInfo *method)

{
  OBOBEOMMECI_o *pOVar1;
  System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o **ppSVar2;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar4;
  System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar5;
  
  if ((DAT_04565b2c & 1) == 0) {
    FUN_01bab630(&System_Action<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_ForEach__
                );
    FUN_01bab630(&Method_CAAJMGKIPIE_<>c_BKFDLLEGEHE__);
    FUN_01bab630(&Method_CAAJMGKIPIE_<>c_DADJLHCKIHD__);
    FUN_01bab630(&Method_CAAJMGKIPIE_<>c_EKHCEBINOPH__);
    FUN_01bab630(&Method_CAAJMGKIPIE_<>c_MCHOPEPAPGJ__);
    FUN_01bab630(&CAAJMGKIPIE_<>c_TypeInfo);
    DAT_04565b2c = 1;
  }
  pOVar1 = (__this->fields).AEFFBMHBHMO;
  if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
    OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
    pOVar1 = (__this->fields).DLHBONAANAJ;
    if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
      OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
      pOVar1 = (__this->fields).CAHGCIHODKA;
      if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
        OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
        pOVar1 = (__this->fields).DFNILIFNDDA;
        if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
          OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
          pOVar1 = (__this->fields).IOKMJABOHIH;
          if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
            OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
            pSVar4 = (__this->fields).ECCIEDIDMNL;
            if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar5 = CAAJMGKIPIE_<>c_TypeInfo->static_fields->__9__51_0;
            if (pSVar5 == (System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
              if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar5 = (System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
                       thunk_FUN_01bda818(System_Action<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo);
              System_Action<object>___ctor();
              ppSVar2 = &CAAJMGKIPIE_<>c_TypeInfo->static_fields->__9__51_0;
              *ppSVar2 = pSVar5;
              thunk_FUN_01c20e04(ppSVar2,pSVar5);
            }
            if (pSVar4 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0
               ) {
              System_Collections_Generic_List<object>__ForEach
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (System_Action_T__o *)pSVar5,
                         Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_ForEach__
                        );
              pSVar4 = (__this->fields).EPIHANAMOIN;
              if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar5 = CAAJMGKIPIE_<>c_TypeInfo->static_fields->__9__51_1;
              if (pSVar5 == (System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
                if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar5 = (System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
                         thunk_FUN_01bda818(System_Action<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                                           );
                System_Action<object>___ctor();
                ppSVar2 = &CAAJMGKIPIE_<>c_TypeInfo->static_fields->__9__51_1;
                *ppSVar2 = pSVar5;
                thunk_FUN_01c20e04(ppSVar2,pSVar5);
              }
              if (pSVar4 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
                            0x0) {
                System_Collections_Generic_List<object>__ForEach
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (System_Action_T__o *)pSVar5,
                           Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_ForEach__
                          );
                pOVar1 = (__this->fields).KDANBNPKEJM;
                if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
                  OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                  pOVar1 = (__this->fields).LBBPPBGDLEF;
                  if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
                    OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                    pOVar1 = (__this->fields).PCMGAMANNPL;
                    if (pOVar1 != (OBOBEOMMECI_o *)0x0) {
                      OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                      pMVar3 = (__this->fields).MHCJDLGAEJJ;
                      if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                         (pOVar1 = (pMVar3->fields).PHPELPFMOII, pOVar1 != (OBOBEOMMECI_o *)0x0)) {
                        OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                        pMVar3 = (__this->fields).MHCJDLGAEJJ;
                        if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                           (pOVar1 = (pMVar3->fields).DOKHHBGJICA, pOVar1 != (OBOBEOMMECI_o *)0x0))
                        {
                          OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                          pMVar3 = (__this->fields).CIDOBADNLEA;
                          if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                             (pOVar1 = (pMVar3->fields).PHPELPFMOII, pOVar1 != (OBOBEOMMECI_o *)0x0)
                             ) {
                            OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                            pMVar3 = (__this->fields).CIDOBADNLEA;
                            if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                               (pOVar1 = (pMVar3->fields).DOKHHBGJICA,
                               pOVar1 != (OBOBEOMMECI_o *)0x0)) {
                              OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                              pMVar3 = (__this->fields).KJIMMPAJBBH;
                              if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                                 (pOVar1 = (pMVar3->fields).PHPELPFMOII,
                                 pOVar1 != (OBOBEOMMECI_o *)0x0)) {
                                OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                                pMVar3 = (__this->fields).KJIMMPAJBBH;
                                if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                                   (pOVar1 = (pMVar3->fields).DOKHHBGJICA,
                                   pOVar1 != (OBOBEOMMECI_o *)0x0)) {
                                  OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                                  pMVar3 = (__this->fields).ACFLMPNDONK;
                                  if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
                                     (pOVar1 = (pMVar3->fields).PHPELPFMOII,
                                     pOVar1 != (OBOBEOMMECI_o *)0x0)) {
                                    OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                                    pMVar3 = (__this->fields).ACFLMPNDONK;
                                    if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0)
                                       && (pOVar1 = (pMVar3->fields).DOKHHBGJICA,
                                          pOVar1 != (OBOBEOMMECI_o *)0x0)) {
                                      OBOBEOMMECI__RandomizeObscuredVars(pOVar1,(MethodInfo *)0x0);
                                      pSVar4 = (__this->fields).NAHLKNEFLAA;
                                      if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                                        thunk_FUN_01ba7564();
                                      }
                                      pSVar5 = CAAJMGKIPIE_<>c_TypeInfo->static_fields->__9__51_2;
                                      if (pSVar5 == (
                                                  System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o
                                                  *)0x0) {
                                        if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        pSVar5 = (System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o
                                                  *)thunk_FUN_01bda818(
                                                  System_Action<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                                                  );
                                        System_Action<object>___ctor();
                                        ppSVar2 = &CAAJMGKIPIE_<>c_TypeInfo->static_fields->
                                                   __9__51_2;
                                        *ppSVar2 = pSVar5;
                                        thunk_FUN_01c20e04(ppSVar2,pSVar5);
                                      }
                                      if (pSVar4 != (
                                                  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o
                                                  *)0x0) {
                                        System_Collections_Generic_List<object>__ForEach
                                                  ((System_Collections_Generic_List_object__o *)
                                                   pSVar4,(System_Action_T__o *)pSVar5,
                                                                                                      
                                                  Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_ForEach__
                                                  );
                                        pSVar4 = (__this->fields).EPELDAJNLHI;
                                        if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        pSVar5 = CAAJMGKIPIE_<>c_TypeInfo->static_fields->__9__51_3;
                                        if (pSVar5 == (
                                                  System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o
                                                  *)0x0) {
                                          if ((CAAJMGKIPIE_<>c_TypeInfo->_2).cctor_finished == 0) {
                                            thunk_FUN_01ba7564();
                                          }
                                          pSVar5 = (
                                                  System_Action_MGNDHCBAPEN_string__OBOBEOMMECI___o
                                                  *)thunk_FUN_01bda818(
                                                  System_Action<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                                                  );
                                          System_Action<object>___ctor();
                                          ppSVar2 = &CAAJMGKIPIE_<>c_TypeInfo->static_fields->
                                                     __9__51_3;
                                          *ppSVar2 = pSVar5;
                                          thunk_FUN_01c20e04(ppSVar2,pSVar5);
                                        }
                                        if (pSVar4 != (
                                                  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o
                                                  *)0x0) {
                                          System_Collections_Generic_List<object>__ForEach
                                                    ((System_Collections_Generic_List_object__o *)
                                                     pSVar4,(System_Action_T__o *)pSVar5,
                                                                                                          
                                                  Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_ForEach__
                                                  );
                                          return;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float DAMEJECEIOA(ECENNHNBAME NLEBDPHNIDI, FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x30034E4]
// CAAJMGKIPIE$$DAMEJECEIOA @ RVA 0x30034E4

float CAAJMGKIPIE__DAMEJECEIOA
                (CAAJMGKIPIE_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,FHHDFKADHEI_o *MJEOBEDMNHL,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar3;
  OBOBEOMMECI_o *__this_00;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565b2d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_6069/*"Expected Wait ERROR"*/);
    DAT_04565b2d = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
    pSVar3 = (__this->fields).EPELDAJNLHI;
    if (pSVar3 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
    goto LAB_03103734;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
              );
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) goto LAB_031036cc;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__IsNullOrEmpty
                        ((System_String_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0);
    } while (!bVar2);
    if (pIVar1[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG
                      (pIVar1[1].monitor,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (__this->fields).EPELDAJNLHI;
    if (pSVar3 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
LAB_03103734:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
              );
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
LAB_031036cc:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                  );
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_6069/*"Expected Wait ERROR"*/,(MethodInfo *)0x0);
        return 1.0;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__IsNullOrEmpty
                        ((System_String_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0);
    } while ((!bVar2) &&
            (bVar2 = ECENNHNBAME__CBJGGDFAACP
                               (NLEBDPHNIDI,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0),
            !bVar2));
    __this_00 = pIVar1[1].monitor;
    if (__this_00 == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
            );
  return fVar4;
}


// ===== public float POMNKDEBKEM(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x30037F4]
// CAAJMGKIPIE$$POMNKDEBKEM @ RVA 0x30037F4

float CAAJMGKIPIE__POMNKDEBKEM(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).CAHGCIHODKA;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<MGNDHCBAPEN<string, OBOBEOMMECI>> MICEHADBJMH()  [RVA 0x3003814]
// CAAJMGKIPIE$$MICEHADBJMH @ RVA 0x3003814

System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *
CAAJMGKIPIE__MICEHADBJMH(CAAJMGKIPIE_o *__this,MethodInfo *method)

{
  return (__this->fields).ECCIEDIDMNL;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x300381C]
// CAAJMGKIPIE$$KCHJCGEMCGE @ RVA 0x300381C

System_String_o * CAAJMGKIPIE__KCHJCGEMCGE(CAAJMGKIPIE_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public List<MGNDHCBAPEN<string, OBOBEOMMECI>> KMPDNPJAJKO()  [RVA 0x3003824]
// CAAJMGKIPIE$$KMPDNPJAJKO @ RVA 0x3003824

System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *
CAAJMGKIPIE__KMPDNPJAJKO(CAAJMGKIPIE_o *__this,MethodInfo *method)

{
  return (__this->fields).EPIHANAMOIN;
}


// ===== public int EKPMHAGJGKB(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x300382C]
// CAAJMGKIPIE$$EKPMHAGJGKB @ RVA 0x300382C

int32_t CAAJMGKIPIE__EKPMHAGJGKB
                  (CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  int32_t iVar1;
  OBOBEOMMECI_o *pOVar2;
  MethodInfo *method_00;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar3;
  float fVar4;
  float GKBCJOEFFCP;
  
  pMVar3 = (__this->fields).KJIMMPAJBBH;
  if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
     (pOVar2 = (pMVar3->fields).PHPELPFMOII, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG(pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
    pMVar3 = (__this->fields).KJIMMPAJBBH;
    if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
       (pOVar2 = (pMVar3->fields).DOKHHBGJICA, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
      GKBCJOEFFCP = OBOBEOMMECI__PPOKEOHAHFG
                              (pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
      fVar4 = CAAJMGKIPIE__MFOEBIDIGCJ(fVar4,GKBCJOEFFCP,method_00);
      iVar1 = -0x80000000;
      if (fVar4 != INFINITY) {
        iVar1 = (int)fVar4;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void JJJPBBLJNCD(XmlNode ELOCKFLGKNO, MGNDHCBAPEN<OBOBEOMMECI, OBOBEOMMECI> LEAMIBIAIIN)  [RVA 0x3002E7C]
// CAAJMGKIPIE$$JJJPBBLJNCD @ RVA 0x3002E7C

void CAAJMGKIPIE__JJJPBBLJNCD
               (System_Xml_XmlNode_o *ELOCKFLGKNO,
               MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *LEAMIBIAIIN,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  OBOBEOMMECI_o *pOVar2;
  
  if ((DAT_04565b2e & 1) == 0) {
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
    DAT_04565b2e = 1;
  }
  if (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) {
    if (LEAMIBIAIIN != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) {
      pOVar2 = (LEAMIBIAIIN->fields).PHPELPFMOII;
      pSVar1 = (System_Xml_XmlNode_o *)
               (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                         (ELOCKFLGKNO,StringLiteral_9058/*"Min"*/,
                          (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
      if (pOVar2 != (OBOBEOMMECI_o *)0x0) {
        OBOBEOMMECI__HNIHOIAMDPC(pOVar2,pSVar1,(MethodInfo *)0x0);
        pOVar2 = (LEAMIBIAIIN->fields).DOKHHBGJICA;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                           (ELOCKFLGKNO,StringLiteral_8868/*"Max"*/,
                            (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
        if (pOVar2 != (OBOBEOMMECI_o *)0x0) {
          OBOBEOMMECI__HNIHOIAMDPC(pOVar2,pSVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public float NCNANCNHGID(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003920]
// CAAJMGKIPIE$$NCNANCNHGID @ RVA 0x3003920

float CAAJMGKIPIE__NCNANCNHGID(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).DFNILIFNDDA;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BEFOEBBDKDJ(XmlNode ELOCKFLGKNO)  [RVA 0x30028DC]
// CAAJMGKIPIE$$BEFOEBBDKDJ @ RVA 0x30028DC

/* WARNING: Removing unreachable block (ram,0x03102d44) */

void CAAJMGKIPIE__BEFOEBBDKDJ
               (CAAJMGKIPIE_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  Il2CppClass *pIVar6;
  OBOBEOMMECI_o *__this_01;
  MGNDHCBAPEN_string__OBOBEOMMECI__o *__this_02;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar8;
  long lVar9;
  MGNDHCBAPEN_string__OBOBEOMMECI__array *pMVar10;
  ulong uVar11;
  int *piVar12;
  int index;
  
  if ((DAT_04565b2f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                );
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&OBOBEOMMECI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5975/*"EvadeChance"*/);
    DAT_04565b2f = 1;
  }
  pSVar8 = (__this->fields).EPIHANAMOIN;
  if ((pSVar8 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) &&
     (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0)) {
    index = (pSVar8->fields)._size;
    plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03102a5c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03102a5c:
        uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_03102ce4;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03102ccc;
        }
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03102abc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03102abc:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        a = (System_String_o *)
            (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_5975/*"EvadeChance"*/,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (System_Xml_XmlAttributeCollection_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method)
          ;
          if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_00,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
          pIVar6 = (Il2CppClass *)
                   EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar8 = (__this->fields).EPIHANAMOIN;
          __this_01 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
          OBOBEOMMECI___ctor(__this_01,(MethodInfo *)0x0);
          __this_02 = (MGNDHCBAPEN_string__OBOBEOMMECI__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
          MGNDHCBAPEN<object,_object>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this_02,(Il2CppObject *)StringLiteral_1/*""*/,
                     (Il2CppObject *)__this_01,Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
          lVar9 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar10 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_string__OBOBEOMMECI__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pMVar10->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pMVar10->m_Items[(int)uVar2] = __this_02;
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar2,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          pSVar8 = (__this->fields).EPIHANAMOIN;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar8,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7[1].klass = pIVar6;
          thunk_FUN_01c20e04(pIVar7 + 1,pIVar6);
          pSVar8 = (__this->fields).EPIHANAMOIN;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar8,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pIVar7[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OBOBEOMMECI__HNIHOIAMDPC(pIVar7[1].monitor,AHDGNOJPPIB,(MethodInfo *)0x0);
          index = index + 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03102ccc:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03102d00;
    }
  }
LAB_03102ce4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03102d00:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public float MPIAEPNHPAB(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003940]
// CAAJMGKIPIE$$MPIAEPNHPAB @ RVA 0x3003940

float CAAJMGKIPIE__MPIAEPNHPAB(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).PCMGAMANNPL;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int JDLOALPCHAH(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003960]
// CAAJMGKIPIE$$JDLOALPCHAH @ RVA 0x3003960

int32_t CAAJMGKIPIE__JDLOALPCHAH
                  (CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  int32_t iVar1;
  OBOBEOMMECI_o *pOVar2;
  MethodInfo *method_00;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar3;
  float fVar4;
  float GKBCJOEFFCP;
  
  pMVar3 = (__this->fields).CIDOBADNLEA;
  if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
     (pOVar2 = (pMVar3->fields).PHPELPFMOII, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG(pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
    pMVar3 = (__this->fields).CIDOBADNLEA;
    if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
       (pOVar2 = (pMVar3->fields).DOKHHBGJICA, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
      GKBCJOEFFCP = OBOBEOMMECI__PPOKEOHAHFG
                              (pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
      fVar4 = CAAJMGKIPIE__MFOEBIDIGCJ(fVar4,GKBCJOEFFCP,method_00);
      iVar1 = -0x80000000;
      if (fVar4 != INFINITY) {
        iVar1 = (int)fVar4;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float NELLPMHOEMA(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x30039EC]
// CAAJMGKIPIE$$NELLPMHOEMA @ RVA 0x30039EC

float CAAJMGKIPIE__NELLPMHOEMA(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).LBBPPBGDLEF;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<string> IHDDNNEMAJE(List<OANGEOLKMJG> FAFKNGFMFAJ)  [RVA 0x3003A0C]
// CAAJMGKIPIE$$IHDDNNEMAJE @ RVA 0x3003A0C

System_Collections_Generic_List_string__o *
CAAJMGKIPIE__IHDDNNEMAJE
          (CAAJMGKIPIE_o *__this,System_Collections_Generic_List_OANGEOLKMJG__o *FAFKNGFMFAJ,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  OANGEOLKMJG_o *pOVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *item;
  System_Collections_Generic_List_ObscuredString__o *pSVar7;
  System_String_array *pSVar8;
  OANGEOLKMJG_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565b30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANGEOLKMJG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565b30 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  if (FAFKNGFMFAJ != (System_Collections_Generic_List_OANGEOLKMJG__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b0,(System_Collections_Generic_List_object__o *)FAFKNGFMFAJ,
               Method_System_Collections_Generic_List<OANGEOLKMJG>_GetEnumerator__);
    local_80.fields._index = local_b0.fields._index;
    local_80.fields._version = local_b0.fields._version;
    local_80.fields._list = local_b0.fields._list;
    local_80.fields._current = local_b0.fields._current;
    pOVar3 = (OANGEOLKMJG_o *)0x0;
    while (__this_02 = pOVar3,
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_MoveNext__
                            ), __this_00 = local_80.fields._current, bVar4) {
      if ((OANGEOLKMJG_o *)local_80.fields._current == (OANGEOLKMJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = ((OANGEOLKMJG_Fields *)((long)local_80.fields._current + 0x10))->FMFKGEJLDGO;
      if (pSVar7 == (System_Collections_Generic_List_ObscuredString__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar3 = __this_02;
      if (((0 < (pSVar7->fields)._size) &&
          (bVar4 = OANGEOLKMJG__DGCODECJJCC
                             ((OANGEOLKMJG_o *)local_80.fields._current,(MethodInfo *)0x0), bVar4))
         && (pOVar3 = (OANGEOLKMJG_o *)__this_00, __this_02 != (OANGEOLKMJG_o *)0x0)) {
        iVar5 = OANGEOLKMJG__FPLGFNJEMDP(__this_02,(MethodInfo *)0x0);
        iVar6 = OANGEOLKMJG__FPLGFNJEMDP((OANGEOLKMJG_o *)__this_00,(MethodInfo *)0x0);
        pOVar3 = __this_02;
        if (iVar5 <= iVar6) {
          pOVar3 = (OANGEOLKMJG_o *)__this_00;
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_Dispose__);
    if (__this_02 == (OANGEOLKMJG_o *)0x0) {
      return (System_Collections_Generic_List_string__o *)0x0;
    }
    pSVar7 = (__this_02->fields).FMFKGEJLDGO;
    if (pSVar7 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
      iVar5 = (pSVar7->fields)._size;
      __this_01 = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_01,iVar5,
                 Method_System_Collections_Generic_List<string>__ctor__);
      pSVar7 = (__this_02->fields).FMFKGEJLDGO;
      if (pSVar7 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar7,
                   Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_98,
                             Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                            );
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_98,
                       Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
            return __this_01;
          }
          item = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                            local_98.fields._current,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
          pSVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar8 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar8->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar8->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int FFDDFBKMDAD(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003DA0]
// CAAJMGKIPIE$$FFDDFBKMDAD @ RVA 0x3003DA0

int32_t CAAJMGKIPIE__FFDDFBKMDAD
                  (CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  int32_t iVar1;
  OBOBEOMMECI_o *pOVar2;
  MethodInfo *method_00;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar3;
  float fVar4;
  float GKBCJOEFFCP;
  
  pMVar3 = (__this->fields).ACFLMPNDONK;
  if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
     (pOVar2 = (pMVar3->fields).PHPELPFMOII, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG(pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
    pMVar3 = (__this->fields).ACFLMPNDONK;
    if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
       (pOVar2 = (pMVar3->fields).DOKHHBGJICA, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
      GKBCJOEFFCP = OBOBEOMMECI__PPOKEOHAHFG
                              (pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
      fVar4 = CAAJMGKIPIE__MFOEBIDIGCJ(fVar4,GKBCJOEFFCP,method_00);
      iVar1 = -0x80000000;
      if (fVar4 != INFINITY) {
        iVar1 = (int)fVar4;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float DKFKPJPDMIA(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003E2C]
// CAAJMGKIPIE$$DKFKPJPDMIA @ RVA 0x3003E2C

float CAAJMGKIPIE__DKFKPJPDMIA(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).DLHBONAANAJ;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float FPHJFLLNCND(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003E4C]
// CAAJMGKIPIE$$FPHJFLLNCND @ RVA 0x3003E4C

float CAAJMGKIPIE__FPHJFLLNCND(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).AEFFBMHBHMO;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float LGDNMOPLANP(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003E6C]
// CAAJMGKIPIE$$LGDNMOPLANP @ RVA 0x3003E6C

float CAAJMGKIPIE__LGDNMOPLANP(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).IOKMJABOHIH;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float HPGJBPDNNCA(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003E8C]
// CAAJMGKIPIE$$HPGJBPDNNCA @ RVA 0x3003E8C

float CAAJMGKIPIE__HPGJBPDNNCA(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).KDANBNPKEJM;
  if (__this_00 != (OBOBEOMMECI_o *)0x0) {
    fVar1 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float HNNBGFCCBAF(FHHDFKADHEI MJEOBEDMNHL)  [RVA 0x3003EAC]
// CAAJMGKIPIE$$HNNBGFCCBAF @ RVA 0x3003EAC

float CAAJMGKIPIE__HNNBGFCCBAF(CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  OBOBEOMMECI_o *pOVar1;
  MethodInfo *method_00;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar2;
  float fVar3;
  float GKBCJOEFFCP;
  
  pMVar2 = (__this->fields).MHCJDLGAEJJ;
  if ((pMVar2 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
     (pOVar1 = (pMVar2->fields).PHPELPFMOII, pOVar1 != (OBOBEOMMECI_o *)0x0)) {
    fVar3 = OBOBEOMMECI__PPOKEOHAHFG(pOVar1,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).MHCJDLGAEJJ;
    if ((pMVar2 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
       (pOVar1 = (pMVar2->fields).DOKHHBGJICA, pOVar1 != (OBOBEOMMECI_o *)0x0)) {
      GKBCJOEFFCP = OBOBEOMMECI__PPOKEOHAHFG
                              (pOVar1,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
      fVar3 = CAAJMGKIPIE__MFOEBIDIGCJ(fVar3,GKBCJOEFFCP,method_00);
      return fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GNGPBDNFABC(XmlNode ELOCKFLGKNO)  [RVA 0x300233C]
// CAAJMGKIPIE$$GNGPBDNFABC @ RVA 0x300233C

/* WARNING: Removing unreachable block (ram,0x031027a4) */

void CAAJMGKIPIE__GNGPBDNFABC
               (CAAJMGKIPIE_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  Il2CppClass *pIVar6;
  OBOBEOMMECI_o *__this_01;
  MGNDHCBAPEN_string__OBOBEOMMECI__o *__this_02;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar8;
  long lVar9;
  MGNDHCBAPEN_string__OBOBEOMMECI__array *pMVar10;
  ulong uVar11;
  int *piVar12;
  int index;
  
  if ((DAT_04565b31 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                );
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&OBOBEOMMECI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_10729/*"QuickAttackChance"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b31 = 1;
  }
  pSVar8 = (__this->fields).ECCIEDIDMNL;
  if ((pSVar8 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) &&
     (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0)) {
    index = (pSVar8->fields)._size;
    plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_031024bc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031024bc:
        uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_03102744;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0310272c;
        }
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0310251c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0310251c:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        a = (System_String_o *)
            (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_10729/*"QuickAttackChance"*/,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (System_Xml_XmlAttributeCollection_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method)
          ;
          if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_00,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
          pIVar6 = (Il2CppClass *)
                   EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar8 = (__this->fields).ECCIEDIDMNL;
          __this_01 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
          OBOBEOMMECI___ctor(__this_01,(MethodInfo *)0x0);
          __this_02 = (MGNDHCBAPEN_string__OBOBEOMMECI__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
          MGNDHCBAPEN<object,_object>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this_02,(Il2CppObject *)StringLiteral_1/*""*/,
                     (Il2CppObject *)__this_01,Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
          lVar9 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar10 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_string__OBOBEOMMECI__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pMVar10->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pMVar10->m_Items[(int)uVar2] = __this_02;
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar2,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          pSVar8 = (__this->fields).ECCIEDIDMNL;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar8,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7[1].klass = pIVar6;
          thunk_FUN_01c20e04(pIVar7 + 1,pIVar6);
          pSVar8 = (__this->fields).ECCIEDIDMNL;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar8,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pIVar7[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OBOBEOMMECI__HNIHOIAMDPC(pIVar7[1].monitor,AHDGNOJPPIB,(MethodInfo *)0x0);
          index = index + 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0310272c:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03102760;
    }
  }
LAB_03102744:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03102760:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public CAAJMGKIPIE.GGMOLMPJAHF NHGGBEACKBD()  [RVA 0x3003F1C]
// CAAJMGKIPIE$$NHGGBEACKBD @ RVA 0x3003F1C

int32_t CAAJMGKIPIE__NHGGBEACKBD(CAAJMGKIPIE_o *__this,MethodInfo *method)

{
  return (__this->fields).JDNKKGPNHPB;
}


// ===== public void .ctor()  [RVA 0x3003F24]
// CAAJMGKIPIE$$.ctor @ RVA 0x3003F24

void CAAJMGKIPIE___ctor(CAAJMGKIPIE_o *__this,MethodInfo *method)

{
  CAAJMGKIPIE_FBOGOHEIDCK_o *__this_00;
  CAAJMGKIPIE_FBOGOHEIDCK_o **ppCVar1;
  OBOBEOMMECI_o *pOVar2;
  OBOBEOMMECI_o **ppOVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o **ppSVar5;
  OBOBEOMMECI_o *pOVar6;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar7;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o **ppMVar8;
  MethodInfo *extraout_x1;
  CAAJMGKIPIE_FBOGOHEIDCK_Fields CVar9;
  
  if ((DAT_04565b32 & 1) == 0) {
    FUN_01bab630(&CAAJMGKIPIE_FBOGOHEIDCK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&OBOBEOMMECI_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b32 = 1;
    method = extraout_x1;
  }
  __this_00 = (CAAJMGKIPIE_FBOGOHEIDCK_o *)
              thunk_FUN_01bda818(CAAJMGKIPIE_FBOGOHEIDCK_TypeInfo,method);
  CVar9 = (CAAJMGKIPIE_FBOGOHEIDCK_Fields)NEON_fmov(0x41200000,4);
  __this_00->fields = CVar9;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).OEKGJBJANED;
  *ppCVar1 = __this_00;
  thunk_FUN_01c20e04(ppCVar1,__this_00);
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).AEFFBMHBHMO;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).DLHBONAANAJ;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).CAHGCIHODKA;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).DFNILIFNDDA;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).IOKMJABOHIH;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pSVar4 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar5 = &(__this->fields).ECCIEDIDMNL;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pSVar4 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar5 = &(__this->fields).EPIHANAMOIN;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).KDANBNPKEJM;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).LBBPPBGDLEF;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  ppOVar3 = &(__this->fields).PCMGAMANNPL;
  *ppOVar3 = pOVar2;
  thunk_FUN_01c20e04(ppOVar3,pOVar2);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pMVar7 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
           thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar7,(Il2CppObject *)pOVar2,(Il2CppObject *)pOVar6,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar8 = &(__this->fields).MHCJDLGAEJJ;
  *ppMVar8 = pMVar7;
  thunk_FUN_01c20e04(ppMVar8,pMVar7);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pMVar7 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
           thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar7,(Il2CppObject *)pOVar2,(Il2CppObject *)pOVar6,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar8 = &(__this->fields).CIDOBADNLEA;
  *ppMVar8 = pMVar7;
  thunk_FUN_01c20e04(ppMVar8,pMVar7);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pMVar7 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
           thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar7,(Il2CppObject *)pOVar2,(Il2CppObject *)pOVar6,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar8 = &(__this->fields).KJIMMPAJBBH;
  *ppMVar8 = pMVar7;
  thunk_FUN_01c20e04(ppMVar8,pMVar7);
  pOVar2 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar2,(MethodInfo *)0x0);
  pOVar6 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
  OBOBEOMMECI___ctor(pOVar6,(MethodInfo *)0x0);
  pMVar7 = (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)
           thunk_FUN_01bda818(MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar7,(Il2CppObject *)pOVar2,(Il2CppObject *)pOVar6,
             Method_MGNDHCBAPEN<OBOBEOMMECI,_OBOBEOMMECI>__ctor__);
  ppMVar8 = &(__this->fields).ACFLMPNDONK;
  *ppMVar8 = pMVar7;
  thunk_FUN_01c20e04(ppMVar8,pMVar7);
  pSVar4 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar5 = &(__this->fields).NAHLKNEFLAA;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pSVar4 = (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>__ctor__);
  ppSVar5 = &(__this->fields).EPELDAJNLHI;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static float MFOEBIDIGCJ(float PEOMJHJICCM, float GKBCJOEFFCP)  [RVA 0x30038B8]
// CAAJMGKIPIE$$MFOEBIDIGCJ @ RVA 0x30038B8

float CAAJMGKIPIE__MFOEBIDIGCJ(float PEOMJHJICCM,float GKBCJOEFFCP,MethodInfo *method)

{
  float fVar1;
  
  if ((DAT_04565b33 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04565b33 = 1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar1 = LIIFLGALGNK__GFHNCCOMPAJ(PEOMJHJICCM,GKBCJOEFFCP,(MethodInfo *)0x0);
  return fVar1;
}

