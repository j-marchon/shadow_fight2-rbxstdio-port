// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.InfoAnimation  (obfuscated ECENNHNBAME)
// TypeDefIndex 133
// Namespace: 
// public class InfoAnimation
// Fields:
//   protected List<List<MGNDHCBAPEN<GroupTables[], string>>> EADAGMIKLJN; // 0x10
//   public ModelShiftTable BEHFDAIGOAJ; // 0x18
//   public InfoAnimation.HLOKMMLPCKJ BGHFADDGPAD; // 0x20
//   public ObscuredInt FECCBIOBKAF; // 0x24
//   public ObscuredInt EAFPDFHFBOM; // 0x34
//   public int IGLHCNLNIPK; // 0x44
//   public ObscuredInt LCLBPCMKHPM; // 0x48
//   public ObscuredInt IPAGCJKIPEN; // 0x58
//   public string JIJLBFGKNJK; // 0x68
//   public string KBCOHMPJELJ; // 0x70
//   public InfoAnimation.HJPFANEPGJF DMGLMCBIAGL; // 0x78
//   public ObscuredBool OEGKFPBBLEP; // 0x80
//   public bool BFMPHOCJIHP; // 0x8C
//   public bool DKGPOGCGINF; // 0x8D
//   public ObscuredBool HLDOANABODA; // 0x90
//   public bool HEFBBDINLMN; // 0x9C
//   public bool BDINFCJOMNC; // 0x9D
//   public ObscuredFloat DDBKJGNJHPP; // 0xA0
//   public bool LIAEJLADLPH; // 0xB4
//   private ObscuredInt KBEGPIFNNNN; // 0xB8
//   private List<string> GMNNFJNKIAN; // 0xC8
//   private ObscuredVector3 GIBHJGLKJBA; // 0xD0
//   private ObscuredVector3 FJLENBJAOFI; // 0xF0
//   private ObscuredBool PLCFKFFINMM; // 0x110
//   private ObscuredBool GFPACGPFOPI; // 0x11C
//   private DistancePoint JCKNGNJBIIF; // 0x128
//   private ObscuredFloat ECEGJGAAOHH; // 0x130
//   private bool BNLDAAPGEHO; // 0x144
//   private StageType.HEJHMMBJODB NECLMKFFDCO; // 0x148
//   private InfoAnimation.MNDFKOHIAHI FGEAOBODDAP; // 0x150
//   private Vector3[][] MMENPDNBNHN; // 0x158
//   public InfoAnimation.DNGAEDAAIJE ANMFJDOLEKO; // 0x160
//   private static readonly List<InfoAnimation.ECNMNALHFIF> PHNBIJIOHJO; // 0x0
//   private List<string> <AHFPJJKEANI>k__BackingField; // 0x168
//   private InfoAnimation CPCDDBKNDAC; // 0x170

// ===== public void AOHPFMNMABI(List<ConditionAnimation> CJNHFNHJHPE)  [RVA 0x3014A10]
// InfoAnimation$$AOHPFMNMABI @ RVA 0x3014A10

void InfoAnimation__AOHPFMNMABI
               (InfoAnimation_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565bca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_AddRange__);
    DAT_04565bca = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).KPFGHBEKJIM,
     __this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<ConditionAnimation>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void HPGNLPIBDBN(List<ConditionAnimation> AHEFOIOKDOK, List<ConditionKeys> PFDNCKLLMBL)  [RVA 0x3014A70]
// InfoAnimation$$HPGNLPIBDBN @ RVA 0x3014A70

void InfoAnimation__HPGNLPIBDBN
               (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
               System_Collections_Generic_List_GBKCLIFGIFN__o *PFDNCKLLMBL,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar4;
  int32_t iVar5;
  ConditionKeys_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ConditionKeys_array *pGVar6;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK_00;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 03114a8c to 03214b8f has its CatchHandler @ 03114a8c
                       catch() { ... } // from try @ 03114a8c with catch @ 03114a8c
                       catch() { ... } // from try @ 03114d28 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114d98 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114e78 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114ea8 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114ef4 with catch @ 03114a8c */
  if ((DAT_04565bcb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_get_Current__);
    FUN_01bab630(&ConditionList_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionKeys>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_17320/*"conditionList is null"*/);
    DAT_04565bcb = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__
                          );
        PFDEAPMMFAP = local_70.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
                    /* try { // try from 03114ca4 to 03214ca7 has its CatchHandler @ 03114d98 */
                    /* try { // try from 03114ca8 to 03214cb7 has its CatchHandler @ 03114da4 */
          return;
        }
                    /* try { // try from 03114b90 to 03214ba3 has its CatchHandler @ 03114dbc */
        if ((ConditionAnimation_o *)local_70.fields._current == (ConditionAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = ConditionAnimation__NHGGBEACKBD
                          ((ConditionAnimation_o *)local_70.fields._current,(MethodInfo *)0x0);
        if (iVar5 != 8) break;
                    /* try { // try from 03114bb4 to 03214bbb has its CatchHandler @ 03114de0 */
        bVar1 = (ConditionList_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03114bc0 to 03214bc7 has its CatchHandler @ 03114ddc */
                    /* try { // try from 03114bd0 to 03214bdf has its CatchHandler @ 03114dd4 */
        if (((((ConditionAnimation_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
           ((((ConditionAnimation_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ConditionList_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03114bec to 03214bff has its CatchHandler @ 03114dd0 */
          UnityEngine_Debug__LogError(StringLiteral_17320/*"conditionList is null"*/,(MethodInfo *)0x0);
        }
        else {
          AHEFOIOKDOK_00 = ((ConditionAnimation_o *)((long)PFDEAPMMFAP + 0x28))->monitor;
          if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03114c88 to 03214c93 has its CatchHandler @ 03114d9c */
          InfoAnimation__HPGNLPIBDBN(AHEFOIOKDOK_00,PFDNCKLLMBL,method);
        }
      }
      method_00 = extraout_x1;
      if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03114c00 to 03214c0b has its CatchHandler @ 03114dcc */
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      item = InfoAnimation__NBIECKIMNNK((ConditionAnimation_o *)PFDEAPMMFAP,method_00);
      lVar3 = Method_System_Collections_Generic_List<ConditionKeys>_Add__;
    } while (item == (ConditionKeys_o *)0x0);
                    /* try { // try from 03114c14 to 03214c1f has its CatchHandler @ 03114db4 */
    if (PFDNCKLLMBL == (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar6 = (PFDNCKLLMBL->fields)._items;
                    /* try { // try from 03114c24 to 03214c2f has its CatchHandler @ 03114db0 */
    (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
    if (pGVar6 == (ConditionKeys_array *)0x0) break;
    uVar2 = (PFDNCKLLMBL->fields)._size;
    if (uVar2 < (uint)pGVar6->max_length) {
                    /* try { // try from 03114c44 to 03214c4f has its CatchHandler @ 03114da8 */
      (PFDNCKLLMBL->fields)._size = uVar2 + 1;
      pGVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
                    /* try { // try from 03114c54 to 03214c63 has its CatchHandler @ 03114da0 */
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,(Il2CppObject *)item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool FINLPLHJDHN(List<string> EOLHDEHOFHL)  [RVA 0x3014DE4]
// InfoAnimation$$FINLPLHJDHN @ RVA 0x3014DE4

/* WARNING: Removing unreachable block (ram,0x03114f80) */

bool InfoAnimation__FINLPLHJDHN
               (InfoAnimation_o *__this,System_Collections_Generic_List_string__o *EOLHDEHOFHL,
               MethodInfo *method)

{
  Il2CppObject *a;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 03114dfc to 03214dff has its CatchHandler @ 03114edc */
  if ((DAT_04565bcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565bcc = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
                    /* try { // try from 03114e50 to 03214e77 has its CatchHandler @ 03114efc */
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03114e78 to 03214e8f has its CatchHandler @ 03114a8c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
                    /* try { // try from 03114e90 to 03214ea7 has its CatchHandler @ 03114eec */
  local_60.fields._current = local_98.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    a = local_60.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    if (EOLHDEHOFHL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03114ea8 to 03214ec3 has its CatchHandler @ 03114a8c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)EOLHDEHOFHL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
                    /* try { // try from 03114ec4 to 03214ed3 has its CatchHandler @ 03114eec */
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    do {
                    /* try { // try from 03114ed4 to 03214ef3 has its CatchHandler @ 03114efc */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_03114f08;
      }
                    /* catch() { ... } // from try @ 03114dfc with catch @ 03114edc */
      bVar1 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)local_80.fields._current,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03114e90 with catch @ 03114eec
                       catch() { ... } // from try @ 03114ec4 with catch @ 03114eec */
    } while (!bVar1);
                    /* try { // try from 03114ef4 to 03214eff has its CatchHandler @ 03114a8c */
    bVar2 = 1;
    uVar3 = 6;
                    /* catch() { ... } // from try @ 03114e50 with catch @ 03114efc
                       catch() { ... } // from try @ 03114ed4 with catch @ 03114efc */
LAB_03114f08:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}


// ===== public bool EIBIEFALKLG()  [RVA 0x3015044]
// InfoAnimation$$EIBIEFALKLG @ RVA 0x3015044

bool InfoAnimation__EIBIEFALKLG(InfoAnimation_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).PLCFKFFINMM.fields,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool CBJGGDFAACP(string KGLJICLJHEL)  [RVA 0x3015058]
// InfoAnimation$$CBJGGDFAACP @ RVA 0x3015058

bool InfoAnimation__CBJGGDFAACP(InfoAnimation_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality((__this->fields).JIJLBFGKNJK,KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = InfoAnimation__NHELADLJDNP(__this,KGLJICLJHEL,method_00);
  return bVar1;
}


// ===== public void DJJKCELKAOI(InfoAnimation.MNDFKOHIAHI CJNHFNHJHPE)  [RVA 0x3015140]
// InfoAnimation$$DJJKCELKAOI @ RVA 0x3015140

void InfoAnimation__DJJKCELKAOI
               (InfoAnimation_o *__this,InfoAnimation_MNDFKOHIAHI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FGEAOBODDAP = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).FGEAOBODDAP);
  return;
}


// ===== public int LDJPELGFENL()  [RVA 0x3015150]
// InfoAnimation$$LDJPELGFENL @ RVA 0x3015150

int32_t InfoAnimation__LDJPELGFENL(InfoAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
  return iVar1 * 2 + 2;
}


// ===== public List<string> INPHNGKHIOD()  [RVA 0x3015178]
// InfoAnimation$$INPHNGKHIOD @ RVA 0x3015178

System_Collections_Generic_List_string__o *
InfoAnimation__INPHNGKHIOD(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).GMNNFJNKIAN;
}


// ===== public int DINOEMMMNBJ()  [RVA 0x3015180]
// InfoAnimation$$DINOEMMMNBJ @ RVA 0x3015180

int32_t InfoAnimation__DINOEMMMNBJ(InfoAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).KBEGPIFNNNN.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public bool JDKJCMKPGCF(string KGLJICLJHEL, int PAIECLCNOBO)  [RVA 0x3015190]
// InfoAnimation$$JDKJCMKPGCF @ RVA 0x3015190

bool InfoAnimation__JDKJCMKPGCF
               (InfoAnimation_o *__this,System_String_o *KGLJICLJHEL,int32_t PAIECLCNOBO,
               MethodInfo *method)

{
  bool bVar1;
  int32_t PKDBOMAHGHC;
  
  PKDBOMAHGHC = InfoAnimation__MJEOOGNPEFO(__this,PAIECLCNOBO,(MethodInfo *)(ulong)(uint)PAIECLCNOBO);
  bVar1 = InfoAnimation__AGEELFDMNAN(__this,KGLJICLJHEL,PKDBOMAHGHC,method);
  return bVar1;
}


// ===== public void BGBLMKAADNE(List<IntervalAnimation> CJNHFNHJHPE)  [RVA 0x30153D8]
// InfoAnimation$$BGBLMKAADNE @ RVA 0x30153D8

void InfoAnimation__BGBLMKAADNE
               (InfoAnimation_o *__this,System_Collections_Generic_List_JADGCGOJLJB__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t CJNHFNHJHPE_00;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_01;
  InfoAnimation_HJPFANEPGJF_o *pEVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04565bcd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565bcd = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (CJNHFNHJHPE != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__
                             ), __this_00 = local_58.fields._current, bVar1) {
      CJNHFNHJHPE_00 =
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                      (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
      if ((IntervalAnimation_o *)__this_00 == (IntervalAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      IntervalAnimation__BDBMIIBHJFM((IntervalAnimation_o *)__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    pEVar2 = (__this->fields).DMGLMCBIAGL;
    if ((pEVar2 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
       (__this_01 = (pEVar2->fields).GLFJDDHEMNO,
       __this_01 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
                 Method_System_Collections_Generic_List<IntervalAnimation>_AddRange__);
                    /* try { // try from 031154ec to 032154f3 has its CatchHandler @ 03115938 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BAHFNIPBBHD(NJPBHDMCLIN AHEFOIOKDOK, int PLPLBCGMPMC)  [RVA 0x301557C]
// InfoAnimation$$BAHFNIPBBHD @ RVA 0x301557C

int32_t InfoAnimation__BAHFNIPBBHD
                  (InfoAnimation_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,int32_t PLPLBCGMPMC,
                  MethodInfo *method)

{
  int32_t iVar1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar2;
  
  pEVar2 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar2 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar2->fields).GCIHJDANIJJ,
     __this_00 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0)) {
                    /* try { // try from 03115590 to 03215593 has its CatchHandler @ 03115924 */
                    /* try { // try from 03115594 to 032155a3 has its CatchHandler @ 03115928 */
    if ((__this_00->fields).OKONAOJIODE != false) {
      iVar1 = InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA__MKONAIENMCI
                        (__this_00,AHEFOIOKDOK,(MethodInfo *)(ulong)(uint)PLPLBCGMPMC);
      return iVar1;
    }
                    /* try { // try from 031155a4 to 0321574b has its CatchHandler @ 03115110 */
    return PLPLBCGMPMC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int COFDJFNCJDM(List<string> OKAINPMIKKD)  [RVA 0x301563C]
// InfoAnimation$$COFDJFNCJDM @ RVA 0x301563C

int32_t InfoAnimation__COFDJFNCJDM
                  (InfoAnimation_o *__this,System_Collections_Generic_List_string__o *OKAINPMIKKD,
                  MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565bce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565bce = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar5->fields).GLFJDDHEMNO,
     __this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    iVar4 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
        if (iVar4 < 1) {
          iVar3 = 0;
        }
        else {
          iVar3 = InfoAnimation__LMKFAMDMPJG(__this,iVar4 + 1,method);
        }
                    /* try { // try from 03115790 to 032157bf has its CatchHandler @ 031159b0 */
        return iVar3;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      if (OKAINPMIKKD == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<string>_Contains__;
      bVar2 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)OKAINPMIKKD,
                         (Il2CppObject *)local_60.fields._current[5].klass,
                         (MethodInfo_26E513C *)
                         Method_System_Collections_Generic_List<string>_Contains__);
      if (bVar2) {
        method = (MethodInfo *)0x0;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                           (MethodInfo *)0x0);
        if (iVar4 < iVar3) {
                    /* try { // try from 0311574c to 03215753 has its CatchHandler @ 03115940 */
          method = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                             (MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GIDBPKKFOBE()  [RVA 0x3015878]
// InfoAnimation$$GIDBPKKFOBE @ RVA 0x3015878

int32_t InfoAnimation__GIDBPKKFOBE(InfoAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
                    /* try { // try from 03115894 to 032158df has its CatchHandler @ 03115914 */
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  return (iVar1 - iVar2) + 1;
}


// ===== public void LDNCMJNKHPO(List<MGNDHCBAPEN<int, int>> BODACGEEGLE, KeyFrames PJMJIGJAKHG, int DPJIDNBJIBG)  [RVA 0x30158B4]
// InfoAnimation$$LDNCMJNKHPO @ RVA 0x30158B4

void InfoAnimation__LDNCMJNKHPO
               (InfoAnimation_o *__this,
               System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *BODACGEEGLE,
               KeyFrames_o *PJMJIGJAKHG,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  KeyFrames_MJFFMMHJCNB_o *pMVar2;
  Vector3f_o *__this_00;
  Il2CppObject *pIVar3;
  Vector3f_o *pCVar4;
  int iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar7;
  
                    /* try { // try from 031158e0 to 0321595b has its CatchHandler @ 03115110 */
  if ((DAT_04565bcf & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    __this = (InfoAnimation_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__)
    ;
                    /* catch() { ... } // from try @ 03115894 with catch @ 03115914 */
                    /* catch() { ... } // from try @ 03115870 with catch @ 03115918 */
    DAT_04565bcf = 1;
  }
                    /* catch() { ... } // from try @ 03115864 with catch @ 0311591c */
  if (BODACGEEGLE != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
                    /* catch() { ... } // from try @ 0311584c with catch @ 03115920 */
                    /* catch() { ... } // from try @ 03115590 with catch @ 03115924 */
                    /* catch() { ... } // from try @ 03115594 with catch @ 03115928 */
    if (0 < (BODACGEEGLE->fields)._size) {
                    /* catch() { ... } // from try @ 03115838 with catch @ 0311592c */
      if (PJMJIGJAKHG == (KeyFrames_o *)0x0) goto LAB_03115b54;
                    /* catch() { ... } // from try @ 03115834 with catch @ 03115930 */
                    /* catch() { ... } // from try @ 0311556c with catch @ 03115934 */
                    /* catch() { ... } // from try @ 031154ec with catch @ 03115938 */
      if (DPJIDNBJIBG < (PJMJIGJAKHG->fields).MONBPDGKCOM) {
                    /* catch() { ... } // from try @ 03115830 with catch @ 0311593c */
                    /* catch() { ... } // from try @ 0311574c with catch @ 03115940 */
                    /* catch() { ... } // from try @ 03115530 with catch @ 03115944 */
        pMVar2 = KeyFrames__HBMICHOLLMF(PJMJIGJAKHG,DPJIDNBJIBG,(MethodInfo *)0x0);
        __this = (InfoAnimation_o *)0x0;
        if (pMVar2 == (KeyFrames_MJFFMMHJCNB_o *)0x0) goto LAB_03115b54;
        iVar1 = (pMVar2->fields).ONGLGHIKBJF;
                    /* try { // try from 0311595c to 0321595f has its CatchHandler @ 0311598c */
                    /* try { // try from 03115960 to 0321599b has its CatchHandler @ 03115110 */
        __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
        Vector3f___ctor(__this_00,(MethodInfo *)0x0);
        iVar5 = (PJMJIGJAKHG->fields).MONBPDGKCOM;
        if (DPJIDNBJIBG < iVar5) {
          iVar6 = (BODACGEEGLE->fields)._size;
                    /* catch() { ... } // from try @ 0311595c with catch @ 0311598c */
          do {
            if (0 < iVar6) {
              iVar5 = 0;
              do {
                    /* try { // try from 0311599c to 032159af has its CatchHandler @ 03115a20 */
                pIVar3 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)BODACGEEGLE,iVar5,
                                    Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                   );
                __this = (InfoAnimation_o *)0x0;
                if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03115b54;
                    /* catch() { ... } // from try @ 03115790 with catch @ 031159b0
                       try { // try from 031159b0 to 032159c7 has its CatchHandler @ 03115110 */
                if (*(int *)&pIVar3[1].klass < iVar1) {
                    /* try { // try from 031159c8 to 032159cb has its CatchHandler @ 031159f4 */
                  pIVar3 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)BODACGEEGLE,iVar5
                                      ,
                                      Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                     );
                    /* try { // try from 031159cc to 03215a03 has its CatchHandler @ 03115110 */
                  __this = (InfoAnimation_o *)0x0;
                  if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03115b54;
                  if (*(int *)((long)&pIVar3[1].klass + 4) < iVar1) {
                    pMVar2 = KeyFrames__HBMICHOLLMF(PJMJIGJAKHG,DPJIDNBJIBG,(MethodInfo *)0x0);
                    __this = (InfoAnimation_o *)0x0;
                    if (pMVar2 == (KeyFrames_MJFFMMHJCNB_o *)0x0) goto LAB_03115b54;
                    /* catch() { ... } // from try @ 031159c8 with catch @ 031159f4 */
                    pSVar7 = (pMVar2->fields).KOANCCDDBDA;
                    __this = (InfoAnimation_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)BODACGEEGLE,
                                        iVar5,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                       );
                    /* try { // try from 03115a04 to 03215a0b has its CatchHandler @ 03115a20 */
                    /* try { // try from 03115a0c to 03215a17 has its CatchHandler @ 03115110 */
                    /* try { // try from 03115a18 to 03215a1f has its CatchHandler @ 03115a20 */
                    if (((__this == (InfoAnimation_o *)0x0) ||
                        (pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) ||
                       (__this = (InfoAnimation_o *)
                                 System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar7,
                                            *(int32_t *)&(__this->fields).EADAGMIKLJN,
                                            Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                           ), __this_00 == (Vector3f_o *)0x0)) goto LAB_03115b54;
                    /* catch() { ... } // from try @ 0311599c with catch @ 03115a20
                       catch() { ... } // from try @ 03115a04 with catch @ 03115a20
                       catch() { ... } // from try @ 03115a18 with catch @ 03115a20 */
                    Vector3f__FOOHBJNHOKK(__this_00,(Vector3f_o *)__this,(MethodInfo *)0x0);
                    pMVar2 = KeyFrames__HBMICHOLLMF(PJMJIGJAKHG,DPJIDNBJIBG,(MethodInfo *)0x0);
                    __this = (InfoAnimation_o *)0x0;
                    if (pMVar2 == (KeyFrames_MJFFMMHJCNB_o *)0x0) goto LAB_03115b54;
                    pSVar7 = (pMVar2->fields).KOANCCDDBDA;
                    __this = (InfoAnimation_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)BODACGEEGLE,
                                        iVar5,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                       );
                    if ((__this == (InfoAnimation_o *)0x0) ||
                       (pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0))
                    goto LAB_03115b54;
                    pCVar4 = (Vector3f_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar7,
                                        *(int32_t *)&(__this->fields).EADAGMIKLJN,
                                        Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                       );
                    pMVar2 = KeyFrames__HBMICHOLLMF(PJMJIGJAKHG,DPJIDNBJIBG,(MethodInfo *)0x0);
                    /* try { // try from 03115a84 to 03215b4b has its CatchHandler @ 03115a84
                       catch() { ... } // from try @ 03115a84 with catch @ 03115a84
                       catch() { ... } // from try @ 03115b90 with catch @ 03115a84
                       catch() { ... } // from try @ 03115c88 with catch @ 03115a84
                       catch() { ... } // from try @ 03115d28 with catch @ 03115a84 */
                    __this = (InfoAnimation_o *)0x0;
                    if (pMVar2 == (KeyFrames_MJFFMMHJCNB_o *)0x0) goto LAB_03115b54;
                    pSVar7 = (pMVar2->fields).KOANCCDDBDA;
                    __this = (InfoAnimation_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)BODACGEEGLE,
                                        iVar5,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                       );
                    if (((__this == (InfoAnimation_o *)0x0) ||
                        (pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) ||
                       (__this = (InfoAnimation_o *)
                                 System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar7,
                                            *(int32_t *)((long)&(__this->fields).EADAGMIKLJN + 4),
                                            Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                           ), pCVar4 == (Vector3f_o *)0x0)) goto LAB_03115b54;
                    Vector3f__FOOHBJNHOKK(pCVar4,(Vector3f_o *)__this,(MethodInfo *)0x0);
                    pMVar2 = KeyFrames__HBMICHOLLMF(PJMJIGJAKHG,DPJIDNBJIBG,(MethodInfo *)0x0);
                    __this = (InfoAnimation_o *)0x0;
                    if (pMVar2 == (KeyFrames_MJFFMMHJCNB_o *)0x0) goto LAB_03115b54;
                    pSVar7 = (pMVar2->fields).KOANCCDDBDA;
                    __this = (InfoAnimation_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)BODACGEEGLE,
                                        iVar5,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                       );
                    if (((__this == (InfoAnimation_o *)0x0) ||
                        (pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) ||
                       (pCVar4 = (Vector3f_o *)
                                 System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar7,
                                            *(int32_t *)((long)&(__this->fields).EADAGMIKLJN + 4),
                                            Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                           ), __this = (InfoAnimation_o *)0x0,
                       pCVar4 == (Vector3f_o *)0x0)) goto LAB_03115b54;
                    Vector3f__FOOHBJNHOKK(pCVar4,__this_00,(MethodInfo *)0x0);
                  }
                }
                iVar6 = (BODACGEEGLE->fields)._size;
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar6);
              iVar5 = (PJMJIGJAKHG->fields).MONBPDGKCOM;
            }
            DPJIDNBJIBG = DPJIDNBJIBG + 1;
          } while (DPJIDNBJIBG < iVar5);
        }
      }
    }
                    /* try { // try from 03115b4c to 03215b4f has its CatchHandler @ 03115c48 */
                    /* try { // try from 03115b50 to 03215b53 has its CatchHandler @ 03115c50 */
    return;
  }
LAB_03115b54:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03115b54 to 03215b6f has its CatchHandler @ 03115c58 */
  FUN_01bab8c8(__this);
}


// ===== private void MAOJJLKMHIF(InfoAnimation.ECNMNALHFIF FNCBHLEKPMI)  [RVA 0x3015B58]
// InfoAnimation$$MAOJJLKMHIF @ RVA 0x3015B58

void InfoAnimation__MAOJJLKMHIF
               (InfoAnimation_o *__this,InfoAnimation_ECNMNALHFIF_o *FNCBHLEKPMI,MethodInfo *method)

{
  UnityEngine_Vector3_array_array **ppUVar1;
  int32_t iVar2;
  UnityEngine_Vector3_array_array *pUVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar4;
  
                    /* try { // try from 03115b70 to 03215b73 has its CatchHandler @ 03115c4c */
  if ((DAT_04565bd0 & 1) == 0) {
                    /* try { // try from 03115b74 to 03215b8f has its CatchHandler @ 03115c54 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_7505/*"InfoAnimation::LoadDataFromContainerStruct: nulls arrived"*/);
                    /* try { // try from 03115b90 to 03215c6f has its CatchHandler @ 03115a84 */
    DAT_04565bd0 = 1;
  }
  if ((FNCBHLEKPMI != (InfoAnimation_ECNMNALHFIF_o *)0x0) &&
     (pUVar3 = (FNCBHLEKPMI->fields).EGDMNJBHAPF, pUVar3 != (UnityEngine_Vector3_array_array *)0x0))
  {
    ppUVar1 = &(__this->fields).MMENPDNBNHN;
    (__this->fields).MMENPDNBNHN = pUVar3;
    thunk_FUN_01c20e04(ppUVar1);
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
    if (iVar2 == 0) {
      pUVar3 = *ppUVar1;
      if (pUVar3 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((int)pUVar3->max_length + -1,(MethodInfo *)0x0);
      (__this->fields).IPAGCJKIPEN.fields = CVar4;
    }
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_7505/*"InfoAnimation::LoadDataFromContainerStruct: nulls arrived"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void JNBPPHIFBMC(bool CJNHFNHJHPE)  [RVA 0x3015C20]
// InfoAnimation$$JNBPPHIFBMC @ RVA 0x3015C20

void InfoAnimation__JNBPPHIFBMC(InfoAnimation_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  (__this->fields).GFPACGPFOPI.fields = CVar1;
  return;
}


// ===== public Vector3[][] FLNJCEOPBIG()  [RVA 0x3015C48]
// InfoAnimation$$FLNJCEOPBIG @ RVA 0x3015C48

UnityEngine_Vector3_array_array * InfoAnimation__FLNJCEOPBIG(InfoAnimation_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b4c with catch @ 03115c48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b70 with catch @ 03115c4c
                        */
  return (__this->fields).MMENPDNBNHN;
}


// ===== public void GIENGNEGHPJ()  [RVA 0x3015C50]
// InfoAnimation$$GIENGNEGHPJ @ RVA 0x3015C50

void InfoAnimation__GIENGNEGHPJ(InfoAnimation_o *__this,MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  MethodInfo *method_00;
  UnityEngine_Vector3_array_array *pUVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b50 with catch @ 03115c50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b74 with catch @ 03115c54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03115b54 with catch @ 03115c58
                        */
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if (pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    InfoAnimation_HJPFANEPGJF__CLCPHDKKDPM(pEVar1,method);
    pEVar1 = (__this->fields).DMGLMCBIAGL;
    if (pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
      InfoAnimation_HJPFANEPGJF__ELCEMOBLANG(pEVar1,method_00);
                    /* try { // try from 03115c70 to 03215c87 has its CatchHandler @ 03115d20 */
      pUVar2 = (__this->fields).MMENPDNBNHN;
      if ((pUVar2 != (UnityEngine_Vector3_array_array *)0x0) && (pUVar2->max_length != 0)) {
        if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
                    /* try { // try from 03115c88 to 03215d0f has its CatchHandler @ 03115a84 */
        if (pUVar2->m_Items[0] == (UnityEngine_Vector3_array *)0x0) goto LAB_03115ca4;
        CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((int32_t)pUVar2->m_Items[0]->max_length,(MethodInfo *)0x0);
        (__this->fields).KBEGPIFNNNN.fields = CVar3;
      }
      return;
    }
  }
LAB_03115ca4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int KENKLMPMHCO()  [RVA 0x3015DE8]
// InfoAnimation$$KENKLMPMHCO @ RVA 0x3015DE8

int32_t InfoAnimation__KENKLMPMHCO(InfoAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04565bd1 & 1) == 0) {
    FUN_01bab630(&AiData_TypeInfo);
    DAT_04565bd1 = 1;
    method = extraout_x1;
  }
  if ((AiData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AiData_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565c82 == '\0') {
    FUN_01bab630(&AiData_TypeInfo);
    DAT_04565c82 = '\x01';
    method = extraout_x1_01;
  }
  if ((AiData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AiData_TypeInfo,method);
  }
  iVar1 = InfoAnimation__COFDJFNCJDM(__this,AiData_TypeInfo->static_fields->PLIHHKCKDAI,in_x2);
  return iVar1;
}


// ===== public InfoAnimation IGNHJMDLAKB()  [RVA 0x3015E78]
// InfoAnimation$$IGNHJMDLAKB @ RVA 0x3015E78

InfoAnimation_o * InfoAnimation__IGNHJMDLAKB(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).CPCDDBKNDAC;
}


// ===== public int MJEOOGNPEFO(int PAIECLCNOBO)  [RVA 0x30151C0]
// InfoAnimation$$MJEOOGNPEFO @ RVA 0x30151C0

int32_t InfoAnimation__MJEOOGNPEFO(InfoAnimation_o *__this,int32_t PAIECLCNOBO,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
  iVar1 = 0;
  if (iVar3 + 1 != 0) {
    iVar1 = (PAIECLCNOBO + -1) / (iVar3 + 1);
  }
  return iVar2 + iVar1 + -1;
}


// ===== public List<List<MGNDHCBAPEN<GroupTables[], string>>> JAEKFDOJKGP()  [RVA 0x3015E80]
// InfoAnimation$$JAEKFDOJKGP @ RVA 0x3015E80

System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *
InfoAnimation__JAEKFDOJKGP(InfoAnimation_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *pSVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___array *pSVar4;
  InfoAnimation_Fields *pEVar5;
  int iVar6;
  
  if ((DAT_04565bd2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<GroupTables[],_string>>>_Add__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<GroupTables[],_string>>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<GroupTables[],_string>>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<List<MGNDHCBAPEN<GroupTables[],_string>>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<GroupTables[],_string>>_TypeInfo);
    DAT_04565bd2 = 1;
    method = extraout_x1;
  }
  pEVar5 = &__this->fields;
  pSVar3 = pEVar5->EADAGMIKLJN;
  if (pSVar3 == (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)0x0)
  {
    pSVar3 = (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<List<MGNDHCBAPEN<GroupTables[],_string>>>_TypeInfo
                                ,method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<List<MGNDHCBAPEN<GroupTables[],_string>>>__ctor__
              );
    pEVar5->EADAGMIKLJN = pSVar3;
    thunk_FUN_01c20e04(pEVar5,pSVar3);
    iVar6 = 3;
    do {
      pSVar3 = pEVar5->EADAGMIKLJN;
      __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<MGNDHCBAPEN<GroupTables[],_string>>_TypeInfo
                                    );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<GroupTables[],_string>>__ctor__)
      ;
      lVar2 = Method_System_Collections_Generic_List<List<MGNDHCBAPEN<GroupTables[],_string>>>_Add__
      ;
      if (pSVar3 == (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)
                    0x0) {
LAB_03115fd4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___array *)0x0
         ) goto LAB_03115fd4;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pSVar3 = pEVar5->EADAGMIKLJN;
  }
  return pSVar3;
}


// ===== public int LMKFAMDMPJG(int PKDBOMAHGHC)  [RVA 0x301581C]
// InfoAnimation$$LMKFAMDMPJG @ RVA 0x301581C

int32_t InfoAnimation__LMKFAMDMPJG(InfoAnimation_o *__this,int32_t PKDBOMAHGHC,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
                    /* try { // try from 03115830 to 03215833 has its CatchHandler @ 0311593c */
                    /* try { // try from 03115834 to 03215837 has its CatchHandler @ 03115930 */
                    /* try { // try from 03115838 to 0321583b has its CatchHandler @ 0311592c */
                    /* try { // try from 0311583c to 0321584b has its CatchHandler @ 03115110 */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
                    /* try { // try from 0311584c to 03215857 has its CatchHandler @ 03115920 */
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
                    /* try { // try from 03115864 to 0321586b has its CatchHandler @ 0311591c */
                    /* try { // try from 03115870 to 0321588f has its CatchHandler @ 03115918 */
  return (iVar2 + 1) * ((PKDBOMAHGHC - iVar1) + 1) + 1;
}


// ===== public bool NHELADLJDNP(string NFHDILMBKLK)  [RVA 0x301509C]
// InfoAnimation$$NHELADLJDNP @ RVA 0x301509C

bool InfoAnimation__NHELADLJDNP(InfoAnimation_o *__this,System_String_o *NFHDILMBKLK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *a;
  int index;
  
  if ((DAT_04565bd3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04565bd3 = 1;
  }
  __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_03115128:
        return index < iVar1;
      }
      a = (System_String_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 03115110 to 032154eb has its CatchHandler @ 03115110
                       catch() { ... } // from try @ 03115110 with catch @ 03115110
                       catch() { ... } // from try @ 031155a4 with catch @ 03115110
                       catch() { ... } // from try @ 031157c0 with catch @ 03115110
                       catch() { ... } // from try @ 0311583c with catch @ 03115110
                       catch() { ... } // from try @ 031158e0 with catch @ 03115110
                       catch() { ... } // from try @ 03115960 with catch @ 03115110
                       catch() { ... } // from try @ 031159b0 with catch @ 03115110
                       catch() { ... } // from try @ 031159cc with catch @ 03115110
                       catch() { ... } // from try @ 03115a0c with catch @ 03115110 */
      bVar2 = System_String__op_Equality(a,NFHDILMBKLK,(MethodInfo *)0x0);
      if (bVar2) goto LAB_03115128;
      __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HIEPPOOBIDI(DistancePoint CJNHFNHJHPE)  [RVA 0x3015FD8]
// InfoAnimation$$HIEPPOOBIDI @ RVA 0x3015FD8

void InfoAnimation__HIEPPOOBIDI(InfoAnimation_o *__this,DistancePoint_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JCKNGNJBIIF = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).JCKNGNJBIIF);
  return;
}


// ===== public StageType.HEJHMMBJODB NLIDLJKLADH()  [RVA 0x3015FE8]
// InfoAnimation$$NLIDLJKLADH @ RVA 0x3015FE8

int32_t InfoAnimation__NLIDLJKLADH(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).NECLMKFFDCO;
}


// ===== public void NOLHPHMIBGC(List<ConditionAnimation> CJNHFNHJHPE)  [RVA 0x3015FF0]
// InfoAnimation$$NOLHPHMIBGC @ RVA 0x3015FF0

void InfoAnimation__NOLHPHMIBGC
               (InfoAnimation_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565bd4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_AddRange__);
    DAT_04565bd4 = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).ENCCFIFCDGL,
     __this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<ConditionAnimation>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AAODMPEOBPJ(StageType.HEJHMMBJODB CJNHFNHJHPE)  [RVA 0x3016050]
// InfoAnimation$$AAODMPEOBPJ @ RVA 0x3016050

void InfoAnimation__AAODMPEOBPJ(InfoAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NECLMKFFDCO = CJNHFNHJHPE;
  return;
}


// ===== public bool PCPBHJGAOOH(NJPBHDMCLIN AHEFOIOKDOK, List<ConditionAnimation> PBCGCHIKCOE, EventAnimation FKDOMEBPFPF)  [RVA 0x3016058]
// InfoAnimation$$PCPBHJGAOOH @ RVA 0x3016058

bool InfoAnimation__PCPBHJGAOOH
               (InfoAnimation_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               EventAnimation_o *FKDOMEBPFPF,MethodInfo *method)

{
  bool bVar1;
  EventAnimation_o **ppKVar2;
  ulong uVar3;
  InfoAnimation_HJPFANEPGJF_o *pEVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565bd5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    DAT_04565bd5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    pEVar4 = (__this->fields).DMGLMCBIAGL;
    if (pEVar4 == (InfoAnimation_HJPFANEPGJF_o *)0x0) goto LAB_03116194;
    PBCGCHIKCOE = (pEVar4->fields).KPFGHBEKJIM;
  }
  if (FKDOMEBPFPF != (EventAnimation_o *)0x0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03116194;
    ppKVar2 = &(AHEFOIOKDOK->fields).FKBLDBLGMIH;
    *ppKVar2 = FKDOMEBPFPF;
    thunk_FUN_01c20e04(ppKVar2,FKDOMEBPFPF);
    (FKDOMEBPFPF->fields).KPFGHBEKJIM = AHEFOIOKDOK;
    thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,AHEFOIOKDOK);
  }
  if (PBCGCHIKCOE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
               Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
      if (!bVar1) {
        iVar5 = 8;
        goto LAB_03116168;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar3 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,AHEFOIOKDOK,
                         (local_48.fields._current)->klass->vtable[4].method);
    } while ((uVar3 & 1) != 0);
    iVar5 = 7;
LAB_03116168:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
    return iVar5 != 7;
  }
LAB_03116194:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private InfoAnimation.ECNMNALHFIF GDMIJMOJIFH()  [RVA 0x301620C]
// InfoAnimation$$GDMIJMOJIFH @ RVA 0x301620C

InfoAnimation_ECNMNALHFIF_o * InfoAnimation__GDMIJMOJIFH(InfoAnimation_o *__this,MethodInfo *method)

{
  System_Func_TSource__bool__o *predicate;
  InfoAnimation_ECNMNALHFIF_o *pEVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *source;
  
  if ((DAT_04565bd6 & 1) == 0) {
    FUN_01bab630(&Method_ECENNHNBAME_KBMDCIELHKG__);
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<InfoAnimation_ECNMNALHFIF>__);
    FUN_01bab630(&System_Func<InfoAnimation_ECNMNALHFIF,_bool>_TypeInfo);
    DAT_04565bd6 = 1;
    method = extraout_x1;
  }
  if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InfoAnimation_TypeInfo,method);
  }
  source = InfoAnimation_TypeInfo->static_fields->PHNBIJIOHJO;
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<InfoAnimation_ECNMNALHFIF,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  pEVar1 = (InfoAnimation_ECNMNALHFIF_o *)
           System_Linq_Enumerable__FirstOrDefault<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                      Method_System_Linq_Enumerable_FirstOrDefault<InfoAnimation_ECNMNALHFIF>__);
  return pEVar1;
}


// ===== public void NPBOBIHOOBN(bool CJNHFNHJHPE)  [RVA 0x30162D4]
// InfoAnimation$$NPBOBIHOOBN @ RVA 0x30162D4

void InfoAnimation__NPBOBIHOOBN(InfoAnimation_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BNLDAAPGEHO = CJNHFNHJHPE;
  return;
}


// ===== public bool MIKAOEFOCHO(List<string> FPEHEJBLCAO, int PKDBOMAHGHC, bool MKFHNCKMNDJ)  [RVA 0x30162E0]
// InfoAnimation$$MIKAOEFOCHO @ RVA 0x30162E0

/* WARNING: Removing unreachable block (ram,0x031164a0) */
/* WARNING: Removing unreachable block (ram,0x03116624) */

bool InfoAnimation__MIKAOEFOCHO
               (InfoAnimation_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               int32_t PKDBOMAHGHC,bool MKFHNCKMNDJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o *pSVar7;
  InfoAnimation_HJPFANEPGJF_o *pEVar8;
  undefined8 *puVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565bd7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565bd7 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (MKFHNCKMNDJ) {
    if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
LAB_0311662c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_70.fields._index = local_a8.fields._index;
    local_70.fields._version = local_a8.fields._version;
    local_70.fields._list = local_a8.fields._list;
    local_70.fields._current = local_a8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      pIVar2 = local_70.fields._current;
      if (!bVar3) {
        puVar9 = &Method_System_Collections_Generic_List_Enumerator<string>_Dispose__;
        pSVar7 = &local_70;
        goto LAB_031165b0;
      }
      pEVar8 = (__this->fields).DMGLMCBIAGL;
      if (pEVar8 == (InfoAnimation_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (pEVar8->fields).GLFJDDHEMNO;
      if (pSVar6 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__
                          );
        pIVar1 = local_90.fields._current;
        if (!bVar3) break;
        if ((System_String_o *)local_90.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_String__op_Equality
                          (((System_String_o *)((long)local_90.fields._current + 0x48))->monitor,
                           (System_String_o *)pIVar2,(MethodInfo *)0x0);
      } while (((!bVar4) ||
               (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                    ((long)pIVar1 + 0x30),(MethodInfo *)0x0), PKDBOMAHGHC < iVar5))
              || (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                      &((System_String_o *)((long)pIVar1 + 0x30))->fields,
                                     (MethodInfo *)0x0), iVar5 < PKDBOMAHGHC));
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__)
      ;
    } while (bVar3);
    puVar9 = &Method_System_Collections_Generic_List_Enumerator<string>_Dispose__;
    pSVar7 = &local_70;
LAB_031165cc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (pSVar7,(MethodInfo_23F71B0 *)*puVar9);
                    /* try { // try from 031165d4 to 032165e3 has its CatchHandler @ 031165e4 */
    bVar3 = false;
  }
  else {
    pEVar8 = (__this->fields).DMGLMCBIAGL;
    if ((pEVar8 == (InfoAnimation_HJPFANEPGJF_o *)0x0) ||
       (pSVar6 = (pEVar8->fields).GLFJDDHEMNO,
       pSVar6 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) goto LAB_0311662c;
                    /* try { // try from 031164f8 to 0321651f has its CatchHandler @ 0311655c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
                    /* try { // try from 03116534 to 03216543 has its CatchHandler @ 03116558 */
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
      pIVar2 = local_90.fields._current;
      if (!bVar3) {
        puVar9 = &Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__;
        pSVar7 = &local_90;
        goto LAB_031165cc;
      }
      if ((System_String_o *)local_90.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03116544 to 03216573 has its CatchHandler @ 031164a8 */
      if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
                         ((System_String_o *)((long)local_90.fields._current + 0x48))->monitor,
                         Method_System_Collections_Generic_List<string>_Contains__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03116534 with catch @ 03116558
                        */
    } while (((!bVar3) ||
             (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                  ((long)pIVar2 + 0x30),(MethodInfo *)0x0), PKDBOMAHGHC < iVar5
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031164f8 with catch @ 0311655c
                        */)) ||
            (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                 &((System_String_o *)((long)pIVar2 + 0x30))->fields,
                                (MethodInfo *)0x0), iVar5 < PKDBOMAHGHC
                    /* try { // try from 03116574 to 0321658b has its CatchHandler @ 031165e4 */));
    puVar9 = &Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__;
                    /* try { // try from 0311658c to 032165d3 has its CatchHandler @ 031164a8 */
    pSVar7 = &local_90;
LAB_031165b0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (pSVar7,(MethodInfo_23F71B0 *)*puVar9);
    bVar3 = true;
  }
                    /* catch() { ... } // from try @ 03116574 with catch @ 031165e4
                       catch() { ... } // from try @ 031165d4 with catch @ 031165e4 */
                    /* try { // try from 031165e8 to 032165eb has its CatchHandler @ 031165f4 */
                    /* try { // try from 031165ec to 032165f7 has its CatchHandler @ 031164a8 */
  return bVar3;
}


// ===== public bool FIDJFEGCIIL()  [RVA 0x3016740]
// InfoAnimation$$FIDJFEGCIIL @ RVA 0x3016740

bool InfoAnimation__FIDJFEGCIIL(InfoAnimation_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).GFPACGPFOPI.fields,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void HGEHELKLLND(List<EventAnimation> CJNHFNHJHPE)  [RVA 0x3016754]
// InfoAnimation$$HGEHELKLLND @ RVA 0x3016754

void InfoAnimation__HGEHELKLLND
               (InfoAnimation_o *__this,System_Collections_Generic_List_KJFPGDFNFCL__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565bd8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EventAnimation>_AddRange__);
    DAT_04565bd8 = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).AFFIHBMACFF,
     __this_00 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<EventAnimation>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JBICKKIBGDI()  [RVA 0x30167B4]
// InfoAnimation$$JBICKKIBGDI @ RVA 0x30167B4

void InfoAnimation__JBICKKIBGDI(InfoAnimation_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  DistancePoint_o *pPVar4;
  MethodInfo *in_x2;
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565bd9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_get_Current__);
    FUN_01bab630(&ActionEffect_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
    DAT_04565bd9 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if (pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    InfoAnimation__POFILAAGAAP(__this,(pEVar5->fields).KPFGHBEKJIM,in_x2);
    pEVar5 = (__this->fields).DMGLMCBIAGL;
    if (pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
      InfoAnimation__POFILAAGAAP(__this,(pEVar5->fields).ENCCFIFCDGL,in_x2);
      pEVar5 = (__this->fields).DMGLMCBIAGL;
      if ((pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
         (__this_01 = (pEVar5->fields).NEIJJHEFLHP,
         __this_01 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__
                            );
          __this_00 = local_50.fields._current;
          if (!bVar2) break;
          if ((ActionEffect_o *)local_50.fields._current == (ActionEffect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = ActionAnimation__NHGGBEACKBD
                            ((ActionAnimation_o *)local_50.fields._current,(MethodInfo *)0x0);
          if (iVar3 == 5) {
            bVar1 = (ActionEffect_TypeInfo->_2).naturalAligment;
            if (((((ActionEffect_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((ActionEffect_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)ActionEffect_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(__this_00);
            }
            ActionEffect__HCIAPDHGJKA((ActionEffect_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
        pEVar5 = (__this->fields).DMGLMCBIAGL;
        if (((pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
            (pEVar6 = (pEVar5->fields).GCIHJDANIJJ,
            pEVar6 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0)) &&
           (pPVar4 = (pEVar6->fields).DBNCGNGNGNM, pPVar4 != (DistancePoint_o *)0x0)) {
          DistancePoint__NODBBDLAIHD(pPVar4,(MethodInfo *)0x0);
          pEVar5 = (__this->fields).DMGLMCBIAGL;
          if (((pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
              (pEVar6 = (pEVar5->fields).GCIHJDANIJJ,
              pEVar6 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0)) &&
             (pPVar4 = (pEVar6->fields).OCNJNIOMPMJ, pPVar4 != (DistancePoint_o *)0x0)) {
            DistancePoint__NODBBDLAIHD(pPVar4,(MethodInfo *)0x0);
            pPVar4 = (__this->fields).JCKNGNJBIIF;
            if (pPVar4 != (DistancePoint_o *)0x0) {
              DistancePoint__NODBBDLAIHD(pPVar4,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3[] GPCDFCAEPKK()  [RVA 0x3016D30]
// InfoAnimation$$GPCDFCAEPKK @ RVA 0x3016D30

UnityEngine_Vector3_array * InfoAnimation__GPCDFCAEPKK(InfoAnimation_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_array_array *pUVar2;
  
  pUVar2 = (__this->fields).MMENPDNBNHN;
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (uVar1 < (uint)pUVar2->max_length) {
    return pUVar2->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void AKNCABCJLII(ModelObject NCNGALIAHJL, bool FOFCAILEKJD, bool BHKCLMLKLNB, ModelObject CHBJNMMEAPG)  [RVA 0x3016D70]
// InfoAnimation$$AKNCABCJLII @ RVA 0x3016D70

void InfoAnimation__AKNCABCJLII
               (InfoAnimation_o *__this,ModelObject_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               ModelObject_o *CHBJNMMEAPG,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar4;
  ModelNode_o *IIBPJLKGEBP;
  DistancePoint_o *pPVar5;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  MethodInfo *in_x7;
  InfoAnimation_HJPFANEPGJF_o *pEVar6;
  InfoAnimation_KFMLLPPCPHI_o *pEVar7;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565bda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_get_Current__);
    FUN_01bab630(&ActionEffect_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04565bda = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar6 == (InfoAnimation_HJPFANEPGJF_o *)0x0) ||
     (pEVar7 = (pEVar6->fields).EJNDOMGCGFL, pEVar7 == (InfoAnimation_KFMLLPPCPHI_o *)0x0))
  goto LAB_0311708c;
  iVar3 = (pEVar7->fields).HHLJNICBMDA;
  if (iVar3 < 0) {
LAB_03116e7c:
    IIBPJLKGEBP = (ModelNode_o *)0x0;
  }
  else {
    if ((NCNGALIAHJL == (ModelObject_o *)0x0) ||
       (pSVar4 = ModelObject__INDHJCEIEAE(NCNGALIAHJL,(MethodInfo *)0x0),
       pSVar4 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0311708c;
    if ((pSVar4->fields)._size <= iVar3) goto LAB_03116e7c;
    pSVar4 = ModelObject__INDHJCEIEAE(NCNGALIAHJL,(MethodInfo *)0x0);
    if (pSVar4 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) goto LAB_0311708c;
    IIBPJLKGEBP = (ModelNode_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,iVar3,
                             Method_System_Collections_Generic_List<ModelNode>_get_Item__);
  }
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if (pEVar6 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    InfoAnimation__CEACPADMPKJ
              (__this,(pEVar6->fields).KPFGHBEKJIM,NCNGALIAHJL,FOFCAILEKJD,BHKCLMLKLNB,CHBJNMMEAPG,
               IIBPJLKGEBP,in_x7);
    pEVar6 = (__this->fields).DMGLMCBIAGL;
    if ((pEVar6 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
       (AHEFOIOKDOK = (pEVar6->fields).ENCCFIFCDGL,
       AHEFOIOKDOK != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
      if (0 < (AHEFOIOKDOK->fields)._size) {
        InfoAnimation__CEACPADMPKJ
                  (__this,AHEFOIOKDOK,NCNGALIAHJL,FOFCAILEKJD,BHKCLMLKLNB,CHBJNMMEAPG,IIBPJLKGEBP,
                   in_x7);
        pEVar6 = (__this->fields).DMGLMCBIAGL;
        if (pEVar6 == (InfoAnimation_HJPFANEPGJF_o *)0x0) goto LAB_0311708c;
      }
      pEVar8 = (pEVar6->fields).GCIHJDANIJJ;
      if ((pEVar8 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
         (pPVar5 = (pEVar8->fields).DBNCGNGNGNM, pPVar5 != (DistancePoint_o *)0x0)) {
        DistancePoint__KEAKEIPABPP
                  (pPVar5,NCNGALIAHJL,FOFCAILEKJD,(ModelNode_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                   (MethodInfo *)0x0);
        pEVar6 = (__this->fields).DMGLMCBIAGL;
        if ((pEVar6 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
           ((pEVar8 = (pEVar6->fields).GCIHJDANIJJ,
            pEVar8 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0 &&
            (pPVar5 = (pEVar8->fields).OCNJNIOMPMJ, pPVar5 != (DistancePoint_o *)0x0)))) {
          DistancePoint__KEAKEIPABPP
                    (pPVar5,NCNGALIAHJL,FOFCAILEKJD,(ModelNode_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                     (MethodInfo *)0x0);
          local_90.fakeValueActive = (__this->fields).ECEGJGAAOHH.fields.fakeValueActive;
          local_90.inited = (__this->fields).ECEGJGAAOHH.fields.inited;
          local_90._18_2_ = *(undefined2 *)&(__this->fields).ECEGJGAAOHH.fields.field_0x12;
          local_90.hiddenValueOldByte4.fields =
               (__this->fields).ECEGJGAAOHH.fields.hiddenValueOldByte4.fields;
          local_90.fakeValue = (__this->fields).ECEGJGAAOHH.fields.fakeValue;
          local_90.currentCryptoKey = (__this->fields).ECEGJGAAOHH.fields.currentCryptoKey;
          local_90.hiddenValue = (__this->fields).ECEGJGAAOHH.fields.hiddenValue;
          fVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                             (MethodInfo *)0x0);
          if (fVar9 != 0.0) {
            pPVar5 = (__this->fields).JCKNGNJBIIF;
            if (pPVar5 == (DistancePoint_o *)0x0) goto LAB_0311708c;
            DistancePoint__KEAKEIPABPP
                      (pPVar5,NCNGALIAHJL,FOFCAILEKJD,(ModelNode_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                       (MethodInfo *)0x0);
          }
          pEVar6 = (__this->fields).DMGLMCBIAGL;
          if ((pEVar6 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
             (__this_01 = (pEVar6->fields).NEIJJHEFLHP,
             __this_01 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                       Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
            local_70.fields._index = local_a8.fields._index;
            local_70.fields._version = local_a8.fields._version;
            local_70.fields._list = local_a8.fields._list;
            local_70.fields._current = local_a8.fields._current;
            while( true ) {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__
                                );
              __this_00 = local_70.fields._current;
              if (!bVar2) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__)
                ;
                return;
              }
              if ((ActionEffect_o *)local_70.fields._current == (ActionEffect_o *)0x0) break;
              iVar3 = ActionAnimation__NHGGBEACKBD
                                ((ActionAnimation_o *)local_70.fields._current,(MethodInfo *)0x0);
              if (iVar3 == 5) {
                bVar1 = (ActionEffect_TypeInfo->_2).naturalAligment;
                if (((((ActionEffect_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
                   ((((ActionEffect_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)ActionEffect_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(__this_00);
                }
                ActionEffect__KHKLLNFCMME
                          ((ActionEffect_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,(ModelNode_o *)0x0,
                           BHKCLMLKLNB,CHBJNMMEAPG,(MethodInfo *)0x0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
LAB_0311708c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GCBPPDIFHHO(bool CJNHFNHJHPE)  [RVA 0x30174A4]
// InfoAnimation$$GCBPPDIFHHO @ RVA 0x30174A4

void InfoAnimation__GCBPPDIFHHO(InfoAnimation_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  (__this->fields).PLCFKFFINMM.fields = CVar1;
  return;
}


// ===== public string HEDBAJDHFAC()  [RVA 0x30174C8]
// InfoAnimation$$HEDBAJDHFAC @ RVA 0x30174C8

System_String_o * InfoAnimation__HEDBAJDHFAC(InfoAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  InfoAnimation_KFMLLPPCPHI_o *pEVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_04565bdb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_19752/*"moveInside is null"*/);
    DAT_04565bdb = 1;
    method = extraout_x1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if (pEVar1 == (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_19752/*"moveInside is null"*/,(MethodInfo *)0x0);
    ppSVar3 = &string_TypeInfo->static_fields->Empty;
  }
  else {
    pEVar2 = (pEVar1->fields).EJNDOMGCGFL;
    if (pEVar2 == (InfoAnimation_KFMLLPPCPHI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppSVar3 = &(pEVar2->fields).OBBONHJFLBG;
  }
  return *ppSVar3;
}


// ===== public void .ctor()  [RVA 0x3017574]
// InfoAnimation$$.ctor @ RVA 0x3017574

void InfoAnimation___ctor(InfoAnimation_o *__this,MethodInfo *method)

{
  ModelShiftTable_o *__this_00;
  ModelShiftTable_o **ppKVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_string__o **ppSVar3;
  InfoAnimation_MNDFKOHIAHI_o *__this_01;
  InfoAnimation_DNGAEDAAIJE_o *__this_02;
  MethodInfo *extraout_x1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar4;
  InfoAnimation_KFMLLPPCPHI_o *pEVar5;
  InfoAnimation_HJPFANEPGJF_o **ppEVar6;
  InfoAnimation_HJPFANEPGJF_o *pEVar7;
  InfoAnimation_KFMLLPPCPHI_o **ppEVar8;
  undefined1 auVar9 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_88;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  
  if ((DAT_04565bdc & 1) == 0) {
    FUN_01bab630(&InfoAnimation_DNGAEDAAIJE_TypeInfo);
    FUN_01bab630(&InfoAnimation_HJPFANEPGJF_TypeInfo);
    FUN_01bab630(&InfoAnimation_KFMLLPPCPHI_TypeInfo);
    FUN_01bab630(&ModelShiftTable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&InfoAnimation_MNDFKOHIAHI_TypeInfo);
    DAT_04565bdc = 1;
    method = extraout_x1;
  }
  __this_00 = (ModelShiftTable_o *)thunk_FUN_01bda818(ModelShiftTable_TypeInfo,method);
  ModelShiftTable___ctor(__this_00,(MethodInfo *)0x0);
  ppKVar1 = &(__this->fields).BEHFDAIGOAJ;
  *ppKVar1 = __this_00;
  thunk_FUN_01c20e04(ppKVar1,__this_00);
  pSVar2 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar3 = &(__this->fields).GMNNFJNKIAN;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  auVar9 = thunk_FUN_01bda818(InfoAnimation_MNDFKOHIAHI_TypeInfo);
  __this_01 = auVar9._0_8_;
  InfoAnimation_MNDFKOHIAHI___ctor(__this_01,auVar9._8_8_);
  (__this->fields).FGEAOBODDAP = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).FGEAOBODDAP,__this_01);
  auVar9 = thunk_FUN_01bda818(InfoAnimation_DNGAEDAAIJE_TypeInfo);
  __this_02 = auVar9._0_8_;
  InfoAnimation_DNGAEDAAIJE___ctor(__this_02,auVar9._8_8_);
  (__this->fields).ANMFJDOLEKO = __this_02;
  thunk_FUN_01c20e04(&(__this->fields).ANMFJDOLEKO,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields)._AHFPJJKEANI_k__BackingField = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields)._AHFPJJKEANI_k__BackingField,pSVar2);
  (__this->fields).BGHFADDGPAD = 0;
  CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).FECCBIOBKAF.fields = CVar10;
  CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EAFPDFHFBOM.fields = CVar10;
  (__this->fields).IGLHCNLNIPK = 0;
  CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).LCLBPCMKHPM.fields = CVar10;
  CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).IPAGCJKIPEN.fields = CVar10;
  (__this->fields).BFMPHOCJIHP = false;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).HLDOANABODA.fields = CVar11;
  (__this->fields).HEFBBDINLMN = false;
  (__this->fields).DKGPOGCGINF = true;
  (__this->fields).CPCDDBKNDAC = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).CPCDDBKNDAC,0);
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).PLCFKFFINMM.fields = CVar11;
  (__this->fields).NECLMKFFDCO = 0;
  (__this->fields).BNLDAAPGEHO = false;
  auVar9 = thunk_FUN_01bda818(InfoAnimation_HJPFANEPGJF_TypeInfo);
  pEVar7 = auVar9._0_8_;
  InfoAnimation_HJPFANEPGJF___ctor(pEVar7,auVar9._8_8_);
  ppEVar6 = &(__this->fields).DMGLMCBIAGL;
  *ppEVar6 = pEVar7;
  thunk_FUN_01c20e04(ppEVar6,pEVar7);
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).OEGKFPBBLEP.fields = CVar11;
  CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).KBEGPIFNNNN.fields = CVar10;
  (__this->fields).MMENPDNBNHN = (UnityEngine_Vector3_array_array *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).MMENPDNBNHN,0);
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).GFPACGPFOPI.fields = CVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_88,0.0,(MethodInfo *)0x0);
  local_70.fakeValueActive = local_88.fakeValueActive;
  local_70.inited = local_88.inited;
  local_70._18_2_ = local_88._18_2_;
  local_70.hiddenValueOldByte4.fields = local_88.hiddenValueOldByte4.fields;
  local_70.fakeValue = local_88.fakeValue;
  local_70.currentCryptoKey = local_88.currentCryptoKey;
  local_70.hiddenValue = local_88.hiddenValue;
  (__this->fields).ECEGJGAAOHH.fields.fakeValueActive = local_88.fakeValueActive;
  (__this->fields).ECEGJGAAOHH.fields.inited = local_88.inited;
  *(undefined2 *)&(__this->fields).ECEGJGAAOHH.fields.field_0x12 = local_88._18_2_;
  (__this->fields).ECEGJGAAOHH.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_88.hiddenValueOldByte4.fields;
  (__this->fields).ECEGJGAAOHH.fields.fakeValue = local_88.fakeValue;
  (__this->fields).ECEGJGAAOHH.fields.currentCryptoKey = local_88.currentCryptoKey;
  (__this->fields).ECEGJGAAOHH.fields.hiddenValue = local_88.hiddenValue;
  pEVar7 = *ppEVar6;
  auVar9 = thunk_FUN_01bda818(InfoAnimation_KFMLLPPCPHI_TypeInfo);
  pEVar5 = auVar9._0_8_;
  InfoAnimation_KFMLLPPCPHI___ctor(pEVar5,auVar9._8_8_);
  if (pEVar7 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    ppEVar8 = &(pEVar7->fields).EJNDOMGCGFL;
    *ppEVar8 = pEVar5;
    thunk_FUN_01c20e04(ppEVar8,pEVar5);
    pEVar7 = *ppEVar6;
    if ((pEVar7 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
       (pEVar5 = (pEVar7->fields).EJNDOMGCGFL, pEVar5 != (InfoAnimation_KFMLLPPCPHI_o *)0x0)) {
      (pEVar5->fields).OKONAOJIODE = false;
      (pEVar5->fields).HHLJNICBMDA = -1;
      pEVar4 = (pEVar7->fields).GCIHJDANIJJ;
      if (pEVar4 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) {
        (pEVar4->fields).OKONAOJIODE = false;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MADPEPAMMJD(InfoAnimation CJNHFNHJHPE)  [RVA 0x3017D08]
// InfoAnimation$$MADPEPAMMJD @ RVA 0x3017D08

void InfoAnimation__MADPEPAMMJD(InfoAnimation_o *__this,InfoAnimation_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04565bdd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_21499/*"this animation == tactic equivalent for {0}"*/);
    DAT_04565bdd = 1;
  }
  if (__this == CJNHFNHJHPE) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (__this->fields).JIJLBFGKNJK;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
      uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar2,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar3;
    thunk_FUN_01c20e04(args->m_Items,pSVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_21499/*"this animation == tactic equivalent for {0}"*/,args,(MethodInfo *)0x0);
  }
  (__this->fields).CPCDDBKNDAC = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).CPCDDBKNDAC,CJNHFNHJHPE);
  return;
}


// ===== private bool KBMDCIELHKG(InfoAnimation.ECNMNALHFIF FNCBHLEKPMI)  [RVA 0x3017E0C]
// InfoAnimation$$KBMDCIELHKG @ RVA 0x3017E0C

bool InfoAnimation__KBMDCIELHKG
               (InfoAnimation_o *__this,InfoAnimation_ECNMNALHFIF_o *FNCBHLEKPMI,MethodInfo *method)

{
  bool bVar1;
  
  if (FNCBHLEKPMI != (InfoAnimation_ECNMNALHFIF_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((__this->fields).KBCOHMPJELJ,(FNCBHLEKPMI->fields).KBCOHMPJELJ,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InfoAnimation.MNDFKOHIAHI JNBPBACNFAL()  [RVA 0x3017E2C]
// InfoAnimation$$JNBPBACNFAL @ RVA 0x3017E2C

InfoAnimation_MNDFKOHIAHI_o * InfoAnimation__JNBPBACNFAL(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).FGEAOBODDAP;
}


// ===== private void PLEKHOPFKNM(byte[] IMMNELPBGIF)  [RVA 0x3017E34]
// InfoAnimation$$PLEKHOPFKNM @ RVA 0x3017E34

/* WARNING: Removing unreachable block (ram,0x031180d8) */

void InfoAnimation__PLEKHOPFKNM
               (InfoAnimation_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  UnityEngine_Vector3_array_array **ppUVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int32_t iVar6;
  IOACNDPCIFK_o *__this_00;
  UnityEngine_Vector3_array_array *pUVar7;
  UnityEngine_Vector3_array *pUVar8;
  VirtualInvokeData *pVVar9;
  IOACNDPCIFK_c *pIVar10;
  int32_t *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  
  if ((DAT_04565bde & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&IOACNDPCIFK_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3_____TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565bde = 1;
  }
  __this_00 = (IOACNDPCIFK_o *)thunk_FUN_01bda818(IOACNDPCIFK_TypeInfo);
  IOACNDPCIFK___ctor(__this_00,IMMNELPBGIF,(MethodInfo *)0x0);
  if (__this_00 == (IOACNDPCIFK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = (*(__this_00->klass->vtable)._8_DOGNHIEBHJB.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._8_DOGNHIEBHJB.method);
  pUVar7 = (UnityEngine_Vector3_array_array *)
           FUN_01bab718(UnityEngine_Vector3_____TypeInfo,(ulong)uVar4);
  ppUVar1 = &(__this->fields).MMENPDNBNHN;
  (__this->fields).MMENPDNBNHN = pUVar7;
  thunk_FUN_01c20e04(ppUVar1);
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      (*(__this_00->klass->vtable)._6_DBEDJLMLPIF.methodPtr)
                (__this_00,(__this_00->klass->vtable)._6_DBEDJLMLPIF.method);
      uVar5 = (*(__this_00->klass->vtable)._8_DOGNHIEBHJB.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._8_DOGNHIEBHJB.method);
      pUVar7 = *ppUVar1;
      pUVar8 = (UnityEngine_Vector3_array *)
               FUN_01bab718(UnityEngine_Vector3___TypeInfo,(ulong)uVar5);
      if (pUVar7 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((uint)pUVar7->max_length <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pUVar7->m_Items[uVar12] = pUVar8;
      thunk_FUN_01c20e04();
      if (0 < (int)uVar5) {
        uVar13 = 0;
        lVar14 = 0x20;
        do {
          pUVar7 = *ppUVar1;
          if (pUVar7 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((uint)pUVar7->max_length <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pUVar8 = pUVar7->m_Items[uVar12];
          uVar15 = (*(__this_00->klass->vtable)._10_HHEEPMNEACO.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._10_HHEEPMNEACO.method);
          fVar16 = (float)(*(__this_00->klass->vtable)._10_HHEEPMNEACO.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._10_HHEEPMNEACO.method);
          uVar17 = (*(__this_00->klass->vtable)._10_HHEEPMNEACO.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._10_HHEEPMNEACO.method);
          if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((uint)pUVar8->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar13 = uVar13 + 1;
          puVar2 = (undefined4 *)((long)pUVar8->m_Items + lVar14 + -0x20);
          lVar14 = lVar14 + 0xc;
          *puVar2 = uVar15;
          puVar2[1] = -fVar16;
          puVar2[2] = uVar17;
        } while (uVar5 != uVar13);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
  if (iVar6 == 0) {
    CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(uVar4 - 1,(MethodInfo *)0x0)
    ;
    (__this->fields).IPAGCJKIPEN.fields = CVar18;
  }
  pIVar10 = __this_00->klass;
  uVar3._0_1_ = (pIVar10->_2).rank;
  uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
  uVar12 = (ulong)uVar3;
  if (uVar12 != 0) {
    piVar11 = &((pIVar10->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar9 = &(pIVar10->vtable)._0_Equals + *piVar11;
        goto LAB_0311808c;
      }
      uVar12 = uVar12 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_0311808c:
  (*pVVar9->methodPtr)(__this_00,pVVar9->method);
  return;
}


// ===== public int MBDJHMEEGGP(bool HNBNAEJAENO)  [RVA 0x30181C4]
// InfoAnimation$$MBDJHMEEGGP @ RVA 0x30181C4

int32_t InfoAnimation__MBDJHMEEGGP(InfoAnimation_o *__this,bool HNBNAEJAENO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  int iVar5;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  MethodInfo *method_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565bdf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_14411/*"Uninterrupt"*/);
    DAT_04565bdf = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar6 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar6->fields).GLFJDDHEMNO,
     __this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    iVar4 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
        method_00 = (MethodInfo *)0x0;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
        if (HNBNAEJAENO) {
          iVar3 = InfoAnimation__LMKFAMDMPJG(__this,iVar5 + 1,method_00);
          iVar5 = iVar3 + -1;
        }
        return iVar5;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality
                        (StringLiteral_14411/*"Uninterrupt"*/,(System_String_o *)local_60.fields._current[5].klass,
                         (MethodInfo *)0x0);
      if ((bVar2) &&
         (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                             (MethodInfo *)0x0), iVar4 < iVar3)) {
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                           (MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x30183AC]
// InfoAnimation$$ToString @ RVA 0x30183AC

System_String_o * InfoAnimation__ToString(InfoAnimation_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565be0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7504/*"InfoAnim: Name: "*/);
    DAT_04565be0 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_7504/*"InfoAnim: Name: "*/,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void CKNMFONCEBD(List<ModelConditions> CJNHFNHJHPE)  [RVA 0x30183F8]
// InfoAnimation$$CKNMFONCEBD @ RVA 0x30183F8

void InfoAnimation__CKNMFONCEBD
               (InfoAnimation_o *__this,System_Collections_Generic_List_KAFCPHCBLPL__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565be1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelConditions>_AddRange__);
    DAT_04565be1 = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).NLPMEFHNMOI,
     __this_00 != (System_Collections_Generic_List_KAFCPHCBLPL__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<ModelConditions>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EventAnimation LIKCEDBLBCD(EventAnimation.MIFHAKDMDJH ACCIHBHMFPN)  [RVA 0x3018458]
// InfoAnimation$$LIKCEDBLBCD @ RVA 0x3018458

EventAnimation_o *
InfoAnimation__LIKCEDBLBCD(InfoAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_o *__this_00;
  EventAnimation_o *pKVar1;
  
  __this_00 = (__this->fields).DMGLMCBIAGL;
  if (__this_00 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    pKVar1 = InfoAnimation_HJPFANEPGJF__LIKCEDBLBCD(__this_00,ACCIHBHMFPN,method);
    return pKVar1;
  }
  return (EventAnimation_o *)0x0;
}


// ===== public void PHKBMFGNKFL(Vector3f CJNHFNHJHPE)  [RVA 0x3018538]
// InfoAnimation$$PHKBMFGNKFL @ RVA 0x3018538

/* WARNING: Type propagation algorithm not settling */

void InfoAnimation__PHKBMFGNKFL(InfoAnimation_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  UnityEngine_Vector3_o CJNHFNHJHPE_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_80 [2];
  
  if ((DAT_04565be2 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04565be2 = 1;
  }
  CJNHFNHJHPE_00 = Vector3f__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)local_80,CJNHFNHJHPE_00,
             (MethodInfo *)0x0);
  pCVar1 = &(__this->fields).GIBHJGLKJBA;
  (pCVar1->fields).hiddenValue.fields.y = local_80[0].hiddenValue.fields.y;
  (pCVar1->fields).hiddenValue.fields.z = local_80[0].hiddenValue.fields.z;
  (__this->fields).GIBHJGLKJBA.fields.currentCryptoKey = local_80[0].currentCryptoKey;
  (__this->fields).GIBHJGLKJBA.fields.hiddenValue.fields.x = local_80[0].hiddenValue.fields.x;
  pCVar1 = &(__this->fields).GIBHJGLKJBA;
  *(undefined8 *)&(__this->fields).GIBHJGLKJBA.fields.fakeValue.fields.z = local_80[0]._24_8_;
  (pCVar1->fields).fakeValue.fields.x = local_80[0].fakeValue.fields.x;
  (pCVar1->fields).fakeValue.fields.y = local_80[0].fakeValue.fields.y;
  return;
}


// ===== private void POFILAAGAAP(List<ConditionAnimation> IBCCCNMHCBP)  [RVA 0x30169EC]
// InfoAnimation$$POFILAAGAAP @ RVA 0x30169EC

void InfoAnimation__POFILAAGAAP
               (InfoAnimation_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *IBCCCNMHCBP,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565be3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ConditionDistance_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_get_Current__);
    FUN_01bab630(&ConditionList_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    FUN_01bab630(&ConditionDirection_TypeInfo);
    FUN_01bab630(&StringLiteral_17319/*"conditionDistance is null"*/);
    FUN_01bab630(&StringLiteral_17321/*"conditions is null"*/);
    DAT_04565be3 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (IBCCCNMHCBP != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* try { // try from 03116aec to 03216c03 has its CatchHandler @ 03116aec
                       catch() { ... } // from try @ 03116aec with catch @ 03116aec
                       catch() { ... } // from try @ 03116c2c with catch @ 03116aec
                       catch() { ... } // from try @ 03116c5c with catch @ 03116aec
                       catch() { ... } // from try @ 03116cd8 with catch @ 03116aec */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)IBCCCNMHCBP,
               Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
      __this_00 = local_80.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
        return;
      }
      if ((ConditionDistance_o *)local_80.fields._current == (ConditionDistance_o *)0x0) break;
      iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)local_80.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 2) {
        bVar1 = (ConditionDistance_TypeInfo->_2).naturalAligment;
        if (((((ConditionDistance_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((ConditionDistance_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ConditionDistance_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_17319/*"conditionDistance is null"*/,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 03116c48 to 03216c5b has its CatchHandler @ 03116cd0 */
          ConditionDistance__JBICKKIBGDI((ConditionDistance_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      else {
        iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x15) {
          bVar1 = (ConditionDirection_TypeInfo->_2).naturalAligment;
          if (((((ConditionDistance_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((ConditionDistance_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)ConditionDirection_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_17319/*"conditionDistance is null"*/,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 03116c5c to 03216cbb has its CatchHandler @ 03116aec */
            ConditionDirection__JBICKKIBGDI((ConditionDirection_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        else {
          iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)__this_00,(MethodInfo *)0x0);
          if (iVar3 == 8) {
                    /* try { // try from 03116c04 to 03216c2b has its CatchHandler @ 03116c30 */
            bVar1 = (ConditionList_TypeInfo->_2).naturalAligment;
            if (((((ConditionDistance_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((ConditionDistance_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)ConditionList_TypeInfo)) {
                    /* try { // try from 03116c2c to 03216c47 has its CatchHandler @ 03116aec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03116c04 with catch @ 03116c30
                        */
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_17321/*"conditions is null"*/,(MethodInfo *)0x0);
            }
            else {
              InfoAnimation__POFILAAGAAP
                        (__this,*(System_Collections_Generic_List_IENLNOEDCFF__o **)
                                 &((ConditionDistance_Fields *)((long)__this_00 + 0x10))->NMEBNDDAFLJ,
                         method);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f KHNKHIJEFIC()  [RVA 0x30185E8]
// InfoAnimation$$KHNKHIJEFIC @ RVA 0x30185E8

/* WARNING: Type propagation algorithm not settling */

Vector3f_o * InfoAnimation__KHNKHIJEFIC(InfoAnimation_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  Vector3f_o *pCVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_40;
  
  if ((DAT_04565be4 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04565be4 = 1;
    method = extraout_x1;
  }
  pCVar1 = &(__this->fields).GIBHJGLKJBA;
  local_40.hiddenValue.fields.y = (pCVar1->fields).hiddenValue.fields.y;
  local_40.hiddenValue.fields.z = (pCVar1->fields).hiddenValue.fields.z;
  local_40.currentCryptoKey = (__this->fields).GIBHJGLKJBA.fields.currentCryptoKey;
  local_40.hiddenValue.fields.x = (__this->fields).GIBHJGLKJBA.fields.hiddenValue.fields.x;
  pCVar1 = &(__this->fields).GIBHJGLKJBA;
  local_40._24_8_ = *(undefined8 *)&(__this->fields).GIBHJGLKJBA.fields.fakeValue.fields.z;
  local_40.fakeValue.fields.x = (pCVar1->fields).fakeValue.fields.x;
  local_40.fakeValue.fields.y = (pCVar1->fields).fakeValue.fields.y;
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo,method);
  }
  local_60.hiddenValue.fields.y = local_40.hiddenValue.fields.y;
  local_60.hiddenValue.fields.z = local_40.hiddenValue.fields.z;
  local_60.currentCryptoKey = local_40.currentCryptoKey;
  local_60.hiddenValue.fields.x = local_40.hiddenValue.fields.x;
  local_60.fakeValue.fields.z = local_40.fakeValue.fields.z;
  local_60.fakeValueActive = local_40.fakeValueActive;
  local_60.inited = local_40.inited;
  local_60._30_2_ = local_40._30_2_;
  local_60.fakeValue.fields.x = local_40.fakeValue.fields.x;
  local_60.fakeValue.fields.y = local_40.fakeValue.fields.y;
  PHCOHKNFGLE = CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)&local_60,
                           (MethodInfo *)0x0);
  pCVar2 = Vector3f__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  return pCVar2;
}


// ===== public List<string> CKCPOMDNALC()  [RVA 0x3018664]
// InfoAnimation$$CKCPOMDNALC @ RVA 0x3018664

System_Collections_Generic_List_string__o *
InfoAnimation__CKCPOMDNALC(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._AHFPJJKEANI_k__BackingField;
}


// ===== public bool PCPBHJGAOOH(Model BCKBBGCOMJD, List<ConditionAnimation> PBCGCHIKCOE, EventAnimation FKDOMEBPFPF)  [RVA 0x301866C]
// InfoAnimation$$PCPBHJGAOOH @ RVA 0x301866C

bool InfoAnimation__PCPBHJGAOOH
               (InfoAnimation_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               EventAnimation_o *FKDOMEBPFPF,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  int32_t iVar3;
  ConditionList_o *__this_00;
  long lVar4;
  EventAnimation_o **ppKVar5;
  InfoAnimation_HJPFANEPGJF_o *pEVar6;
  int index;
  NJPBHDMCLIN_o *pNVar7;
  
  if ((DAT_04565be5 & 1) == 0) {
    FUN_01bab630(&ConditionList_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_get_Item__);
    DAT_04565be5 = 1;
  }
  if ((PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) &&
     ((pEVar6 = (__this->fields).DMGLMCBIAGL, pEVar6 == (InfoAnimation_HJPFANEPGJF_o *)0x0 ||
      (PBCGCHIKCOE = (pEVar6->fields).KPFGHBEKJIM,
      PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)))) {
LAB_03118840:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (PBCGCHIKCOE->fields)._size) {
    index = 0;
    do {
      __this_00 = (ConditionList_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)PBCGCHIKCOE,index,
                             Method_System_Collections_Generic_List<ConditionAnimation>_get_Item__);
      if (__this_00 == (ConditionList_o *)0x0) goto LAB_03118840;
      uVar1 = (__this_00->fields).super.LOAFPIOGJAF;
      lVar4 = (*(__this_00->klass->vtable)._6_BMADCIAHJFL.methodPtr)
                        (__this_00,BCKBBGCOMJD,(ulong)uVar1,
                         (__this_00->klass->vtable)._6_BMADCIAHJFL.method);
      if (lVar4 == 0) {
        return false;
      }
      if (FKDOMEBPFPF != (EventAnimation_o *)0x0) {
        pNVar7 = *(NJPBHDMCLIN_o **)(lVar4 + 0x248);
        if (pNVar7 == (NJPBHDMCLIN_o *)0x0) goto LAB_03118840;
        ppKVar5 = &(pNVar7->fields).FKBLDBLGMIH;
        *ppKVar5 = FKDOMEBPFPF;
        thunk_FUN_01c20e04(ppKVar5,FKDOMEBPFPF);
        (FKDOMEBPFPF->fields).KPFGHBEKJIM = pNVar7;
        thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,pNVar7);
      }
      (*(__this_00->klass->vtable)._5_ENEJIHFIBFM.methodPtr)
                (__this_00,1,(__this_00->klass->vtable)._5_ENEJIHFIBFM.method);
      iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)__this_00,(MethodInfo *)0x0);
      if (iVar3 == 8) {
        bVar2 = (ConditionList_TypeInfo->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)ConditionList_TypeInfo)) {
          (__this_00->fields).super.LOAFPIOGJAF = uVar1;
          return false;
        }
        if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_03118840;
        bVar2 = ConditionList__CFANNGPGDPJ
                          (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,FKDOMEBPFPF,
                           (MethodInfo *)0x0);
      }
      else {
        bVar2 = (*(__this_00->klass->vtable)._8_EPBENPDCBFE.methodPtr)
                          (__this_00,lVar4,__this,(__this_00->klass->vtable)._8_EPBENPDCBFE.method);
      }
      (__this_00->fields).super.LOAFPIOGJAF = uVar1;
      if ((bVar2 & 1) == 0) {
        return false;
      }
      index = index + 1;
    } while (index < (PBCGCHIKCOE->fields)._size);
  }
  return true;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3018844]
// InfoAnimation$$RandomizeObscuredVars @ RVA 0x3018844

void InfoAnimation__RandomizeObscuredVars(InfoAnimation_o *__this,MethodInfo *method)

{
  DistancePoint_o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_04;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_05;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_06;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_07;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_08;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_09;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_10;
  
  if ((DAT_04565be6 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04565be6 = 1;
  }
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).FECCBIOBKAF;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).EAFPDFHFBOM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  __this_04.fields.fakeValue = 0;
  __this_04.fields.fakeValueActive = false;
  __this_04.fields.inited = false;
  __this_04.fields._14_2_ = 0;
  __this_04.fields._0_8_ = &(__this->fields).LCLBPCMKHPM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_04,in_x2);
  __this_05.fields.fakeValue = 0;
  __this_05.fields.fakeValueActive = false;
  __this_05.fields.inited = false;
  __this_05.fields._14_2_ = 0;
  __this_05.fields._0_8_ = &(__this->fields).IPAGCJKIPEN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_05,in_x2);
  __this_07.fields.fakeValue = false;
  __this_07.fields.inited = false;
  __this_07.fields.fakeValueActive = false;
  __this_07.fields._11_1_ = 0;
  __this_07.fields._0_8_ = &(__this->fields).OEGKFPBBLEP;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_07,in_x2);
  __this_08.fields.fakeValue = false;
  __this_08.fields.inited = false;
  __this_08.fields.fakeValueActive = false;
  __this_08.fields._11_1_ = 0;
  __this_08.fields._0_8_ = &(__this->fields).HLDOANABODA;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_08,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DDBKJGNJHPP,(MethodInfo *)0x0);
  __this_06.fields.fakeValue = 0;
  __this_06.fields.fakeValueActive = false;
  __this_06.fields.inited = false;
  __this_06.fields._14_2_ = 0;
  __this_06.fields._0_8_ = &(__this->fields).KBEGPIFNNNN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_06,in_x2);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__GPJJDLBJOAL
            (&(__this->fields).GIBHJGLKJBA,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__GPJJDLBJOAL
            (&(__this->fields).FJLENBJAOFI,(MethodInfo *)0x0);
  __this_09.fields.fakeValue = false;
  __this_09.fields.inited = false;
  __this_09.fields.fakeValueActive = false;
  __this_09.fields._11_1_ = 0;
  __this_09.fields._0_8_ = &(__this->fields).PLCFKFFINMM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_09,in_x2);
  __this_10.fields.fakeValue = false;
  __this_10.fields.inited = false;
  __this_10.fields.fakeValueActive = false;
  __this_10.fields._11_1_ = 0;
  __this_10.fields._0_8_ = &(__this->fields).GFPACGPFOPI;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_10,in_x2);
  __this_00 = (__this->fields).JCKNGNJBIIF;
  if (__this_00 != (DistancePoint_o *)0x0) {
    DistancePoint__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).ECEGJGAAOHH,(MethodInfo *)0x0);
  __this_01 = (__this->fields).DMGLMCBIAGL;
  if (__this_01 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    InfoAnimation_HJPFANEPGJF__RandomizeObscuredVars(__this_01,method_00);
    return;
  }
  return;
}


// ===== private void JNIEOFCGMAE(List<string> CJNHFNHJHPE)  [RVA 0x3018EA4]
// InfoAnimation$$JNIEOFCGMAE @ RVA 0x3018EA4

void InfoAnimation__JNIEOFCGMAE
               (InfoAnimation_o *__this,System_Collections_Generic_List_string__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._AHFPJJKEANI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._AHFPJJKEANI_k__BackingField);
  return;
}


// ===== public int CHDOMOEEOHP(bool HNBNAEJAENO)  [RVA 0x3018EB4]
// InfoAnimation$$CHDOMOEEOHP @ RVA 0x3018EB4

int32_t InfoAnimation__CHDOMOEEOHP(InfoAnimation_o *__this,bool HNBNAEJAENO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565be7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565be7 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar5 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar5->fields).GLFJDDHEMNO,
     __this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    iVar4 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
        if (HNBNAEJAENO) {
          iVar3 = InfoAnimation__LMKFAMDMPJG(__this,iVar4 + 1,method);
          iVar4 = iVar3 + -1;
        }
        return iVar4;
      }
      if ((IntervalAnimation_o *)local_60.fields._current == (IntervalAnimation_o *)0x0) break;
      iVar3 = IntervalAnimation__NHGGBEACKBD((IntervalAnimation_o *)local_60.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 4) {
        method = (MethodInfo *)0x0;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (((IntervalAnimation_Fields *)((long)pIVar1 + 0x10))->DMNCBADHGJP).fields,
                           (MethodInfo *)0x0);
        if (iVar4 < iVar3) {
          method = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((IntervalAnimation_Fields *)((long)pIVar1 + 0x10))->DMNCBADHGJP).fields,
                             (MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DistancePoint FEADJHKAABC()  [RVA 0x3019078]
// InfoAnimation$$FEADJHKAABC @ RVA 0x3019078

DistancePoint_o * InfoAnimation__FEADJHKAABC(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).JCKNGNJBIIF;
}


// ===== public void CEPCEKHLKDN(float CJNHFNHJHPE)  [RVA 0x3019080]
// InfoAnimation$$CEPCEKHLKDN @ RVA 0x3019080

void InfoAnimation__CEPCEKHLKDN(InfoAnimation_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_48 [2];
  
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_48,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  (__this->fields).ECEGJGAAOHH.fields.fakeValueActive = local_48[0].fakeValueActive;
  (__this->fields).ECEGJGAAOHH.fields.inited = local_48[0].inited;
  *(undefined2 *)&(__this->fields).ECEGJGAAOHH.fields.field_0x12 = local_48[0]._18_2_;
  (__this->fields).ECEGJGAAOHH.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_48[0].hiddenValueOldByte4.fields;
  (__this->fields).ECEGJGAAOHH.fields.fakeValue = local_48[0].fakeValue;
  (__this->fields).ECEGJGAAOHH.fields.currentCryptoKey = local_48[0].currentCryptoKey;
  (__this->fields).ECEGJGAAOHH.fields.hiddenValue = local_48[0].hiddenValue;
  return;
}


// ===== public static ConditionKeys NBIECKIMNNK(ConditionAnimation PFDEAPMMFAP)  [RVA 0x3014D50]
// InfoAnimation$$NBIECKIMNNK @ RVA 0x3014D50

ConditionKeys_o * InfoAnimation__NBIECKIMNNK(ConditionAnimation_o *PFDEAPMMFAP,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  ConditionKeys_o *pGVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PFDEAPMMFAP;
  if ((DAT_04565be8 & 1) == 0) {
    auVar4 = FUN_01bab630(&ConditionKeys_TypeInfo);
    DAT_04565be8 = 1;
  }
  if (PFDEAPMMFAP == (ConditionAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03114bb4 with catch @ 03114de0 */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
                    /* try { // try from 03114d80 to 03214d83 has its CatchHandler @ 03114dd8 */
                    /* try { // try from 03114d84 to 03214d87 has its CatchHandler @ 03114db8 */
                    /* try { // try from 03114d88 to 03214d8f has its CatchHandler @ 03114dc0 */
  iVar2 = ConditionAnimation__NHGGBEACKBD(PFDEAPMMFAP,(MethodInfo *)0x0);
                    /* try { // try from 03114d90 to 03214d93 has its CatchHandler @ 03114db4 */
  pGVar3 = (ConditionKeys_o *)0x0;
                    /* try { // try from 03114d94 to 03214d97 has its CatchHandler @ 03114dac */
  if (iVar2 == 4) {
                    /* catch() { ... } // from try @ 03114ca4 with catch @ 03114d98
                       try { // try from 03114d98 to 03214dfb has its CatchHandler @ 03114a8c */
                    /* catch() { ... } // from try @ 03114c88 with catch @ 03114d9c */
                    /* catch() { ... } // from try @ 03114c54 with catch @ 03114da0 */
                    /* catch() { ... } // from try @ 03114ca8 with catch @ 03114da4 */
                    /* catch() { ... } // from try @ 03114c44 with catch @ 03114da8 */
                    /* catch() { ... } // from try @ 03114d94 with catch @ 03114dac */
    bVar1 = (ConditionKeys_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03114c24 with catch @ 03114db0 */
                    /* catch() { ... } // from try @ 03114c14 with catch @ 03114db4
                       catch() { ... } // from try @ 03114d90 with catch @ 03114db4 */
    if ((PFDEAPMMFAP->klass->_2).naturalAligment < bVar1) {
                    /* catch() { ... } // from try @ 03114d84 with catch @ 03114db8 */
      pGVar3 = (ConditionKeys_o *)0x0;
                    /* catch() { ... } // from try @ 03114b90 with catch @ 03114dbc */
    }
    else {
                    /* catch() { ... } // from try @ 03114d00 with catch @ 03114dc0
                       catch() { ... } // from try @ 03114d88 with catch @ 03114dc0 */
                    /* catch() { ... } // from try @ 03114c00 with catch @ 03114dcc */
      pGVar3 = (ConditionKeys_o *)PFDEAPMMFAP;
                    /* catch() { ... } // from try @ 03114bec with catch @ 03114dd0 */
      if ((PFDEAPMMFAP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)ConditionKeys_TypeInfo) {
        pGVar3 = (ConditionKeys_o *)0x0;
      }
    }
  }
                    /* catch() { ... } // from try @ 03114bd0 with catch @ 03114dd4 */
                    /* catch() { ... } // from try @ 03114d80 with catch @ 03114dd8 */
                    /* catch() { ... } // from try @ 03114bc0 with catch @ 03114ddc */
  return pGVar3;
}


// ===== public bool FINLPLHJDHN(List<ObscuredString> EOLHDEHOFHL)  [RVA 0x30190BC]
// InfoAnimation$$FINLPLHJDHN @ RVA 0x30190BC

/* WARNING: Removing unreachable block (ram,0x031192e4) */

bool InfoAnimation__FINLPLHJDHN
               (InfoAnimation_o *__this,System_Collections_Generic_List_ObscuredString__o *EOLHDEHOFHL
               ,MethodInfo *method)

{
  Il2CppObject *a;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *b;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565be9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    DAT_04565be9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    a = local_70.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    if (EOLHDEHOFHL == (System_Collections_Generic_List_ObscuredString__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)EOLHDEHOFHL,
               Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                        );
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_03119238;
      }
      b = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_90.fields._current,
                     (MethodInfo *)0x0);
      bVar1 = System_String__op_Equality((System_String_o *)a,b,(MethodInfo *)0x0);
    } while (!bVar1);
    bVar2 = 1;
    uVar3 = 6;
LAB_03119238:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__
              );
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}


// ===== private static void .cctor()  [RVA 0x3019378]
// InfoAnimation$$.cctor @ RVA 0x3019378

void InfoAnimation___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *__this;
  
  if ((DAT_04565bea & 1) == 0) {
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_TypeInfo);
    DAT_04565bea = 1;
  }
  __this = (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>__ctor__);
  InfoAnimation_TypeInfo->static_fields->PHNBIJIOHJO = __this;
  thunk_FUN_01c20e04(InfoAnimation_TypeInfo->static_fields,__this);
  return;
}


// ===== public void EKIGLDNIJBC(string OFJJGGANIAE)  [RVA 0x3019410]
// InfoAnimation$$EKIGLDNIJBC @ RVA 0x3019410

void InfoAnimation__EKIGLDNIJBC(InfoAnimation_o *__this,System_String_o *OFJJGGANIAE,MethodInfo *method)

{
  int32_t length;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_04565beb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04565beb = 1;
  }
  pSVar1 = (__this->fields).GMNNFJNKIAN;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (OFJJGGANIAE == (System_String_o *)0x0) {
      return;
    }
    pSVar1 = (__this->fields).GMNNFJNKIAN;
    collection = System_String__Split(OFJJGGANIAE,0x7c,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>_AddRange__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OOAOCGENEPI()  [RVA 0x30194C8]
// InfoAnimation$$OOAOCGENEPI @ RVA 0x30194C8

void InfoAnimation__OOAOCGENEPI(MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565bec & 1) == 0) {
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InfoAnimation_ECNMNALHFIF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InfoAnimation_ECNMNALHFIF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InfoAnimation_ECNMNALHFIF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_GetEnumerator__);
    DAT_04565bec = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = InfoAnimation_TypeInfo->static_fields->PHNBIJIOHJO;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<InfoAnimation_ECNMNALHFIF>_MoveNext__
                             ), bVar1) {
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_38.fields._current[1].klass = (Il2CppClass *)0x0;
      thunk_FUN_01c20e04(local_38.fields._current + 1,0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<InfoAnimation_ECNMNALHFIF>_Dispose__)
    ;
    if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = InfoAnimation_TypeInfo->static_fields->PHNBIJIOHJO;
    if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLKAJAOEELF(InfoAnimation.HJPFANEPGJF NMPDBLCKDFA)  [RVA 0x3019690]
// InfoAnimation$$LLKAJAOEELF @ RVA 0x3019690

void InfoAnimation__LLKAJAOEELF
               (InfoAnimation_o *__this,InfoAnimation_HJPFANEPGJF_o *NMPDBLCKDFA,MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o **ppEVar2;
  InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *pEVar3;
  InfoAnimation_KFMLLPPCPHI_o *pEVar4;
  InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o **ppEVar5;
  InfoAnimation_KFMLLPPCPHI_o **ppEVar6;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar7;
  
  if ((__this->fields).DMGLMCBIAGL == (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    return;
  }
  if (NMPDBLCKDFA != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    InfoAnimation__HGEHELKLLND(__this,(NMPDBLCKDFA->fields).AFFIHBMACFF,method);
    InfoAnimation__NOLHPHMIBGC(__this,(NMPDBLCKDFA->fields).ENCCFIFCDGL,method);
    InfoAnimation__AOHPFMNMABI(__this,(NMPDBLCKDFA->fields).KPFGHBEKJIM,method);
    InfoAnimation__BGBLMKAADNE(__this,(NMPDBLCKDFA->fields).GLFJDDHEMNO,method);
    InfoAnimation__BMLBAHHHIFD(__this,(NMPDBLCKDFA->fields).KFLHLLDPBIC,method);
    InfoAnimation__CKNMFONCEBD(__this,(NMPDBLCKDFA->fields).NLPMEFHNMOI,method);
    InfoAnimation__IBDGPMDNGNG(__this,(NMPDBLCKDFA->fields).NEIJJHEFLHP,method);
    pEVar1 = (__this->fields).DMGLMCBIAGL;
    if (pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
      ppEVar5 = &(pEVar1->fields).MGCCHNBNJPC;
      if (*ppEVar5 != (InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *)0x0) {
        if (((*ppEVar5)->fields).OKONAOJIODE == false) {
          pEVar3 = (NMPDBLCKDFA->fields).MGCCHNBNJPC;
          if (pEVar3 == (InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *)0x0) goto LAB_031197b0;
          if ((pEVar3->fields).OKONAOJIODE != false) {
            *ppEVar5 = pEVar3;
            thunk_FUN_01c20e04(ppEVar5);
            pEVar1 = (__this->fields).DMGLMCBIAGL;
            if (pEVar1 == (InfoAnimation_HJPFANEPGJF_o *)0x0) goto LAB_031197b0;
          }
        }
        ppEVar6 = &(pEVar1->fields).EJNDOMGCGFL;
        if (*ppEVar6 != (InfoAnimation_KFMLLPPCPHI_o *)0x0) {
          if (((*ppEVar6)->fields).OKONAOJIODE == false) {
            pEVar4 = (NMPDBLCKDFA->fields).EJNDOMGCGFL;
            if (pEVar4 == (InfoAnimation_KFMLLPPCPHI_o *)0x0) goto LAB_031197b0;
            if ((pEVar4->fields).OKONAOJIODE != false) {
              *ppEVar6 = pEVar4;
              thunk_FUN_01c20e04(ppEVar6);
              pEVar1 = (__this->fields).DMGLMCBIAGL;
              if (pEVar1 == (InfoAnimation_HJPFANEPGJF_o *)0x0) goto LAB_031197b0;
            }
          }
          ppEVar2 = &(pEVar1->fields).GCIHJDANIJJ;
          pEVar7 = *ppEVar2;
          if (pEVar7 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) {
            if ((pEVar7->fields).OKONAOJIODE == false) {
              pEVar7 = (NMPDBLCKDFA->fields).GCIHJDANIJJ;
              if (pEVar7 == (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) goto LAB_031197b0;
              if ((pEVar7->fields).OKONAOJIODE != false) {
                *ppEVar2 = pEVar7;
                thunk_FUN_01c20e04();
                return;
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_031197b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EDHDLAHEGIB(List<string> FPEHEJBLCAO, int PAIECLCNOBO, bool MKFHNCKMNDJ)  [RVA 0x3019874]
// InfoAnimation$$EDHDLAHEGIB @ RVA 0x3019874

bool InfoAnimation__EDHDLAHEGIB
               (InfoAnimation_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               int32_t PAIECLCNOBO,bool MKFHNCKMNDJ,MethodInfo *method)

{
  bool bVar1;
  int32_t PKDBOMAHGHC;
  
  PKDBOMAHGHC = InfoAnimation__MJEOOGNPEFO(__this,PAIECLCNOBO,(MethodInfo *)(ulong)(uint)PAIECLCNOBO);
  bVar1 = InfoAnimation__MIKAOEFOCHO(__this,FPEHEJBLCAO,PKDBOMAHGHC,MKFHNCKMNDJ,method);
  return bVar1;
}


// ===== public ConditionKeys OCLGKBPDEBI()  [RVA 0x30198AC]
// InfoAnimation$$OCLGKBPDEBI @ RVA 0x30198AC

ConditionKeys_o * InfoAnimation__OCLGKBPDEBI(InfoAnimation_o *__this,MethodInfo *method)

{
  ConditionKeys_o *pGVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar2;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  
  if ((DAT_04565bed & 1) == 0) {
    FUN_01bab630(&InfoAnimation_TypeInfo);
    DAT_04565bed = 1;
    method = extraout_x1;
  }
  pEVar2 = (__this->fields).DMGLMCBIAGL;
  if (pEVar2 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    AHEFOIOKDOK = (pEVar2->fields).KPFGHBEKJIM;
    if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    pGVar1 = InfoAnimation__CNBIDPCPDJN(AHEFOIOKDOK,method);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f OKGBDLBEJIP()  [RVA 0x3019B80]
// InfoAnimation$$OKGBDLBEJIP @ RVA 0x3019B80

/* WARNING: Type propagation algorithm not settling */

Vector3f_o * InfoAnimation__OKGBDLBEJIP(InfoAnimation_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  Vector3f_o *pCVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_40;
  
  if ((DAT_04565bee & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04565bee = 1;
    method = extraout_x1;
  }
  pCVar1 = &(__this->fields).FJLENBJAOFI;
  local_40.hiddenValue.fields.y = (pCVar1->fields).hiddenValue.fields.y;
  local_40.hiddenValue.fields.z = (pCVar1->fields).hiddenValue.fields.z;
  local_40.currentCryptoKey = (__this->fields).FJLENBJAOFI.fields.currentCryptoKey;
  local_40.hiddenValue.fields.x = (__this->fields).FJLENBJAOFI.fields.hiddenValue.fields.x;
  pCVar1 = &(__this->fields).FJLENBJAOFI;
  local_40._24_8_ = *(undefined8 *)&(__this->fields).FJLENBJAOFI.fields.fakeValue.fields.z;
  local_40.fakeValue.fields.x = (pCVar1->fields).fakeValue.fields.x;
  local_40.fakeValue.fields.y = (pCVar1->fields).fakeValue.fields.y;
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo,method);
  }
  local_60.hiddenValue.fields.y = local_40.hiddenValue.fields.y;
  local_60.hiddenValue.fields.z = local_40.hiddenValue.fields.z;
  local_60.currentCryptoKey = local_40.currentCryptoKey;
  local_60.hiddenValue.fields.x = local_40.hiddenValue.fields.x;
  local_60.fakeValue.fields.z = local_40.fakeValue.fields.z;
  local_60.fakeValueActive = local_40.fakeValueActive;
  local_60.inited = local_40.inited;
  local_60._30_2_ = local_40._30_2_;
  local_60.fakeValue.fields.x = local_40.fakeValue.fields.x;
  local_60.fakeValue.fields.y = local_40.fakeValue.fields.y;
  PHCOHKNFGLE = CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)&local_60,
                           (MethodInfo *)0x0);
  pCVar2 = Vector3f__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  return pCVar2;
}


// ===== public bool AGEELFDMNAN(string KGLJICLJHEL, int PKDBOMAHGHC)  [RVA 0x301521C]
// InfoAnimation$$AGEELFDMNAN @ RVA 0x301521C

bool InfoAnimation__AGEELFDMNAN
               (InfoAnimation_o *__this,System_String_o *KGLJICLJHEL,int32_t PKDBOMAHGHC,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04565bef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565bef = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar5 == (InfoAnimation_HJPFANEPGJF_o *)0x0) ||
     (__this_00 = (pEVar5->fields).GLFJDDHEMNO,
     __this_00 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    pIVar1 = local_58.fields._current;
    if (!bVar2) {
      iVar6 = 5;
      goto LAB_03115320;
    }
    if (local_58.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Equality
                      ((System_String_o *)local_58.fields._current[5].klass,KGLJICLJHEL,
                       (MethodInfo *)0x0);
  } while (((!bVar3) ||
           (iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 3)
                               ,(MethodInfo *)0x0), PKDBOMAHGHC < iVar4)) ||
          (iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                              (MethodInfo *)0x0), iVar4 < PKDBOMAHGHC));
  iVar6 = 4;
LAB_03115320:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
  return bVar2 && iVar6 == 4;
}


// ===== public float BMOIBLLELCL()  [RVA 0x3019BFC]
// InfoAnimation$$BMOIBLLELCL @ RVA 0x3019BFC

float InfoAnimation__BMOIBLLELCL(InfoAnimation_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  local_30.fakeValueActive = (__this->fields).ECEGJGAAOHH.fields.fakeValueActive;
  local_30.inited = (__this->fields).ECEGJGAAOHH.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).ECEGJGAAOHH.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).ECEGJGAAOHH.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).ECEGJGAAOHH.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).ECEGJGAAOHH.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).ECEGJGAAOHH.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== public List<ConditionKeys> NAPDMHMCLML()  [RVA 0x3019C2C]
// InfoAnimation$$NAPDMHMCLML @ RVA 0x3019C2C

System_Collections_Generic_List_GBKCLIFGIFN__o *
InfoAnimation__NAPDMHMCLML(InfoAnimation_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GBKCLIFGIFN__o *PFDNCKLLMBL;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  
  if ((DAT_04565bf0 & 1) == 0) {
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionKeys>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionKeys>_TypeInfo);
    DAT_04565bf0 = 1;
    method = extraout_x1;
  }
  PFDNCKLLMBL = (System_Collections_Generic_List_GBKCLIFGIFN__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ConditionKeys>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,
             Method_System_Collections_Generic_List<ConditionKeys>__ctor__);
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if (pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    AHEFOIOKDOK = (pEVar1->fields).KPFGHBEKJIM;
    if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InfoAnimation__HPGNLPIBDBN(AHEFOIOKDOK,PFDNCKLLMBL,in_x2);
    return PFDNCKLLMBL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NOMHOMPBEEK()  [RVA 0x3019CE0]
// InfoAnimation$$NOMHOMPBEEK @ RVA 0x3019CE0

bool InfoAnimation__NOMHOMPBEEK(InfoAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).BNLDAAPGEHO;
}


// ===== public void IBDGPMDNGNG(List<ActionAnimation> CJNHFNHJHPE)  [RVA 0x3019814]
// InfoAnimation$$IBDGPMDNGNG @ RVA 0x3019814

void InfoAnimation__IBDGPMDNGNG
               (InfoAnimation_o *__this,System_Collections_Generic_List_IIMNGGHGKOD__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565bf1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_AddRange__);
    DAT_04565bf1 = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).NEIJJHEFLHP,
     __this_00 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<ActionAnimation>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PPHOIDGOHAD(int PKDBOMAHGHC, List<IntervalAnimation> LEIGHDGNHKF, List<IntervalAnimation> MJOODOHBAMD, HashSet<IntervalAnimation.IMLPLLLPALI> OBGEOMFFJMJ)  [RVA 0x3019CE8]
// InfoAnimation$$PPHOIDGOHAD @ RVA 0x3019CE8

void InfoAnimation__PPHOIDGOHAD
               (InfoAnimation_o *__this,int32_t PKDBOMAHGHC,
               System_Collections_Generic_List_JADGCGOJLJB__o *LEIGHDGNHKF,
               System_Collections_Generic_List_JADGCGOJLJB__o *MJOODOHBAMD,
               System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *OBGEOMFFJMJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_01;
  InfoAnimation_HJPFANEPGJF_o *pEVar8;
  IntervalAnimation_array *pJVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565bf2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565bf2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (LEIGHDGNHKF != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    iVar4 = (LEIGHDGNHKF->fields)._size;
    (LEIGHDGNHKF->fields)._size = 0;
    (LEIGHDGNHKF->fields)._version = (LEIGHDGNHKF->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(LEIGHDGNHKF->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
    if (MJOODOHBAMD != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
      iVar4 = (MJOODOHBAMD->fields)._size;
      (MJOODOHBAMD->fields)._size = 0;
      (MJOODOHBAMD->fields)._version = (MJOODOHBAMD->fields)._version + 1;
      if (0 < iVar4) {
        System_Array__Clear((System_Array_o *)(MJOODOHBAMD->fields)._items,0,iVar4,(MethodInfo *)0x0
                           );
      }
      pEVar8 = (__this->fields).DMGLMCBIAGL;
      if ((pEVar8 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
         (__this_01 = (pEVar8->fields).GLFJDDHEMNO,
         __this_01 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
LAB_03119e20:
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__
                            );
          __this_00 = local_80.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
            return;
          }
          if ((IntervalAnimation_o *)local_80.fields._current == (IntervalAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((IntervalAnimation_Fields *)((long)local_80.fields._current + 0x10))->
                             IELLEFEFFJD).fields,(MethodInfo *)0x0);
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
          if (iVar4 < iVar5) {
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
          }
          else {
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (((IntervalAnimation_Fields *)((long)__this_00 + 0x10))->IELLEFEFFJD).
                               fields,(MethodInfo *)0x0);
          }
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((IntervalAnimation_Fields *)((long)__this_00 + 0x10))->DMNCBADHGJP).fields,
                             (MethodInfo *)0x0);
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
          if (iVar5 < iVar4) {
            iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
          }
          else {
            iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (((IntervalAnimation_Fields *)((long)__this_00 + 0x10))->DMNCBADHGJP).
                               fields,(MethodInfo *)0x0);
          }
          if ((iVar6 <= PKDBOMAHGHC) && (PKDBOMAHGHC <= iVar7)) {
            if (OBGEOMFFJMJ != (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0)
            {
              iVar4 = IntervalAnimation__NHGGBEACKBD((IntervalAnimation_o *)__this_00,(MethodInfo *)0x0);
              bVar3 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                                ((System_Collections_Generic_HashSet_T__o *)OBGEOMFFJMJ,iVar4,
                                 Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_Contains__
                                );
              if (bVar3) goto LAB_03119e20;
            }
            lVar2 = Method_System_Collections_Generic_List<IntervalAnimation>_Add__;
            pJVar9 = (LEIGHDGNHKF->fields)._items;
            (LEIGHDGNHKF->fields)._version = (LEIGHDGNHKF->fields)._version + 1;
            if (pJVar9 == (IntervalAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (LEIGHDGNHKF->fields)._size;
            if (uVar1 < (uint)pJVar9->max_length) {
              (LEIGHDGNHKF->fields)._size = uVar1 + 1;
              pJVar9->m_Items[(int)uVar1] = (IntervalAnimation_o *)__this_00;
              thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)LEIGHDGNHKF,__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_03119e20;
          }
        } while (PKDBOMAHGHC + -1 != iVar7);
        if (OBGEOMFFJMJ != (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0) {
          iVar4 = IntervalAnimation__NHGGBEACKBD((IntervalAnimation_o *)__this_00,(MethodInfo *)0x0);
          bVar3 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                            ((System_Collections_Generic_HashSet_T__o *)OBGEOMFFJMJ,iVar4,
                             Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_Contains__
                            );
          if (bVar3) goto LAB_03119e20;
        }
        lVar2 = Method_System_Collections_Generic_List<IntervalAnimation>_Add__;
        pJVar9 = (MJOODOHBAMD->fields)._items;
        (MJOODOHBAMD->fields)._version = (MJOODOHBAMD->fields)._version + 1;
        if (pJVar9 == (IntervalAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (MJOODOHBAMD->fields)._size;
        if (uVar1 < (uint)pJVar9->max_length) {
          (MJOODOHBAMD->fields)._size = uVar1 + 1;
          pJVar9->m_Items[(int)uVar1] = (IntervalAnimation_o *)__this_00;
          thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)MJOODOHBAMD,__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03119e20;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AMMECKCJFAM(KeyFrames ABKNPBMGHKH, int HALFPAHFEPG, bool GCLNGPHDFKM)  [RVA 0x301A0EC]
// InfoAnimation$$AMMECKCJFAM @ RVA 0x301A0EC

void InfoAnimation__AMMECKCJFAM
               (InfoAnimation_o *__this,KeyFrames_o *ABKNPBMGHKH,int32_t HALFPAHFEPG,
               bool GCLNGPHDFKM,MethodInfo *method)

{
  int32_t IGCGOHHCMHD;
  
  if (HALFPAHFEPG < 0) {
    HALFPAHFEPG = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  }
  IGCGOHHCMHD = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
  if (ABKNPBMGHKH != (KeyFrames_o *)0x0) {
    KeyFrames__AMMECKCJFAM
              (ABKNPBMGHKH,HALFPAHFEPG,IGCGOHHCMHD,GCLNGPHDFKM,(__this->fields).MMENPDNBNHN,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JLJIIIPLIPK(string KGLJICLJHEL)  [RVA 0x301A158]
// InfoAnimation$$JLJIIIPLIPK @ RVA 0x301A158

void InfoAnimation__JLJIIIPLIPK(InfoAnimation_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  if ((DAT_04565bf3 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
    DAT_04565bf3 = 1;
  }
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields)._AHFPJJKEANI_k__BackingField,
             (Il2CppObject *)KGLJICLJHEL,Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
  return;
}


// ===== public void LIFIDKHNGCM(Vector3f CJNHFNHJHPE)  [RVA 0x301A1B0]
// InfoAnimation$$LIFIDKHNGCM @ RVA 0x301A1B0

/* WARNING: Type propagation algorithm not settling */

void InfoAnimation__LIFIDKHNGCM(InfoAnimation_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  UnityEngine_Vector3_o CJNHFNHJHPE_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_80 [2];
  
  if ((DAT_04565bf4 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04565bf4 = 1;
  }
  CJNHFNHJHPE_00 = Vector3f__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)local_80,CJNHFNHJHPE_00,
             (MethodInfo *)0x0);
  pCVar1 = &(__this->fields).FJLENBJAOFI;
  (pCVar1->fields).hiddenValue.fields.y = local_80[0].hiddenValue.fields.y;
  (pCVar1->fields).hiddenValue.fields.z = local_80[0].hiddenValue.fields.z;
  (__this->fields).FJLENBJAOFI.fields.currentCryptoKey = local_80[0].currentCryptoKey;
  (__this->fields).FJLENBJAOFI.fields.hiddenValue.fields.x = local_80[0].hiddenValue.fields.x;
  pCVar1 = &(__this->fields).FJLENBJAOFI;
  *(undefined8 *)&(__this->fields).FJLENBJAOFI.fields.fakeValue.fields.z = local_80[0]._24_8_;
  (pCVar1->fields).fakeValue.fields.x = local_80[0].fakeValue.fields.x;
  (pCVar1->fields).fakeValue.fields.y = local_80[0].fakeValue.fields.y;
  return;
}


// ===== private void NLGCBCPOCID(string AAIHDEKMIJG)  [RVA 0x301A260]
// InfoAnimation$$NLGCBCPOCID @ RVA 0x301A260

void InfoAnimation__NLGCBCPOCID(InfoAnimation_o *__this,System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  System_Byte_array *IMMNELPBGIF;
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_04565bf5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6387/*"File {0} not found"*/);
    DAT_04565bf5 = 1;
  }
  IMMNELPBGIF = CMEBCBKGFFL__JKGGKELPNKJ(AAIHDEKMIJG,(MethodInfo *)0x0);
  if ((IMMNELPBGIF != (System_Byte_array *)0x0) && (IMMNELPBGIF->max_length != 0)) {
    InfoAnimation__PLEKHOPFKNM(__this,IMMNELPBGIF,method);
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((AAIHDEKMIJG != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(AAIHDEKMIJG,(((args->obj).klass)->_1).element_class), lVar1 == 0))
  {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)AAIHDEKMIJG;
    thunk_FUN_01c20e04(args->m_Items,AAIHDEKMIJG);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_6387/*"File {0} not found"*/,args,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public int HBLNNBPDGOM()  [RVA 0x301A378]
// InfoAnimation$$HBLNNBPDGOM @ RVA 0x301A378

int32_t InfoAnimation__HBLNNBPDGOM(InfoAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
  iVar2 = InfoAnimation__GIDBPKKFOBE(__this,method_00);
  return iVar2 * (iVar1 + 1);
}


// ===== private void CEACPADMPKJ(List<ConditionAnimation> AHEFOIOKDOK, ModelObject NCNGALIAHJL, bool FOFCAILEKJD, bool BHKCLMLKLNB, ModelObject CHBJNMMEAPG, ModelNode IIBPJLKGEBP)  [RVA 0x3017104]
// InfoAnimation$$CEACPADMPKJ @ RVA 0x3017104

void InfoAnimation__CEACPADMPKJ
               (InfoAnimation_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
               ModelObject_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               ModelObject_o *CHBJNMMEAPG,ModelNode_o *IIBPJLKGEBP,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565bf6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ConditionDistance_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_get_Current__);
    FUN_01bab630(&ConditionList_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    FUN_01bab630(&ConditionDirection_TypeInfo);
    FUN_01bab630(&StringLiteral_21286/*"subconditions is null"*/);
    FUN_01bab630(&StringLiteral_21285/*"subcondition is null"*/);
    DAT_04565bf6 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
      __this_00 = local_80.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
        return;
      }
      if ((ConditionDistance_o *)local_80.fields._current == (ConditionDistance_o *)0x0) break;
      iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)local_80.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 2) {
        bVar1 = (ConditionDistance_TypeInfo->_2).naturalAligment;
        if (((((ConditionDistance_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((ConditionDistance_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ConditionDistance_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_21285/*"subcondition is null"*/,(MethodInfo *)0x0);
        }
        else {
          ConditionDistance__KHKLLNFCMME
                    ((ConditionDistance_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,
                     CHBJNMMEAPG,(MethodInfo *)0x0);
        }
      }
      iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)__this_00,(MethodInfo *)0x0);
      if (iVar3 == 0x15) {
        bVar1 = (ConditionDirection_TypeInfo->_2).naturalAligment;
        if (((((ConditionDistance_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((ConditionDistance_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ConditionDirection_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_21285/*"subcondition is null"*/,(MethodInfo *)0x0);
        }
        else {
          ConditionDirection__KHKLLNFCMME
                    ((ConditionDirection_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,
                     CHBJNMMEAPG,(MethodInfo *)0x0);
        }
      }
      else {
        iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 8) {
          bVar1 = (ConditionList_TypeInfo->_2).naturalAligment;
          if (((((ConditionDistance_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((ConditionDistance_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)ConditionList_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_21286/*"subconditions is null"*/,(MethodInfo *)0x0);
          }
          else {
            InfoAnimation__CEACPADMPKJ
                      (__this,*(System_Collections_Generic_List_IENLNOEDCFF__o **)
                               &((ConditionDistance_Fields *)((long)__this_00 + 0x10))->NMEBNDDAFLJ,
                       NCNGALIAHJL,FOFCAILEKJD,BHKCLMLKLNB,CHBJNMMEAPG,IIBPJLKGEBP,method);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int KGIBBMMAFDN()  [RVA 0x301A3B4]
// InfoAnimation$$KGIBBMMAFDN @ RVA 0x301A3B4

int32_t InfoAnimation__KGIBBMMAFDN(InfoAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04565bf7 & 1) == 0) {
    FUN_01bab630(&AiData_TypeInfo);
    DAT_04565bf7 = 1;
    method = extraout_x1;
  }
  if ((AiData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AiData_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565c83 == '\0') {
    FUN_01bab630(&AiData_TypeInfo);
    DAT_04565c83 = '\x01';
    method = extraout_x1_01;
  }
  if ((AiData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AiData_TypeInfo,method);
  }
  iVar1 = InfoAnimation__COFDJFNCJDM(__this,AiData_TypeInfo->static_fields->IIFEIAMPOMC,in_x2);
  return iVar1;
}


// ===== private static ConditionKeys CNBIDPCPDJN(List<ConditionAnimation> AHEFOIOKDOK)  [RVA 0x3019910]
// InfoAnimation$$CNBIDPCPDJN @ RVA 0x3019910

ConditionKeys_o *
InfoAnimation__CNBIDPCPDJN
          (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar2;
  int32_t iVar3;
  ConditionKeys_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK_00;
  undefined1 auVar6 [16];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = AHEFOIOKDOK;
  if ((DAT_04565bf8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_get_Current__);
    FUN_01bab630(&ConditionList_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    auVar6 = FUN_01bab630(&StringLiteral_17320/*"conditionList is null"*/);
    DAT_04565bf8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
LAB_03119a00:
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
    PFDEAPMMFAP = local_60.fields._current;
    if (!bVar2) {
      pGVar4 = (ConditionKeys_o *)0x0;
      goto LAB_03119ac0;
    }
    if ((ConditionAnimation_o *)local_60.fields._current == (ConditionAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = ConditionAnimation__NHGGBEACKBD((ConditionAnimation_o *)local_60.fields._current,(MethodInfo *)0x0);
    if (iVar3 == 8) {
      bVar1 = (ConditionList_TypeInfo->_2).naturalAligment;
      if (((((ConditionAnimation_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
         ((((ConditionAnimation_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)ConditionList_TypeInfo)) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_17320/*"conditionList is null"*/,(MethodInfo *)0x0);
        goto LAB_03119a00;
      }
      AHEFOIOKDOK_00 = ((ConditionAnimation_o *)((long)PFDEAPMMFAP + 0x28))->monitor;
      pMVar5 = extraout_x1;
      if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar5 = extraout_x1_01;
      }
      pGVar4 = InfoAnimation__CNBIDPCPDJN(AHEFOIOKDOK_00,pMVar5);
    }
    else {
      pMVar5 = extraout_x1;
      if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar5 = extraout_x1_00;
      }
      pGVar4 = InfoAnimation__NBIECKIMNNK((ConditionAnimation_o *)PFDEAPMMFAP,pMVar5);
    }
    if (pGVar4 != (ConditionKeys_o *)0x0) {
LAB_03119ac0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__)
      ;
      return pGVar4;
    }
  } while( true );
}


// ===== public int PBJGINPFPDC(string OONIBCILJBN, bool HNBNAEJAENO = False)  [RVA 0x301A444]
// InfoAnimation$$PBJGINPFPDC @ RVA 0x301A444

int32_t InfoAnimation__PBJGINPFPDC
                  (InfoAnimation_o *__this,System_String_o *OONIBCILJBN,bool HNBNAEJAENO,
                  MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  int iVar5;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  MethodInfo *method_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565bf9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04565bf9 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar6 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar6->fields).GLFJDDHEMNO,
     __this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    iVar4 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
        method_00 = (MethodInfo *)0x0;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
        if (HNBNAEJAENO) {
          iVar3 = InfoAnimation__LMKFAMDMPJG(__this,iVar5 + 1,method_00);
          iVar5 = iVar3 + -1;
        }
        return iVar5;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality
                        (OONIBCILJBN,(System_String_o *)local_60.fields._current[5].klass,
                         (MethodInfo *)0x0);
      if ((bVar2) &&
         (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                             (MethodInfo *)0x0), iVar4 < iVar3)) {
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                           (MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BMLBAHHHIFD(List<ConditionAnimation> CJNHFNHJHPE)  [RVA 0x30197B4]
// InfoAnimation$$BMLBAHHHIFD @ RVA 0x30197B4

void InfoAnimation__BMLBAHHHIFD
               (InfoAnimation_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565bfa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_AddRange__);
    DAT_04565bfa = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).KFLHLLDPBIC,
     __this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<ConditionAnimation>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLPDMCGMLOK()  [RVA 0x301A61C]
// InfoAnimation$$LLPDMCGMLOK @ RVA 0x301A61C

void InfoAnimation__LLPDMCGMLOK(InfoAnimation_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  InfoAnimation_ECNMNALHFIF_o *pEVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *method_02;
  InfoAnimation_ECNMNALHFIF_array *pEVar6;
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *__this_00;
  
  if ((DAT_04565bfb & 1) == 0) {
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&InfoAnimation_ECNMNALHFIF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_Add__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    DAT_04565bfb = 1;
  }
  bVar3 = System_String__IsNullOrEmpty((__this->fields).KBCOHMPJELJ,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pEVar4 = InfoAnimation__GDMIJMOJIFH(__this,method_00);
  if (pEVar4 != (InfoAnimation_ECNMNALHFIF_o *)0x0) {
    pEVar4 = InfoAnimation__GDMIJMOJIFH(__this,method_01);
    InfoAnimation__MAOJJLKMHIF(__this,pEVar4,in_x2);
    return;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = SF2Paths__DGOOOLFLFEH((MethodInfo *)0x0);
  method_02 = (MethodInfo *)(__this->fields).KBCOHMPJELJ;
  pSVar5 = System_String__Format
                     (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar5,(Il2CppObject *)method_02,
                      (MethodInfo *)0x0);
  InfoAnimation__NLGCBCPOCID(__this,pSVar5,method_02);
  if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InfoAnimation_TypeInfo->static_fields->PHNBIJIOHJO;
  pEVar4 = (InfoAnimation_ECNMNALHFIF_o *)thunk_FUN_01bda818(InfoAnimation_ECNMNALHFIF_TypeInfo);
  System_Object___ctor((Il2CppObject *)pEVar4,(MethodInfo *)0x0);
  if (pEVar4 != (InfoAnimation_ECNMNALHFIF_o *)0x0) {
    (pEVar4->fields).KBCOHMPJELJ = (__this->fields).KBCOHMPJELJ;
    thunk_FUN_01c20e04();
    (pEVar4->fields).EGDMNJBHAPF = (__this->fields).MMENPDNBNHN;
    thunk_FUN_01c20e04();
    lVar2 = Method_System_Collections_Generic_List<InfoAnimation_ECNMNALHFIF>_Add__;
    if (__this_00 != (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)0x0) {
      pEVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pEVar6 != (InfoAnimation_ECNMNALHFIF_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pEVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pEVar6->m_Items[(int)uVar1] = pEVar4;
          thunk_FUN_01c20e04(pEVar6->m_Items + (int)uVar1,pEVar4);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pEVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

