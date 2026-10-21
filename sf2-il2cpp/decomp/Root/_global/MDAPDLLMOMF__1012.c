// TypeDefIndex 1012
// Namespace: 
// public class MDAPDLLMOMF : JADGCGOJLJB
// Fields:
//   private bool NELGLPNGJNH; // 0x70
//   private MDAPDLLMOMF.NHJGACDEAGK FNCEJEPEFGA; // 0x78
//   private MDAPDLLMOMF.NHJGACDEAGK FPDBFMBILJI; // 0x80
//   private bool FHHPDAPFIOJ; // 0x88
//   private bool ADOEMLOGHBD; // 0x89
//   private bool IIDJMOGGPCI; // 0x8A
//   private HEDFKJBDBFN BDDHELGFNIA; // 0x8C
//   private ObscuredFloat LHBGKMGNOEP; // 0x90
//   private bool MBACAJPGOCL; // 0xA4
//   private string AFBLIDFFBMK; // 0xA8
//   private ObscuredFloat CDDOJKNPKJN; // 0xB0
//   private ObscuredFloat LHBNHDCJIIO; // 0xC4
//   private ObscuredFloat NCFMAKPIDIG; // 0xD8
//   private ObscuredVector3 MAPPDBALOAE; // 0xEC
//   private ObscuredInt OLEFLGBBOFK; // 0x10C
//   private List<MDAPDLLMOMF.DOPLCEEGPAO> FMECFCOEJCJ; // 0x120
//   private bool IMPILOHMHPD; // 0x128
//   private bool AGGBCMGNAEF; // 0x129
//   private List<string> AGJGMNPFMDL; // 0x130
//   private List<string> FLAMMJFKMDO; // 0x138
//   private List<string> NCEGPPKDDMG; // 0x140
//   private List<string> AMEIJCGCCDP; // 0x148
//   private List<string> OBLNHNJPBOJ; // 0x150
//   private List<MGNDHCBAPEN<string, ObscuredFloat>> AKKFNCFAPDO; // 0x158
//   private List<string> NMNPMFBJBPK; // 0x160

// ===== public int EOJFKNELJMG()  [RVA 0x30C25DC]
// MDAPDLLMOMF$$EOJFKNELJMG @ RVA 0x30C25DC

int32_t MDAPDLLMOMF__EOJFKNELJMG(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).OLEFLGBBOFK.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void DPPIEAMHDCI(HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30C25EC]
// MDAPDLLMOMF$$DPPIEAMHDCI @ RVA 0x30C25EC

void MDAPDLLMOMF__DPPIEAMHDCI(MDAPDLLMOMF_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)HEHMPFLAEGE;
  if (HEHMPFLAEGE == 3) {
    pMVar1 = (__this->fields).FNCEJEPEFGA;
    if (pMVar1 == (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) goto LAB_031c263c;
    MDAPDLLMOMF_NHJGACDEAGK__DPPIEAMHDCI(pMVar1,(MethodInfo *)0x3);
    method_00 = extraout_x1;
  }
  else if (HEHMPFLAEGE != 2) {
    if (HEHMPFLAEGE != 1) {
      return;
    }
    pMVar1 = (__this->fields).FNCEJEPEFGA;
    if (pMVar1 == (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) goto LAB_031c263c;
    goto LAB_031c262c;
  }
  pMVar1 = (__this->fields).FPDBFMBILJI;
  if (pMVar1 != (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) {
LAB_031c262c:
    MDAPDLLMOMF_NHJGACDEAGK__DPPIEAMHDCI(pMVar1,method_00);
    return;
  }
LAB_031c263c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DKAHEDLNMBK(HEDFKJBDBFN CJNHFNHJHPE)  [RVA 0x30C26D4]
// MDAPDLLMOMF$$DKAHEDLNMBK @ RVA 0x30C26D4

void MDAPDLLMOMF__DKAHEDLNMBK(MDAPDLLMOMF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BDDHELGFNIA = CJNHFNHJHPE;
  return;
}


// ===== public static float HAFMMFEBNGH(float LINBBAKAFCP, float IKJNICFPCCF, float DEHALKEKNKK)  [RVA 0x30C26DC]
// MDAPDLLMOMF$$HAFMMFEBNGH @ RVA 0x30C26DC

float MDAPDLLMOMF__HAFMMFEBNGH
                (float LINBBAKAFCP,float IKJNICFPCCF,float DEHALKEKNKK,MethodInfo *method)

{
  float fVar1;
  
                    /* try { // try from 031c26e4 to 032c26ef has its CatchHandler @ 031c2868 */
  fVar1 = exp2f((LINBBAKAFCP - IKJNICFPCCF) / DEHALKEKNKK);
  return fVar1;
}


// ===== public MDAPDLLMOMF.NHJGACDEAGK BFDKONCCAJB(HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30C26E8]
// MDAPDLLMOMF$$BFDKONCCAJB @ RVA 0x30C26E8

MDAPDLLMOMF_NHJGACDEAGK_o *
MDAPDLLMOMF__BFDKONCCAJB(MDAPDLLMOMF_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  MDAPDLLMOMF_NHJGACDEAGK_o **ppMVar1;
  
                    /* try { // try from 031c26f0 to 032c2857 has its CatchHandler @ 031c24e4 */
  if ((HEHMPFLAEGE == 2) || (HEHMPFLAEGE != 1)) {
    ppMVar1 = &(__this->fields).FPDBFMBILJI;
  }
  else {
    ppMVar1 = &(__this->fields).FNCEJEPEFGA;
  }
  return *ppMVar1;
}


// ===== public float OBAJCBOGFFM()  [RVA 0x30C270C]
// MDAPDLLMOMF$$OBAJCBOGFFM @ RVA 0x30C270C

float MDAPDLLMOMF__OBAJCBOGFFM(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  local_30.fakeValueActive = (__this->fields).LHBGKMGNOEP.fields.fakeValueActive;
  local_30.inited = (__this->fields).LHBGKMGNOEP.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).LHBGKMGNOEP.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).LHBGKMGNOEP.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).LHBGKMGNOEP.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).LHBGKMGNOEP.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).LHBGKMGNOEP.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== protected override void BBFCCAOAJII()  [RVA 0x30C273C]
// MDAPDLLMOMF$$BBFCCAOAJII @ RVA 0x30C273C

/* WARNING: Removing unreachable block (ram,0x031c340c) */
/* WARNING: Removing unreachable block (ram,0x031c37d0) */

void MDAPDLLMOMF__BBFCCAOAJII(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  System_Xml_XmlNode_o *pSVar9;
  System_Xml_XmlAttributeCollection_o *pSVar10;
  System_Xml_XmlAttribute_o *pSVar11;
  long *plVar12;
  System_String_o *pSVar13;
  System_Char_array *pSVar14;
  System_String_array *pSVar15;
  System_Collections_Generic_List_string__o *pSVar16;
  undefined8 *puVar17;
  long *plVar18;
  System_Object_array *pSVar19;
  Il2CppObject *pIVar20;
  MDAPDLLMOMF_DOPLCEEGPAO_o *__this_00;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_01;
  undefined8 uVar21;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  long lVar22;
  MDAPDLLMOMF_DOPLCEEGPAO_array *pMVar23;
  ulong uVar24;
  int *piVar25;
  float fVar26;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar27;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_d8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_0456629b & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_DOPLCEEGPAO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_5058/*"Damage"*/);
    FUN_01bab630(&StringLiteral_15220/*"Z"*/);
    FUN_01bab630(&StringLiteral_7326/*"IgnoresInvulnerable"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13776/*"Time"*/);
                    /* try { // try from 031c2858 to 032c285b has its CatchHandler @ 031c2864 */
                    /* try { // try from 031c285c to 032c2887 has its CatchHandler @ 031c24e4 */
    FUN_01bab630(&StringLiteral_7325/*"IgnoresBlock"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c2858 with catch @ 031c2864
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c26e4 with catch @ 031c2868
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c26b4 with catch @ 031c286c
                        */
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c2658 with catch @ 031c2870
                        */
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_7119/*"Hit"*/);
                    /* try { // try from 031c2888 to 032c288b has its CatchHandler @ 031c2898 */
    FUN_01bab630(&StringLiteral_7357/*"Impulse"*/);
                    /* catch() { ... } // from try @ 031c2888 with catch @ 031c2898 */
    FUN_01bab630(&StringLiteral_3166/*"AttackingParts"*/);
    FUN_01bab630(&StringLiteral_9529/*"NoCritical"*/);
    FUN_01bab630(&StringLiteral_5737/*"EndFrame ({0}) is outside of attack interval ({1}-{2}) - {3}"*/);
    FUN_01bab630(&StringLiteral_5717/*"End"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
                    /* try { // try from 031c28d0 to 032c28f7 has its CatchHandler @ 031c290c */
    FUN_01bab630(&StringLiteral_3532/*"BodyPart"*/);
    FUN_01bab630(&StringLiteral_12363/*"StartFrame ({0}) is outside of attack interval ({1}-{2}) - {3}"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
                    /* try { // try from 031c28f8 to 032c2903 has its CatchHandler @ 031c24e4 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 031c2904 to 032c290b has its CatchHandler @ 031c290c */
    FUN_01bab630(&StringLiteral_9533/*"NoEffect"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c28d0 with catch @ 031c290c
                       catch(type#2 @ 00000000) { ... } // from try @ 031c2904 with catch @ 031c290c
                        */
    DAT_0456629b = 1;
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if ((pSVar9 == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method),
     pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031c3720;
  pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar10,StringLiteral_9533/*"NoEffect"*/,(MethodInfo *)0x0);
  bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar11,false,(MethodInfo *)0x0);
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  (__this->fields).IMPILOHMHPD = (bool_conflict)(~bVar5 & 1);
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_7325/*"IgnoresBlock"*/,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    (__this->fields).AGGBCMGNAEF = true;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar14 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
    if (pSVar14 == (System_Char_array *)0x0) goto LAB_031c3720;
    if ((int)pSVar14->max_length == 0) goto LAB_031c37d8;
    pSVar14->m_Items[0] = 0x7c;
    if (pSVar13 == (System_String_o *)0x0) goto LAB_031c3720;
    pSVar15 = System_String__Split(pSVar13,pSVar14,1,(MethodInfo *)0x0);
    pSVar16 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar16,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar15,
               Method_System_Collections_Generic_List<string>__ctor__);
    (__this->fields).AGJGMNPFMDL = pSVar16;
    thunk_FUN_01c20e04(&(__this->fields).AGJGMNPFMDL,pSVar16);
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_7326/*"IgnoresInvulnerable"*/,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    (__this->fields).NELGLPNGJNH = true;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar14 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
    if (pSVar14 == (System_Char_array *)0x0) goto LAB_031c3720;
    if ((int)pSVar14->max_length == 0) {
LAB_031c37d8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar14->m_Items[0] = 0x7c;
    if (pSVar13 == (System_String_o *)0x0) goto LAB_031c3720;
    pSVar15 = System_String__Split(pSVar13,pSVar14,1,(MethodInfo *)0x0);
    pSVar16 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar16,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar15,
               Method_System_Collections_Generic_List<string>__ctor__);
    (__this->fields).FLAMMJFKMDO = pSVar16;
    thunk_FUN_01c20e04(&(__this->fields).FLAMMJFKMDO,pSVar16);
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_3166/*"AttackingParts"*/,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_031c2bd4;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c2bd4:
        uVar24 = (*(code *)*puVar17)(plVar12,puVar17[1]);
        if ((uVar24 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01bda71c(plVar12,System_IDisposable_TypeInfo);
          if (plVar12 == (long *)0x0) goto LAB_031c2d78;
          lVar22 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar24 == 0) goto LAB_031c2d4c;
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          goto LAB_031c2d34;
        }
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_031c2c34;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_031c2c34:
        plVar18 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar22 = *plVar18;
        bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar22 + 0x130) < bVar3) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(lVar22 + 0x238))(plVar18,*(undefined8 *)(lVar22 + 0x240));
        if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar10,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        lVar22 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar16 = (__this->fields).OBLNHNJPBOJ;
        if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar15 = (pSVar16->fields)._items;
        (pSVar16->fields)._version = (pSVar16->fields)._version + 1;
        if (pSVar15 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar4 = (pSVar16->fields)._size;
        if (uVar4 < (uint)pSVar15->max_length) {
          (pSVar16->fields)._size = uVar4 + 1;
          pSVar15->m_Items[(int)uVar4] = pSVar13;
          thunk_FUN_01c20e04(pSVar15->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)pSVar13,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    goto LAB_031c3720;
  }
  goto LAB_031c2d78;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar25 = piVar25 + 4;
    if (uVar24 == 0) break;
LAB_031c33c0:
    if (*(System_IDisposable_c **)(piVar25 + -2) == System_IDisposable_TypeInfo) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_031c33f4;
    }
  }
LAB_031c33d8:
  puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_031c33f4:
  (*(code *)*puVar17)(plVar12,puVar17[1]);
LAB_031c3400:
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_7357/*"Impulse"*/,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
    fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,fVar26,
               (MethodInfo *)0x0);
    local_80.fakeValueActive = local_a0.fakeValueActive;
    local_80.inited = local_a0.inited;
    local_80._18_2_ = local_a0._18_2_;
    local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
    local_80.fakeValue = local_a0.fakeValue;
    local_80.currentCryptoKey = local_a0.currentCryptoKey;
    local_80.hiddenValue = local_a0.hiddenValue;
    (__this->fields).CDDOJKNPKJN.fields.fakeValueActive = local_a0.fakeValueActive;
    (__this->fields).CDDOJKNPKJN.fields.inited = local_a0.inited;
    *(undefined2 *)&(__this->fields).CDDOJKNPKJN.fields.field_0x12 = local_a0._18_2_;
    (__this->fields).CDDOJKNPKJN.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
    (__this->fields).CDDOJKNPKJN.fields.fakeValue = local_a0.fakeValue;
    (__this->fields).CDDOJKNPKJN.fields.currentCryptoKey = local_a0.currentCryptoKey;
    (__this->fields).CDDOJKNPKJN.fields.hiddenValue = local_a0.hiddenValue;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
    fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,fVar26,
               (MethodInfo *)0x0);
    local_a0.fakeValueActive = local_c0.fakeValueActive;
    local_a0.inited = local_c0.inited;
    local_a0._18_2_ = local_c0._18_2_;
    local_a0.hiddenValueOldByte4.fields = local_c0.hiddenValueOldByte4.fields;
    local_a0.fakeValue = local_c0.fakeValue;
    local_a0.currentCryptoKey = local_c0.currentCryptoKey;
    local_a0.hiddenValue = local_c0.hiddenValue;
    (__this->fields).LHBNHDCJIIO.fields.fakeValueActive = local_c0.fakeValueActive;
    (__this->fields).LHBNHDCJIIO.fields.inited = local_c0.inited;
    *(undefined2 *)&(__this->fields).LHBNHDCJIIO.fields.field_0x12 = local_c0._18_2_;
    (__this->fields).LHBNHDCJIIO.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_c0.hiddenValueOldByte4.fields;
    (__this->fields).LHBNHDCJIIO.fields.fakeValue = local_c0.fakeValue;
    (__this->fields).LHBNHDCJIIO.fields.currentCryptoKey = local_c0.currentCryptoKey;
    (__this->fields).LHBNHDCJIIO.fields.hiddenValue = local_c0.hiddenValue;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_15220/*"Z"*/,(MethodInfo *)0x0);
    fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_d8,fVar26,
               (MethodInfo *)0x0);
    local_c0.fakeValueActive = local_d8.fakeValueActive;
    local_c0.inited = local_d8.inited;
    local_c0._18_2_ = local_d8._18_2_;
    local_c0.hiddenValueOldByte4.fields = local_d8.hiddenValueOldByte4.fields;
    local_c0.fakeValue = local_d8.fakeValue;
    local_c0.currentCryptoKey = local_d8.currentCryptoKey;
    local_c0.hiddenValue = local_d8.hiddenValue;
    (__this->fields).NCFMAKPIDIG.fields.fakeValueActive = local_d8.fakeValueActive;
    (__this->fields).NCFMAKPIDIG.fields.inited = local_d8.inited;
    *(undefined2 *)&(__this->fields).NCFMAKPIDIG.fields.field_0x12 = local_d8._18_2_;
    (__this->fields).NCFMAKPIDIG.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_d8.hiddenValueOldByte4.fields;
    (__this->fields).NCFMAKPIDIG.fields.fakeValue = local_d8.fakeValue;
    (__this->fields).NCFMAKPIDIG.fields.currentCryptoKey = local_d8.currentCryptoKey;
    (__this->fields).NCFMAKPIDIG.fields.hiddenValue = local_d8.hiddenValue;
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
    lVar22 = (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar9,StringLiteral_4507/*"Combo"*/,(pSVar9->klass->vtable)._51_get_Item.method);
    iVar6 = 0;
    if (lVar22 != 0) {
      pSVar9 = (__this->fields).super.PFONAMNDHOH;
      if (((pSVar9 == (System_Xml_XmlNode_o *)0x0) ||
          (plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                       (pSVar9,StringLiteral_4507/*"Combo"*/,
                                        (pSVar9->klass->vtable)._51_get_Item.method),
          plVar12 == (long *)0x0)) ||
         (pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240)),
         pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031c3720;
      pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar10,StringLiteral_13776/*"Time"*/,(MethodInfo *)0x0);
      iVar6 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,0,(MethodInfo *)0x0);
    }
    CVar27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar6,(MethodInfo *)0x0);
    (__this->fields).OLEFLGBBOFK.fields = CVar27;
    pSVar9 = (__this->fields).super.PFONAMNDHOH;
    if (((pSVar9 != (System_Xml_XmlNode_o *)0x0) &&
        (pSVar9 = (System_Xml_XmlNode_o *)
                  (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar9,StringLiteral_5058/*"Damage"*/,(pSVar9->klass->vtable)._51_get_Item.method),
        pSVar9 != (System_Xml_XmlNode_o *)0x0)) &&
       (pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method),
       pSVar10 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar10,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,fVar26,
                 (MethodInfo *)0x0);
      local_80.fakeValueActive = local_a0.fakeValueActive;
      local_80.inited = local_a0.inited;
      local_80._18_2_ = local_a0._18_2_;
      local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
      local_80.fakeValue = local_a0.fakeValue;
      local_80.currentCryptoKey = local_a0.currentCryptoKey;
      local_80.hiddenValue = local_a0.hiddenValue;
      (__this->fields).LHBGKMGNOEP.fields.fakeValueActive = local_a0.fakeValueActive;
      (__this->fields).LHBGKMGNOEP.fields.inited = local_a0.inited;
      *(undefined2 *)&(__this->fields).LHBGKMGNOEP.fields.field_0x12 = local_a0._18_2_;
      (__this->fields).LHBGKMGNOEP.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
      (__this->fields).LHBGKMGNOEP.fields.fakeValue = local_a0.fakeValue;
      (__this->fields).LHBGKMGNOEP.fields.currentCryptoKey = local_a0.currentCryptoKey;
      (__this->fields).LHBGKMGNOEP.fields.hiddenValue = local_a0.hiddenValue;
      pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method);
      if (pSVar10 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar10,StringLiteral_9529/*"NoCritical"*/,(MethodInfo *)0x0);
        bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar11,false,(MethodInfo *)0x0);
        (__this->fields).MBACAJPGOCL = bVar5;
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method);
        if (pSVar10 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_3532/*"BodyPart"*/,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).AFBLIDFFBMK = pSVar13;
          thunk_FUN_01c20e04();
          MDAPDLLMOMF__NDOIJGMLKBM(__this,pSVar9,method_00);
          return;
        }
      }
    }
  }
  goto LAB_031c3720;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar25 = piVar25 + 4;
    if (uVar24 == 0) break;
LAB_031c2d34:
    if (*(System_IDisposable_c **)(piVar25 + -2) == System_IDisposable_TypeInfo) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_031c2d68;
    }
  }
LAB_031c2d4c:
  puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_031c2d68:
  (*(code *)*puVar17)(plVar12,puVar17[1]);
LAB_031c2d78:
  pSVar16 = (__this->fields).OBLNHNJPBOJ;
  if (pSVar16 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar9 = (__this->fields).super.PFONAMNDHOH;
    (__this->fields).FHHPDAPFIOJ = 0 < (pSVar16->fields)._size;
    if ((pSVar9 != (System_Xml_XmlNode_o *)0x0) &&
       (plVar12 = (long *)(*(pSVar9->klass->vtable)._13_get_ChildNodes.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._13_get_ChildNodes.method),
       plVar12 != (long *)0x0)) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pCVar1 = &(__this->fields).super.IELLEFEFFJD;
      pCVar2 = &(__this->fields).super.DMNCBADHGJP;
      do {
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_031c2e1c;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c2e1c:
        uVar24 = (*(code *)*puVar17)(plVar12,puVar17[1]);
        if ((uVar24 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01bda71c(plVar12,System_IDisposable_TypeInfo);
          if (plVar12 == (long *)0x0) goto LAB_031c3400;
          lVar22 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar24 == 0) goto LAB_031c33d8;
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          goto LAB_031c33c0;
        }
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_031c2e7c;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_031c2e7c:
        plVar18 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar18);
        }
        pSVar13 = (System_String_o *)
                  (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
        bVar5 = System_String__op_Equality(pSVar13,StringLiteral_7119/*"Hit"*/,(MethodInfo *)0x0);
        if (bVar5) {
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_12346/*"Start"*/,(MethodInfo *)0x0);
          iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.IELLEFEFFJD.fields,(MethodInfo *)0x0);
          iVar6 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,iVar6,(MethodInfo *)0x0);
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_5717/*"End"*/,(MethodInfo *)0x0);
          iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.DMNCBADHGJP.fields,(MethodInfo *)0x0);
          iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,iVar7,(MethodInfo *)0x0);
          iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.IELLEFEFFJD.fields,(MethodInfo *)0x0);
          if ((iVar6 < iVar8) ||
             (iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (__this->fields).super.DMNCBADHGJP.fields,(MethodInfo *)0x0),
             iVar8 < iVar6)) {
            pSVar19 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            local_c0.currentCryptoKey = iVar6;
            pIVar20 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_c0);
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((int)pSVar19->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[0] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items,pIVar20);
            local_80._8_8_ = *(undefined8 *)&(__this->fields).super.IELLEFEFFJD.fields.fakeValue;
            local_80.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
            local_80.hiddenValue = (pCVar1->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_80);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[1] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 1,pIVar20);
            local_a0._8_8_ = *(undefined8 *)&(__this->fields).super.DMNCBADHGJP.fields.fakeValue;
            local_a0.currentCryptoKey = (pCVar2->fields).currentCryptoKey;
            local_a0.hiddenValue = (pCVar2->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_a0);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[2] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 2,pIVar20);
            if ((pSVar13 != (System_String_o *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pSVar13,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[3] = (Il2CppObject *)pSVar13;
            thunk_FUN_01c20e04(pSVar19->m_Items + 3,pSVar13);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_12363/*"StartFrame ({0}) is outside of attack interval ({1}-{2}) - {3}"*/,pSVar19,(MethodInfo *)0x0);
          }
          iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.IELLEFEFFJD.fields,(MethodInfo *)0x0);
          if ((iVar7 < iVar8) ||
             (iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (__this->fields).super.DMNCBADHGJP.fields,(MethodInfo *)0x0),
             iVar8 < iVar7)) {
            pSVar19 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            local_c0.currentCryptoKey = iVar7;
            pIVar20 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_c0);
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((int)pSVar19->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[0] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items,pIVar20);
            local_80._8_8_ = *(undefined8 *)&(__this->fields).super.IELLEFEFFJD.fields.fakeValue;
            local_80.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
            local_80.hiddenValue = (pCVar1->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_80);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[1] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 1,pIVar20);
            local_a0._8_8_ = *(undefined8 *)&(__this->fields).super.DMNCBADHGJP.fields.fakeValue;
            local_a0.currentCryptoKey = (pCVar2->fields).currentCryptoKey;
            local_a0.hiddenValue = (pCVar2->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_a0);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[2] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 2,pIVar20);
            if ((pSVar13 != (System_String_o *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pSVar13,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[3] = (Il2CppObject *)pSVar13;
            thunk_FUN_01c20e04(pSVar19->m_Items + 3,pSVar13);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_5737/*"EndFrame ({0}) is outside of attack interval ({1}-{2}) - {3}"*/,pSVar19,(MethodInfo *)0x0);
          }
          __this_00 = (MDAPDLLMOMF_DOPLCEEGPAO_o *)
                      thunk_FUN_01bda818(MDAPDLLMOMF_DOPLCEEGPAO_TypeInfo);
          MDAPDLLMOMF_DOPLCEEGPAO___ctor(__this_00,pSVar13,iVar6,iVar7,in_x4);
          lVar22 = Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_Add__;
          __this_01 = (__this->fields).FMECFCOEJCJ;
          if (__this_01 == (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar23 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pMVar23 == (MDAPDLLMOMF_DOPLCEEGPAO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (__this_01->fields)._size;
          if (uVar4 < (uint)pMVar23->max_length) {
            (__this_01->fields)._size = uVar4 + 1;
            pMVar23->m_Items[(int)uVar4] = __this_00;
            thunk_FUN_01c20e04(pMVar23->m_Items + (int)uVar4,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
LAB_031c3720:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ObscuredVector3 GEANKLAHCAE()  [RVA 0x30C41C4]
// MDAPDLLMOMF$$GEANKLAHCAE @ RVA 0x30C41C4

/* WARNING: Type propagation algorithm not settling */

void MDAPDLLMOMF__GEANKLAHCAE
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *__return_storage_ptr__,
               MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  float fVar2;
  float fVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  undefined8 uVar7;
  
  pCVar1 = &(__this->fields).MAPPDBALOAE;
  uVar7 = *(undefined8 *)&(__this->fields).MAPPDBALOAE.fields.fakeValue.fields.z;
  fVar2 = (pCVar1->fields).fakeValue.fields.x;
  fVar3 = (pCVar1->fields).fakeValue.fields.y;
  pCVar1 = &(__this->fields).MAPPDBALOAE;
  iVar4 = (pCVar1->fields).hiddenValue.fields.z;
  iVar5 = (__this->fields).MAPPDBALOAE.fields.currentCryptoKey;
  iVar6 = (__this->fields).MAPPDBALOAE.fields.hiddenValue.fields.x;
  (__return_storage_ptr__->fields).hiddenValue.fields.y = (pCVar1->fields).hiddenValue.fields.y;
  (__return_storage_ptr__->fields).hiddenValue.fields.z = iVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue.fields.x = iVar6;
  *(undefined8 *)&(__return_storage_ptr__->fields).fakeValue.fields.z = uVar7;
  (__return_storage_ptr__->fields).fakeValue.fields.x = fVar2;
  (__return_storage_ptr__->fields).fakeValue.fields.y = fVar3;
  return;
}


// ===== public List<MGNDHCBAPEN<string, ObscuredFloat>> FBEJLHNDPDC()  [RVA 0x30C41D4]
// MDAPDLLMOMF$$FBEJLHNDPDC @ RVA 0x30C41D4

System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *
MDAPDLLMOMF__FBEJLHNDPDC(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).AKKFNCFAPDO;
}


// ===== public List<string> ALNDBMKHMHG()  [RVA 0x30C41DC]
// MDAPDLLMOMF$$ALNDBMKHMHG @ RVA 0x30C41DC

System_Collections_Generic_List_string__o *
MDAPDLLMOMF__ALNDBMKHMHG(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).AGJGMNPFMDL;
}


// ===== public HEDFKJBDBFN BHCGGCOIGLI()  [RVA 0x30C41E4]
// MDAPDLLMOMF$$BHCGGCOIGLI @ RVA 0x30C41E4

int32_t MDAPDLLMOMF__BHCGGCOIGLI(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).BDDHELGFNIA;
}


// ===== public bool OFDKNIFNHGF()  [RVA 0x30C41EC]
// MDAPDLLMOMF$$OFDKNIFNHGF @ RVA 0x30C41EC

bool MDAPDLLMOMF__OFDKNIFNHGF(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).NELGLPNGJNH;
}


// ===== private void NDOIJGMLKBM(XmlNode PCILCDBLOBA)  [RVA 0x30C3B18]
// MDAPDLLMOMF$$NDOIJGMLKBM @ RVA 0x30C3B18

/* WARNING: Removing unreachable block (ram,0x031c409c) */

void MDAPDLLMOMF__NDOIJGMLKBM
               (MDAPDLLMOMF_o *__this,System_Xml_XmlNode_o *PCILCDBLOBA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *item;
  MGNDHCBAPEN_string__ObscuredFloat__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Object_array *args;
  undefined8 uVar9;
  long lVar10;
  MGNDHCBAPEN_string__ObscuredFloat__array *pMVar11;
  System_String_array *pSVar12;
  ulong uVar13;
  int *piVar14;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this_02;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o local_90;
  
  if ((DAT_0456629c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_ObscuredFloat>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_ObscuredFloat>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5058/*"Damage"*/);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_12436/*"Strange node name xml {0}"*/);
    FUN_01bab630(&StringLiteral_11991/*"Shift"*/);
    DAT_0456629c = 1;
  }
  if ((PCILCDBLOBA == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(PCILCDBLOBA->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (PCILCDBLOBA,(PCILCDBLOBA->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_031c3cb4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c3cb4:
    uVar13 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar13 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar4;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 == 0) goto LAB_031c400c;
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_031c3d14;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031c3d14:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
    a = (System_String_o *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    item = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_11991/*"Shift"*/,(MethodInfo *)0x0);
    CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(a,StringLiteral_5058/*"Damage"*/,(MethodInfo *)0x0);
    if (bVar3) {
      __this_02 = (__this->fields).AKKFNCFAPDO;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                (&local_90,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = (MGNDHCBAPEN_string__ObscuredFloat__o *)
                  thunk_FUN_01bda818(MGNDHCBAPEN<string,_ObscuredFloat>_TypeInfo);
      MGNDHCBAPEN<object,_ObscuredFloat>___ctor
                ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)item,&local_90,
                 Method_MGNDHCBAPEN<string,_ObscuredFloat>__ctor__);
      lVar10 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_Add__;
      if (__this_02 == (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar11 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pMVar11 == (MGNDHCBAPEN_string__ObscuredFloat__array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pMVar11->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pMVar11->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      bVar3 = System_String__op_Equality(a,StringLiteral_5266/*"Defense"*/,(MethodInfo *)0x0);
      lVar10 = Method_System_Collections_Generic_List<string>_Add__;
      if (bVar3) {
        __this_01 = (__this->fields).NMNPMFBJBPK;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((a != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar10 == 0)) {
          uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar9,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)a;
        thunk_FUN_01c20e04(args->m_Items,a);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_12436/*"Strange node name xml {0}"*/,args,(MethodInfo *)0x0);
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_031c4028;
    }
  }
LAB_031c400c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031c4028:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public string BJMLHCDKIFI()  [RVA 0x30C41F4]
// MDAPDLLMOMF$$BJMLHCDKIFI @ RVA 0x30C41F4

System_String_o * MDAPDLLMOMF__BJMLHCDKIFI(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).AFBLIDFFBMK;
}


// ===== public float CNJBMGIACNN()  [RVA 0x30C41FC]
// MDAPDLLMOMF$$CNJBMGIACNN @ RVA 0x30C41FC

float MDAPDLLMOMF__CNJBMGIACNN(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  local_30.fakeValueActive = (__this->fields).LHBNHDCJIIO.fields.fakeValueActive;
  local_30.inited = (__this->fields).LHBNHDCJIIO.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).LHBNHDCJIIO.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).LHBNHDCJIIO.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).LHBNHDCJIIO.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).LHBNHDCJIIO.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).LHBNHDCJIIO.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== public void .ctor()  [RVA 0x30C422C]
// MDAPDLLMOMF$$.ctor @ RVA 0x30C422C

void MDAPDLLMOMF___ctor(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar1;
  MDAPDLLMOMF_NHJGACDEAGK_o **ppMVar2;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_00;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_0456629d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_NHJGACDEAGK_TypeInfo);
    DAT_0456629d = 1;
    method = extraout_x1;
  }
  pMVar1 = (MDAPDLLMOMF_NHJGACDEAGK_o *)thunk_FUN_01bda818(MDAPDLLMOMF_NHJGACDEAGK_TypeInfo,method);
  MDAPDLLMOMF_NHJGACDEAGK___ctor(pMVar1,1.0,1.0,false,false,in_x3);
  ppMVar2 = &(__this->fields).FNCEJEPEFGA;
  *ppMVar2 = pMVar1;
  thunk_FUN_01c20e04(ppMVar2,pMVar1);
  pMVar1 = (MDAPDLLMOMF_NHJGACDEAGK_o *)thunk_FUN_01bda818(MDAPDLLMOMF_NHJGACDEAGK_TypeInfo);
  MDAPDLLMOMF_NHJGACDEAGK___ctor(pMVar1,1.0,1.0,false,false,in_x3);
  ppMVar2 = &(__this->fields).FPDBFMBILJI;
  *ppMVar2 = pMVar1;
  thunk_FUN_01c20e04(ppMVar2,pMVar1);
  __this_00 = (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>__ctor__);
  (__this->fields).FMECFCOEJCJ = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).FMECFCOEJCJ,__this_00);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).OBLNHNJPBOJ = pSVar3;
  thunk_FUN_01c20e04(&(__this->fields).OBLNHNJPBOJ,pSVar3);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>__ctor__);
  (__this->fields).AKKFNCFAPDO = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).AKKFNCFAPDO,__this_01);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).NMNPMFBJBPK = pSVar3;
  thunk_FUN_01c20e04(&(__this->fields).NMNPMFBJBPK,pSVar3);
  JADGCGOJLJB___ctor((JADGCGOJLJB_o *)__this,4,(MethodInfo *)0x0);
  return;
}


// ===== public string OKCANGOIHBI(int HBGCLHGMCKD)  [RVA 0x30C4490]
// MDAPDLLMOMF$$OKCANGOIHBI @ RVA 0x30C4490

System_String_o *
MDAPDLLMOMF__OKCANGOIHBI(MDAPDLLMOMF_o *__this,int32_t HBGCLHGMCKD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_00;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456629e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_GetEnumerator__);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456629e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).FMECFCOEJCJ;
  if (__this_00 != (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_Dispose__
                  );
        return string_TypeInfo->static_fields->Empty;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &local_48.fields._current[1].monitor,(MethodInfo *)0x0);
      if ((iVar3 <= HBGCLHGMCKD) &&
         (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              &pIVar1[2].monitor,(MethodInfo *)0x0), HBGCLHGMCKD <= iVar3)) {
        pIVar4 = pIVar1[1].klass;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_Dispose__
                  );
        return (System_String_o *)pIVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool FCGNHIOIABI()  [RVA 0x30C4640]
// MDAPDLLMOMF$$FCGNHIOIABI @ RVA 0x30C4640

bool MDAPDLLMOMF__FCGNHIOIABI(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).IMPILOHMHPD;
}


// ===== public List<string> KIBPFFKIANB()  [RVA 0x30C4648]
// MDAPDLLMOMF$$KIBPFFKIANB @ RVA 0x30C4648

System_Collections_Generic_List_string__o *
MDAPDLLMOMF__KIBPFFKIANB(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).FLAMMJFKMDO;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x30C4650]
// MDAPDLLMOMF$$RandomizeObscuredVars @ RVA 0x30C4650

void MDAPDLLMOMF__RandomizeObscuredVars(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  System_Action_MDAPDLLMOMF_DOPLCEEGPAO__o **ppSVar1;
  System_Action_MGNDHCBAPEN_string__ObscuredFloat___o **ppSVar2;
  MethodInfo *in_x2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this_00;
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar3;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_01;
  System_Action_MGNDHCBAPEN_string__ObscuredFloat___o *action;
  System_Action_MDAPDLLMOMF_DOPLCEEGPAO__o *action_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  
  if ((DAT_0456629f & 1) == 0) {
    FUN_01bab630(&System_Action<MGNDHCBAPEN<string,_ObscuredFloat>>_TypeInfo);
    FUN_01bab630(&System_Action<MDAPDLLMOMF_DOPLCEEGPAO>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_ForEach__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_ForEach__);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    FUN_01bab630(&Method_MDAPDLLMOMF_<>c_JFCCDKLBFKA__);
    FUN_01bab630(&Method_MDAPDLLMOMF_<>c_LLGIIKHMILE__);
    FUN_01bab630(&MDAPDLLMOMF_<>c_TypeInfo);
    DAT_0456629f = 1;
  }
  JADGCGOJLJB__RandomizeObscuredVars((JADGCGOJLJB_o *)__this,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).LHBGKMGNOEP,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).CDDOJKNPKJN,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).LHBNHDCJIIO,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).NCFMAKPIDIG,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__GPJJDLBJOAL
            (&(__this->fields).MAPPDBALOAE,(MethodInfo *)0x0);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).OLEFLGBBOFK;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  pMVar3 = (__this->fields).FNCEJEPEFGA;
  if (pMVar3 != (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
              (&(pMVar3->fields).JHLJELAKADM,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
              (&(pMVar3->fields).HKPPIFKAFMP,(MethodInfo *)0x0);
    pMVar3 = (__this->fields).FPDBFMBILJI;
    if (pMVar3 != (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) {
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
                (&(pMVar3->fields).JHLJELAKADM,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
                (&(pMVar3->fields).HKPPIFKAFMP,(MethodInfo *)0x0);
      __this_01 = (__this->fields).FMECFCOEJCJ;
      if ((MDAPDLLMOMF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = MDAPDLLMOMF_<>c_TypeInfo->static_fields->__9__71_0;
      if (action_00 == (System_Action_MDAPDLLMOMF_DOPLCEEGPAO__o *)0x0) {
        if ((MDAPDLLMOMF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action_00 = (System_Action_MDAPDLLMOMF_DOPLCEEGPAO__o *)
                    thunk_FUN_01bda818(System_Action<MDAPDLLMOMF_DOPLCEEGPAO>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar1 = &MDAPDLLMOMF_<>c_TypeInfo->static_fields->__9__71_0;
        *ppSVar1 = action_00;
        thunk_FUN_01c20e04(ppSVar1,action_00);
      }
      if (__this_01 != (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_01,
                   (System_Action_T__o *)action_00,
                   Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_ForEach__);
        __this_00 = (__this->fields).AKKFNCFAPDO;
        if ((MDAPDLLMOMF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = MDAPDLLMOMF_<>c_TypeInfo->static_fields->__9__71_1;
        if (action == (System_Action_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0) {
                    /* try { // try from 031c4848 to 032c48db has its CatchHandler @ 031c4848
                       catch() { ... } // from try @ 031c4848 with catch @ 031c4848
                       catch() { ... } // from try @ 031c4900 with catch @ 031c4848
                       catch() { ... } // from try @ 031c4984 with catch @ 031c4848
                       catch() { ... } // from try @ 031c4a1c with catch @ 031c4848 */
          if ((MDAPDLLMOMF_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_MGNDHCBAPEN_string__ObscuredFloat___o *)
                   thunk_FUN_01bda818(System_Action<MGNDHCBAPEN<string,_ObscuredFloat>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &MDAPDLLMOMF_<>c_TypeInfo->static_fields->__9__71_1;
          *ppSVar2 = action;
          thunk_FUN_01c20e04(ppSVar2,action);
        }
        if (__this_00 !=
            (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (System_Action_T__o *)action,
                     Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_ForEach__
                    );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool OHFABGPJDCJ()  [RVA 0x30C48F0]
// MDAPDLLMOMF$$OHFABGPJDCJ @ RVA 0x30C48F0

bool MDAPDLLMOMF__OHFABGPJDCJ(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).AGGBCMGNAEF;
}


// ===== public float OHNNJCBAGBP()  [RVA 0x30C48F8]
// MDAPDLLMOMF$$OHNNJCBAGBP @ RVA 0x30C48F8

float MDAPDLLMOMF__OHNNJCBAGBP(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
                    /* try { // try from 031c48f8 to 032c48ff has its CatchHandler @ 031c498c */
                    /* try { // try from 031c4900 to 032c497f has its CatchHandler @ 031c4848 */
  local_30.fakeValueActive = (__this->fields).CDDOJKNPKJN.fields.fakeValueActive;
  local_30.inited = (__this->fields).CDDOJKNPKJN.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).CDDOJKNPKJN.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).CDDOJKNPKJN.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).CDDOJKNPKJN.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).CDDOJKNPKJN.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).CDDOJKNPKJN.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== public List<string> JGFIBKJLFAD()  [RVA 0x30C4928]
// MDAPDLLMOMF$$JGFIBKJLFAD @ RVA 0x30C4928

System_Collections_Generic_List_string__o *
MDAPDLLMOMF__JGFIBKJLFAD(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).NMNPMFBJBPK;
}


// ===== public bool AGHHIDMIFAH()  [RVA 0x30C4930]
// MDAPDLLMOMF$$AGHHIDMIFAH @ RVA 0x30C4930

bool MDAPDLLMOMF__AGHHIDMIFAH(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).MBACAJPGOCL;
}


// ===== public bool NONJKPJJGFE()  [RVA 0x30C4938]
// MDAPDLLMOMF$$NONJKPJJGFE @ RVA 0x30C4938

bool MDAPDLLMOMF__NONJKPJJGFE(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).FHHPDAPFIOJ;
}


// ===== public float BJNBHBMMPHE()  [RVA 0x30C4940]
// MDAPDLLMOMF$$BJNBHBMMPHE @ RVA 0x30C4940

float MDAPDLLMOMF__BJNBHBMMPHE(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  local_30.fakeValueActive = (__this->fields).NCFMAKPIDIG.fields.fakeValueActive;
  local_30.inited = (__this->fields).NCFMAKPIDIG.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).NCFMAKPIDIG.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).NCFMAKPIDIG.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).NCFMAKPIDIG.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).NCFMAKPIDIG.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).NCFMAKPIDIG.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== public List<string> DKLJAAAPBDL()  [RVA 0x30C4970]
// MDAPDLLMOMF$$DKLJAAAPBDL @ RVA 0x30C4970

System_Collections_Generic_List_string__o *
MDAPDLLMOMF__DKLJAAAPBDL(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  return (__this->fields).OBLNHNJPBOJ;
}

