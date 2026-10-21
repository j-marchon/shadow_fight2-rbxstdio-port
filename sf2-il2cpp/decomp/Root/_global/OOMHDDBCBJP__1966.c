// TypeDefIndex 1966
// Namespace: 
// public class OOMHDDBCBJP
// Fields:
//   public const string MBKBGAPLMMB = "base_";
//   public const string MFFFMAEGPHM = "active_";
//   public const string JBEKHBOEFJG = "pressed_";
//   public const string AMHKMMKDPKF = "locked_";
//   public const string DIFDOONCGPJ = "locked_active_";
//   protected OLKPEJMEBPJ LFJPDELEIHG; // 0x10
//   protected string DEKCPPOJFEH; // 0x18
//   private ObscuredInt JDNKKGPNHPB; // 0x20
//   protected MEJIKMPNBNL IAJPHAAMKPC; // 0x30
//   protected Vector2 BBCFCIAPOKE; // 0x38
//   protected string FHPNAJENHNG; // 0x40
//   protected string ICPECIILDFJ; // 0x48
//   protected string APBICPEOMOM; // 0x50
//   private string <OKDCDPMNNJJ>k__BackingField; // 0x58
//   protected string NDEFOHKEFJD; // 0x60
//   protected string BJMHBMDFFPA; // 0x68
//   protected string CNHHLPPHNCO; // 0x70
//   protected string EEENDKPCOPF; // 0x78
//   protected string LKDDDKIHHGD; // 0x80
//   protected bool CILMHNDFBPH; // 0x88
//   public readonly string LNKEPHFHPLP; // 0x90
//   protected List<string> IJKFPEPDAKK; // 0x98
//   protected List<AFFHKININGD> HDDNEKLMLMF; // 0xA0
//   protected DPDDOKKMMOM CIHKJLAGDLJ; // 0xA8
//   public bool HHDBIGKBMEC; // 0xB0
//   protected bool KANKFCNHDPA; // 0xB1
//   public ushort AELJGHFFPPC; // 0xB2
//   protected ushort JANAIIBBHIK; // 0xB4
//   protected ushort IJEMNNPDBEM; // 0xB6
//   protected ushort KIHDFNGKPGN; // 0xB8
//   private string <CPBEOCBNJJN>k__BackingField; // 0xC0

// ===== public string JKFEMMGGLGJ()  [RVA 0x3284B54]
// OOMHDDBCBJP$$JKFEMMGGLGJ @ RVA 0x3284B54

System_String_o * OOMHDDBCBJP__JKFEMMGGLGJ(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045672ac & 1) == 0) {
    FUN_01bab630(&StringLiteral_16661/*"base_"*/);
    DAT_045672ac = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_16661/*"base_"*/,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== public List<AFFHKININGD> JIELIBJFMHD()  [RVA 0x3284BA0]
// OOMHDDBCBJP$$JIELIBJFMHD @ RVA 0x3284BA0

System_Collections_Generic_List_AFFHKININGD__o *
OOMHDDBCBJP__JIELIBJFMHD(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).HDDNEKLMLMF;
}


// ===== public virtual void LLCONNGHGKD(long LFJGFLNMBMC)  [RVA 0x3284BA8]
// OOMHDDBCBJP$$LLCONNGHGKD @ RVA 0x3284BA8

void OOMHDDBCBJP__LLCONNGHGKD(OOMHDDBCBJP_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  int64_t extraout_x1;
  
  if ((DAT_045672ad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_3430/*"Battle::update ERROR - calling ancestor method. Must call BattleDaily::update or BattlePeriodic::update instead"*/);
    DAT_045672ad = 1;
    LFJGFLNMBMC = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,LFJGFLNMBMC);
  }
  UnityEngine_Debug__LogError(StringLiteral_3430/*"Battle::update ERROR - calling ancestor method. Must call BattleDaily::update or BattlePeriodic::update instead"*/,(MethodInfo *)0x0);
  return;
}


// ===== public virtual AFFHKININGD INCIBBGABCB(string KGLJICLJHEL)  [RVA 0x3284C10]
// OOMHDDBCBJP$$INCIBBGABCB @ RVA 0x3284C10

/* WARNING: Removing unreachable block (ram,0x03384f38) */

AFFHKININGD_o *
OOMHDDBCBJP__INCIBBGABCB(OOMHDDBCBJP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  AFFHKININGD_o *pAVar3;
  System_Xml_XmlNode_o *__this_01;
  System_Xml_XmlNodeList_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  MethodInfo *method_00;
  DPDDOKKMMOM_o *pDVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  
  if ((DAT_045672ae & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 03384c58 to 03484c7f has its CatchHandler @ 03384f4c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672ae = 1;
  }
  __this_00 = (__this->fields).IJKFPEPDAKK;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<string>_Contains__;
    bVar2 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)KGLJICLJHEL,
                       (MethodInfo_26E513C *)
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (!bVar2) {
      return (AFFHKININGD_o *)0x0;
    }
                    /* try { // try from 03384cb4 to 03484cdf has its CatchHandler @ 03384f48 */
    pAVar3 = OOMHDDBCBJP__PFAOOMAGCHN(__this,KGLJICLJHEL,method_00);
    if (pAVar3 != (AFFHKININGD_o *)0x0) {
      return pAVar3;
    }
    pDVar8 = (__this->fields).CIHKJLAGDLJ;
    if (((pDVar8 != (DPDDOKKMMOM_o *)0x0) &&
        (__this_01 = (pDVar8->fields).DMLGJFCNNJF, __this_01 != (System_Xml_XmlNode_o *)0x0)) &&
       (pSVar4 = System_Xml_XmlNode__SelectNodes(__this_01,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0),
       pSVar4 != (System_Xml_XmlNodeList_o *)0x0)) {
      plVar5 = (long *)(*(pSVar4->klass->vtable)._8_GetEnumerator.methodPtr)
                                 (pSVar4,(pSVar4->klass->vtable)._8_GetEnumerator.method);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d4c with catch @ 03384f34 */
        FUN_01bab8c8();
      }
                    /* try { // try from 03384d20 to 03484d27 has its CatchHandler @ 03384f38 */
      uVar12 = 0;
      do {
        lVar9 = *plVar5;
                    /* try { // try from 03384d30 to 03484d37 has its CatchHandler @ 03384f28 */
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
                    /* try { // try from 03384d44 to 03484d47 has its CatchHandler @ 03384f30 */
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03384d68 to 03484d6f has its CatchHandler @ 03384f20 */
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03384d74;
            }
                    /* try { // try from 03384d4c to 03484d57 has its CatchHandler @ 03384f34 */
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03384d74:
                    /* try { // try from 03384d78 to 03484d7f has its CatchHandler @ 03384f1c */
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          pAVar3 = (AFFHKININGD_o *)0x0;
          goto LAB_03384e8c;
        }
                    /* try { // try from 03384d84 to 03484da7 has its CatchHandler @ 03384f24 */
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03384dd4;
            }
                    /* try { // try from 03384da8 to 03484edf has its CatchHandler @ 03384ac8 */
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03384dd4:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d30 with catch @ 03384f28 */
          FUN_01bab8c8();
        }
        lVar9 = *plVar7;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* catch() { ... } // from try @ 03384d68 with catch @ 03384f20 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d84 with catch @ 03384f24 */
          FUN_01babc64(plVar7);
        }
        __this_02 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(lVar9 + 0x238))(plVar7,*(undefined8 *)(lVar9 + 0x240));
        if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384ef4 with catch @ 03384f2c */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_02,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar2) goto LAB_03384e6c;
        uVar12 = uVar12 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d44 with catch @ 03384f30 */
  FUN_01bab8c8();
LAB_03384e6c:
  pAVar3 = (AFFHKININGD_o *)
           (*(__this->klass->vtable)._7_PLMHPLMOBIO.methodPtr)
                     (__this,plVar7,(ulong)uVar12,(__this->klass->vtable)._7_PLMHPLMOBIO.method);
LAB_03384e8c:
  plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03384ee8 to 03484eeb has its CatchHandler @ 03384f44 */
                    /* try { // try from 03384eec to 03484eef has its CatchHandler @ 03384f40 */
                    /* try { // try from 03384ef0 to 03484ef3 has its CatchHandler @ 03384f3c */
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03384ef4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 03384ee0 to 03484ee7 has its CatchHandler @ 03384f50 */
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03384ef4:
                    /* try { // try from 03384ef4 to 03484ef7 has its CatchHandler @ 03384f2c */
                    /* try { // try from 03384ef8 to 03484efb has its CatchHandler @ 03384f18 */
                    /* try { // try from 03384efc to 03484eff has its CatchHandler @ 03384f14 */
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
                    /* try { // try from 03384f04 to 03484f07 has its CatchHandler @ 03384f10 */
                    /* try { // try from 03384f08 to 03484f67 has its CatchHandler @ 03384ac8 */
                    /* catch() { ... } // from try @ 03384f04 with catch @ 03384f10 */
                    /* catch() { ... } // from try @ 03384efc with catch @ 03384f14 */
                    /* catch() { ... } // from try @ 03384ef8 with catch @ 03384f18 */
                    /* catch() { ... } // from try @ 03384d78 with catch @ 03384f1c */
  return pAVar3;
}


// ===== public MEJIKMPNBNL AGFDCIBNAGM()  [RVA 0x328517C]
// OOMHDDBCBJP$$AGFDCIBNAGM @ RVA 0x328517C

MEJIKMPNBNL_o * OOMHDDBCBJP__AGFDCIBNAGM(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).IAJPHAAMKPC;
}


// ===== protected virtual AFFHKININGD IOJIEDAEOBN(int DPJIDNBJIBG)  [RVA 0x3285184]
// OOMHDDBCBJP$$IOJIEDAEOBN @ RVA 0x3285184

/* WARNING: Removing unreachable block (ram,0x033853c0) */
/* WARNING: Removing unreachable block (ram,0x033853f0) */
/* WARNING: Removing unreachable block (ram,0x03385418) */

AFFHKININGD_o *
OOMHDDBCBJP__IOJIEDAEOBN(OOMHDDBCBJP_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *__this_00;
  System_Xml_XmlNodeList_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  AFFHKININGD_o *pAVar7;
  DPDDOKKMMOM_o *pDVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
                    /* try { // try from 0338518c to 03485193 has its CatchHandler @ 0338525c */
                    /* try { // try from 033851a4 to 034851ab has its CatchHandler @ 03385254 */
  if ((DAT_045672af & 1) == 0) {
                    /* try { // try from 033851b4 to 034851bb has its CatchHandler @ 03385244 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033851c8 to 034851cf has its CatchHandler @ 03385248 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 033851d4 to 034851df has its CatchHandler @ 03385258 */
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    DAT_045672af = 1;
  }
  pDVar8 = (__this->fields).CIHKJLAGDLJ;
                    /* try { // try from 033851e8 to 0348520b has its CatchHandler @ 03385260 */
  if (((pDVar8 == (DPDDOKKMMOM_o *)0x0) ||
      (__this_00 = (pDVar8->fields).DMLGJFCNNJF, __this_00 == (System_Xml_XmlNode_o *)0x0)) ||
     (pSVar3 = System_Xml_XmlNode__SelectNodes(__this_00,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0),
     pSVar3 == (System_Xml_XmlNodeList_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0338520c to 03485237 has its CatchHandler @ 03385074 */
  plVar4 = (long *)(*(pSVar3->klass->vtable)._8_GetEnumerator.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._8_GetEnumerator.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03385238 to 0348523b has its CatchHandler @ 03385250 */
  iVar12 = 0;
  do {
                    /* try { // try from 0338523c to 0348523f has its CatchHandler @ 0338524c */
    lVar9 = *plVar4;
                    /* try { // try from 03385240 to 03485277 has its CatchHandler @ 03385074 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851b4 with catch @ 03385244
                        */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851c8 with catch @ 03385248
                        */
    if (uVar10 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338523c with catch @ 0338524c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03385238 with catch @ 03385250
                        */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851a4 with catch @ 03385254
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851d4 with catch @ 03385258
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338518c with catch @ 0338525c
                        */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0338527c to 034852a3 has its CatchHandler @ 03385074 */
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03385288;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851e8 with catch @ 03385260
                        */
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 03385278 to 0348527b has its CatchHandler @ 0338529c */
LAB_03385288:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)0x0;
      break;
    }
    lVar9 = *plVar4;
                    /* catch() { ... } // from try @ 03385278 with catch @ 0338529c */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 033852a4 to 034852ab has its CatchHandler @ 033852c0 */
    if (uVar10 != 0) {
                    /* try { // try from 033852ac to 034852b7 has its CatchHandler @ 03385074 */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 033852b8 to 034852bf has its CatchHandler @ 033852c0 */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_033852e8;
        }
        uVar10 = uVar10 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033852a4 with catch @ 033852c0
                       catch(type#2 @ 00000000) { ... } // from try @ 033852b8 with catch @ 033852c0
                        */
        piVar11 = piVar11 + 4;
                    /* try { // try from 033852c4 to 034861df has its CatchHandler @ 033852c4
                       catch() { ... } // from try @ 033852c4 with catch @ 033852c4
                       catch() { ... } // from try @ 033863bc with catch @ 033852c4
                       catch() { ... } // from try @ 0338654c with catch @ 033852c4
                       catch() { ... } // from try @ 033866b4 with catch @ 033852c4
                       catch() { ... } // from try @ 033866f4 with catch @ 033852c4
                       catch() { ... } // from try @ 03386798 with catch @ 033852c4
                       catch() { ... } // from try @ 03386860 with catch @ 033852c4
                       catch() { ... } // from try @ 033868a0 with catch @ 033852c4 */
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_033852e8:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar6);
      }
    }
    bVar2 = iVar12 != DPJIDNBJIBG;
    iVar12 = iVar12 + 1;
  } while (bVar2);
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033853a8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033853a8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x033853ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar7 = (AFFHKININGD_o *)
           (*(__this->klass->vtable)._7_PLMHPLMOBIO.methodPtr)
                     (__this,plVar6,(ulong)(uint)DPJIDNBJIBG,
                      (__this->klass->vtable)._7_PLMHPLMOBIO.method);
  return pAVar7;
}


// ===== public void .ctor(string ACCIHBHMFPN, Vector2 BLEOKMIDGIK, string KGLJICLJHEL, string NEJHIEOHMCF, string FNLBOLFNLPP, string ONLOEDAIEOJ, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO, string JCLPIKHEKBB, string JEHFOBHMGJM, string LBKOHHHPNIP, string FNLFDPAJACB, string OAJJFDIDFKC, string JOPFAAGCIOI, bool MENLMNJNMMO, string BJNOIGAJKDJ)  [RVA 0x32854E4]
// OOMHDDBCBJP$$.ctor @ RVA 0x32854E4

void OOMHDDBCBJP___ctor(OOMHDDBCBJP_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       System_String_o *BJNOIGAJKDJ,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  System_Collections_Generic_List_AFFHKININGD__o **ppSVar2;
  DPDDOKKMMOM_o *__this_02;
  DPDDOKKMMOM_o **ppDVar3;
  MEJIKMPNBNL_o **ppMVar4;
  MethodInfo *method_00;
  System_String_o **ppSVar5;
  System_String_o **ppSVar6;
  System_String_o **ppSVar7;
  System_String_o **ppSVar8;
  System_String_o **ppSVar9;
  System_String_o **ppSVar10;
  System_String_o **ppSVar11;
  System_String_o **ppSVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar13;
  
  method_00 = (MethodInfo *)KGLJICLJHEL;
  if ((DAT_045672b0 & 1) == 0) {
    FUN_01bab630(&DPDDOKKMMOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672b0 = 1;
  }
  ppSVar10 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar10 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar10);
  CVar13 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar13;
  ppSVar11 = &(__this->fields).FHPNAJENHNG;
  *ppSVar11 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar11);
  ppSVar12 = &(__this->fields).ICPECIILDFJ;
  *ppSVar12 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar12);
  ppSVar5 = &(__this->fields).APBICPEOMOM;
  *ppSVar5 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar5);
  ppSVar8 = &(__this->fields).NDEFOHKEFJD;
  *ppSVar8 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar8);
  ppSVar6 = &(__this->fields).CNHHLPPHNCO;
  *ppSVar6 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar6);
  ppSVar7 = &(__this->fields).EEENDKPCOPF;
  *ppSVar7 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar7);
  ppSVar9 = &(__this->fields).LKDDDKIHHGD;
  *ppSVar9 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar9);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).IJKFPEPDAKK;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_AFFHKININGD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AFFHKININGD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<AFFHKININGD>__ctor__);
  ppSVar2 = &(__this->fields).HDDNEKLMLMF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (DPDDOKKMMOM_o *)thunk_FUN_01bda818(DPDDOKKMMOM_TypeInfo);
  DPDDOKKMMOM___ctor(__this_02,(MethodInfo *)0x0);
  ppDVar3 = &(__this->fields).CIHKJLAGDLJ;
  *ppDVar3 = __this_02;
  thunk_FUN_01c20e04(ppDVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BBCFCIAPOKE.fields.x = BLEOKMIDGIK.fields.x;
  (__this->fields).BBCFCIAPOKE.fields.y = BLEOKMIDGIK.fields.y;
  *ppSVar10 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar10);
  *ppSVar11 = JCLPIKHEKBB;
  thunk_FUN_01c20e04(ppSVar11,JCLPIKHEKBB);
  *ppSVar12 = JEHFOBHMGJM;
  thunk_FUN_01c20e04(ppSVar12);
  *ppSVar5 = NEJHIEOHMCF;
  thunk_FUN_01c20e04(ppSVar5);
  *ppSVar8 = FNLBOLFNLPP;
  thunk_FUN_01c20e04(ppSVar8);
  (__this->fields).BJMHBMDFFPA = ONLOEDAIEOJ;
  thunk_FUN_01c20e04();
  ppMVar4 = &(__this->fields).IAJPHAAMKPC;
  *ppMVar4 = (MEJIKMPNBNL_o *)0x0;
  thunk_FUN_01c20e04(ppMVar4,0);
  (__this->fields).HHDBIGKBMEC = false;
  (__this->fields).LFJPDELEIHG = (OLKPEJMEBPJ_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields).KANKFCNHDPA = false;
  (__this->fields).JANAIIBBHIK = JDIHKNKFJMK;
  (__this->fields).AELJGHFFPPC = 0;
  (__this->fields).IJEMNNPDBEM = EHEFEIEKHJO;
  *ppSVar6 = LBKOHHHPNIP;
  thunk_FUN_01c20e04(ppSVar6);
  *ppSVar7 = FNLFDPAJACB;
  thunk_FUN_01c20e04(ppSVar7);
  (__this->fields).KIHDFNGKPGN = 0;
  *ppSVar9 = OAJJFDIDFKC;
  thunk_FUN_01c20e04(ppSVar9);
  (__this->fields).CILMHNDFBPH = MENLMNJNMMO;
  (__this->fields).LNKEPHFHPLP = JOPFAAGCIOI;
  thunk_FUN_01c20e04();
  (__this->fields)._CPBEOCBNJJN_k__BackingField = BJNOIGAJKDJ;
  thunk_FUN_01c20e04();
  OOMHDDBCBJP__FLIFCMONJKF(__this,ACCIHBHMFPN,method_00);
  return;
}


// ===== public ushort PADHPGMANOD()  [RVA 0x32858B0]
// OOMHDDBCBJP$$PADHPGMANOD @ RVA 0x32858B0

uint16_t OOMHDDBCBJP__PADHPGMANOD(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).JANAIIBBHIK;
}


// ===== protected void NDLGJIGPLAP(XmlNode NBIPOAOKJOH)  [RVA 0x32858B8]
// OOMHDDBCBJP$$NDLGJIGPLAP @ RVA 0x32858B8

/* WARNING: Removing unreachable block (ram,0x03385c10) */

void OOMHDDBCBJP__NDLGJIGPLAP
               (OOMHDDBCBJP_o *__this,System_Xml_XmlNode_o *NBIPOAOKJOH,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  uint16_t uVar3;
  System_Xml_XmlNodeList_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *item;
  System_Collections_Generic_List_string__o *pSVar8;
  long lVar9;
  System_String_array *pSVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_045672b1 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672b1 = 1;
  }
  pSVar8 = (__this->fields).IJKFPEPDAKK;
  (__this->fields).KIHDFNGKPGN = 0;
  if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (NBIPOAOKJOH == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    pSVar4 = System_Xml_XmlNode__SelectNodes(NBIPOAOKJOH,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_XmlNodeList_o *)0x0) {
      uVar3 = (*(pSVar4->klass->vtable)._7_unknown.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._7_unknown.method);
      (__this->fields).KIHDFNGKPGN = uVar3;
      plVar5 = (long *)(*(pSVar4->klass->vtable)._8_GetEnumerator.methodPtr)
                                 (pSVar4,(pSVar4->klass->vtable)._8_GetEnumerator.method);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03385a40;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03385a40:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_03385bb0;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03385b98;
        }
        lVar9 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03385aa0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03385aa0:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar9 = *plVar7;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(lVar9 + 0x238))(plVar7,*(undefined8 *)(lVar9 + 0x240));
        if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        item = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        lVar9 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar8 = (__this->fields).IJKFPEPDAKK;
        if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pSVar10->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar10->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
LAB_03385b98:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03385bcc;
    }
  }
LAB_03385bb0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03385bcc:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public Vector2 OFDDJINNMNE()  [RVA 0x3285CE8]
// OOMHDDBCBJP$$OFDDJINNMNE @ RVA 0x3285CE8

UnityEngine_Vector2_o OOMHDDBCBJP__OFDDJINNMNE(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).BBCFCIAPOKE.fields;
}


// ===== public string DNOMHOGFIFO()  [RVA 0x3285CF0]
// OOMHDDBCBJP$$DNOMHOGFIFO @ RVA 0x3285CF0

System_String_o * OOMHDDBCBJP__DNOMHOGFIFO(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).APBICPEOMOM;
}


// ===== public string CDMEMHDCNHI()  [RVA 0x3285CF8]
// OOMHDDBCBJP$$CDMEMHDCNHI @ RVA 0x3285CF8

System_String_o * OOMHDDBCBJP__CDMEMHDCNHI(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields)._CPBEOCBNJJN_k__BackingField;
}


// ===== public void JGKHDBDNCCN(MEJIKMPNBNL CJNHFNHJHPE)  [RVA 0x3285D00]
// OOMHDDBCBJP$$JGKHDBDNCCN @ RVA 0x3285D00

void OOMHDDBCBJP__JGKHDBDNCCN(OOMHDDBCBJP_o *__this,MEJIKMPNBNL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IAJPHAAMKPC = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string ACJJCGLDLAP()  [RVA 0x3285D08]
// OOMHDDBCBJP$$ACJJCGLDLAP @ RVA 0x3285D08

System_String_o * OOMHDDBCBJP__ACJJCGLDLAP(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045672b2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_16304/*"active_"*/);
    DAT_045672b2 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_16304/*"active_"*/,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== public ushort KPPOBNIDLOC()  [RVA 0x3285D54]
// OOMHDDBCBJP$$KPPOBNIDLOC @ RVA 0x3285D54

uint16_t OOMHDDBCBJP__KPPOBNIDLOC(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).IJEMNNPDBEM;
}


// ===== protected virtual AFFHKININGD PLMHPLMOBIO(XmlNode AHDGNOJPPIB, int DPJIDNBJIBG)  [RVA 0x3285D5C]
// OOMHDDBCBJP$$PLMHPLMOBIO @ RVA 0x3285D5C

AFFHKININGD_o *
OOMHDDBCBJP__PLMHPLMOBIO
          (OOMHDDBCBJP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t DPJIDNBJIBG,
          MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  NLPJLHOEAOE_o *pNVar1;
  AFFHKININGD_o *__this_00;
  
  if ((DAT_045672b3 & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_TypeInfo,AHDGNOJPPIB,(ulong)(uint)DPJIDNBJIBG);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672b3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
    (pNVar1->fields).PJLHMJHKJOA = false;
    __this_00 = (AFFHKININGD_o *)thunk_FUN_01bda818(AFFHKININGD_TypeInfo);
    AFFHKININGD___ctor(__this_00,(MethodInfo *)0x0);
    pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    ACCIHBHMFPN = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__GKHEJJOADCD
                (pNVar1,__this_00,AHDGNOJPPIB,ACCIHBHMFPN,(__this->fields).CNHHLPPHNCO,
                 (__this->fields).EEENDKPCOPF,__this,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
                (__this,__this_00,(ulong)(uint)DPJIDNBJIBG,
                 (__this->klass->vtable)._21_GOLLEBBHEHE.method);
      pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
        (pNVar1->fields).PJLHMJHKJOA = true;
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void PEOJNPEINED()  [RVA 0x3285E7C]
// OOMHDDBCBJP$$PEOJNPEINED @ RVA 0x3285E7C

void OOMHDDBCBJP__PEOJNPEINED(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  
  if ((DAT_045672b4 & 1) == 0) {
    FUN_01bab630(&Method_OOMHDDBCBJP_ECDBDFLNONG_DKGBGEHJIEO__);
    FUN_01bab630(&OOMHDDBCBJP_ECDBDFLNONG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Find__);
    FUN_01bab630(&System_Predicate<AFFHKININGD>_TypeInfo);
    DAT_045672b4 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OOMHDDBCBJP_ECDBDFLNONG_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
LAB_03385fa0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  *(undefined4 *)&__this_00[1].klass = 0;
  if ((__this->fields).KIHDFNGKPGN != 0) {
    do {
      __this_01 = (__this->fields).HDDNEKLMLMF;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<AFFHKININGD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_03385fa0;
      method_00 = Method_System_Collections_Generic_List<AFFHKININGD>_Find__;
      pIVar3 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          (MethodInfo_26E5414 *)
                          Method_System_Collections_Generic_List<AFFHKININGD>_Find__);
      if ((pIVar3 == (Il2CppObject *)0x0) &&
         (bVar2 = OOMHDDBCBJP__HLNIBCHNHNP(__this,*(int32_t *)&__this_00[1].klass,method_00), !bVar2
         )) {
        (*(__this->klass->vtable)._6_IOJIEDAEOBN.methodPtr)
                  (__this,(ulong)*(uint *)&__this_00[1].klass,
                   (__this->klass->vtable)._6_IOJIEDAEOBN.method);
      }
      iVar1 = *(int *)&__this_00[1].klass + 1;
      *(int *)&__this_00[1].klass = iVar1;
    } while (iVar1 < (int)(uint)(__this->fields).KIHDFNGKPGN);
  }
  return;
}


// ===== public AFFHKININGD PFAOOMAGCHN(string KGLJICLJHEL)  [RVA 0x3285020]
// OOMHDDBCBJP$$PFAOOMAGCHN @ RVA 0x3285020

AFFHKININGD_o *
OOMHDDBCBJP__PFAOOMAGCHN(OOMHDDBCBJP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AFFHKININGD_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672b5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
                    /* try { // try from 03385074 to 0348518b has its CatchHandler @ 03385074
                       catch() { ... } // from try @ 03385074 with catch @ 03385074
                       catch() { ... } // from try @ 0338520c with catch @ 03385074
                       catch() { ... } // from try @ 03385240 with catch @ 03385074
                       catch() { ... } // from try @ 0338527c with catch @ 03385074
                       catch() { ... } // from try @ 033852ac with catch @ 03385074 */
    DAT_045672b5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    pAVar2 = (AFFHKININGD_o *)local_48.fields._current;
    if (!bVar1) {
      pAVar2 = (AFFHKININGD_o *)0x0;
      break;
    }
    if ((AFFHKININGD_o *)local_48.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((AFFHKININGD_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  return pAVar2;
}


// ===== private void JGBGCFCOAPI(string CJNHFNHJHPE)  [RVA 0x32862F8]
// OOMHDDBCBJP$$JGBGCFCOAPI @ RVA 0x32862F8

void OOMHDDBCBJP__JGBGCFCOAPI(OOMHDDBCBJP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CPBEOCBNJJN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string FNGDEJNOBPK()  [RVA 0x3286300]
// OOMHDDBCBJP$$FNGDEJNOBPK @ RVA 0x3286300

System_String_o * OOMHDDBCBJP__FNGDEJNOBPK(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 03386308 to 0348630b has its CatchHandler @ 03386804 */
                    /* try { // try from 03386314 to 03486337 has its CatchHandler @ 0338680c */
  if ((DAT_045672b6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20275/*"pressed_"*/);
    DAT_045672b6 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_20275/*"pressed_"*/,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== public string IOJBCFGAGKJ()  [RVA 0x328634C]
// OOMHDDBCBJP$$IOJBCFGAGKJ @ RVA 0x328634C

System_String_o * OOMHDDBCBJP__IOJBCFGAGKJ(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 03386350 to 03486353 has its CatchHandler @ 033867ec */
                    /* try { // try from 03386368 to 0348636f has its CatchHandler @ 033867e8 */
  if ((DAT_045672b7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_19498/*"locked_"*/);
    DAT_045672b7 = 1;
  }
                    /* try { // try from 03386388 to 0348638b has its CatchHandler @ 033867f4 */
                    /* try { // try from 0338638c to 0348639b has its CatchHandler @ 033867f0 */
  pSVar1 = System_String__Concat(StringLiteral_19498/*"locked_"*/,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== protected bool HLNIBCHNHNP(int DPJIDNBJIBG)  [RVA 0x3285FAC]
// OOMHDDBCBJP$$HLNIBCHNHNP @ RVA 0x3285FAC

/* WARNING: Removing unreachable block (ram,0x03386240) */

bool OOMHDDBCBJP__HLNIBCHNHNP(OOMHDDBCBJP_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_AFFHKININGD__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Collections_Generic_IList_AFFHKININGD__c *pSVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  
  if ((DAT_045672b8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672b8 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__JPHAKMNFEMI(__this,(MethodInfo *)0x0);
  if (pSVar2 == (System_Collections_Generic_IList_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03386238 to 03486253 has its CatchHandler @ 033863c0 */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<AFFHKININGD>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar9;
        goto LAB_03386094;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pSVar2,System_Collections_Generic_IEnumerable<AFFHKININGD>_TypeInfo,0);
LAB_03386094:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0338610c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0338610c:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      bVar12 = false;
      bVar11 = false;
      goto joined_r0x033861bc;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_AFFHKININGD__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<AFFHKININGD>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03386168;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<AFFHKININGD>_TypeInfo,0);
LAB_03386168:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03386234 to 03486237 has its CatchHandler @ 033863c4 */
      FUN_01bab8c8();
    }
  } while (*(int *)(lVar7 + 0x50) != DPJIDNBJIBG);
  (*(__this->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
            (__this,lVar7,(ulong)(uint)DPJIDNBJIBG,(__this->klass->vtable)._21_GOLLEBBHEHE.method);
  bVar12 = true;
  bVar11 = true;
joined_r0x033861bc:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 033861e0 to 034861e7 has its CatchHandler @ 03386834 */
        if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03386208 to 03486217 has its CatchHandler @ 033863cc */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0338620c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 033861f4 to 03486203 has its CatchHandler @ 033863d0 */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0338620c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    bVar11 = bVar12;
  }
                    /* try { // try from 03386218 to 0348621f has its CatchHandler @ 033863c8 */
  return bVar11;
}


// ===== public bool IEANIFNMNBI()  [RVA 0x3286398]
// OOMHDDBCBJP$$IEANIFNMNBI @ RVA 0x3286398

bool OOMHDDBCBJP__IEANIFNMNBI(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033863a4 to 034863ab has its CatchHandler @ 033867cc */
                    /* try { // try from 033863b0 to 034863b3 has its CatchHandler @ 033863c8 */
  if ((DAT_045672b9 & 1) == 0) {
                    /* try { // try from 033863b8 to 034863bb has its CatchHandler @ 033863c4 */
                    /* try { // try from 033863bc to 034863eb has its CatchHandler @ 033852c4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
                    /* catch() { ... } // from try @ 03386238 with catch @ 033863c0 */
                    /* catch() { ... } // from try @ 03386234 with catch @ 033863c4
                       catch() { ... } // from try @ 033863b8 with catch @ 033863c4 */
                    /* catch() { ... } // from try @ 03386218 with catch @ 033863c8
                       catch() { ... } // from try @ 033863b0 with catch @ 033863c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
                    /* catch() { ... } // from try @ 03386208 with catch @ 033863cc */
                    /* catch() { ... } // from try @ 033861f4 with catch @ 033863d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672b9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033863ec to 03486403 has its CatchHandler @ 03386784 */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 03386418 to 0348641b has its CatchHandler @ 0338674c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  do {
                    /* try { // try from 03386428 to 0348643f has its CatchHandler @ 03386780 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03386454;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)((long)&local_38.fields._current[6].klass + 4) != 1);
                    /* try { // try from 03386448 to 03486467 has its CatchHandler @ 0338677c */
  iVar2 = 4;
LAB_03386454:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
                    /* try { // try from 03386468 to 0348648b has its CatchHandler @ 03386778 */
  return bVar1 && iVar2 == 4;
}


// ===== public virtual void GDOLJLANOKC()  [RVA 0x32864F4]
// OOMHDDBCBJP$$GDOLJLANOKC @ RVA 0x32864F4

void OOMHDDBCBJP__GDOLJLANOKC(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return;
}


// ===== public bool EFLKILFFJKH()  [RVA 0x32864F8]
// OOMHDDBCBJP$$EFLKILFFJKH @ RVA 0x32864F8

bool OOMHDDBCBJP__EFLKILFFJKH(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  bool bVar1;
  OLKPEJMEBPJ_o *__this_00;
  
  __this_00 = (__this->fields).LFJPDELEIHG;
  if (__this_00 != (OLKPEJMEBPJ_o *)0x0) {
    bVar1 = OLKPEJMEBPJ__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* try { // try from 03386508 to 0348652b has its CatchHandler @ 03386770 */
  return false;
}


// ===== public string NCEBFILGGEK()  [RVA 0x328650C]
// OOMHDDBCBJP$$NCEBFILGGEK @ RVA 0x328650C

System_String_o * OOMHDDBCBJP__NCEBFILGGEK(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).LKDDDKIHHGD;
}


// ===== public string KJHGGFNOHCE()  [RVA 0x3286514]
// OOMHDDBCBJP$$KJHGGFNOHCE @ RVA 0x3286514

System_String_o * OOMHDDBCBJP__KJHGGFNOHCE(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 0338652c to 0348653b has its CatchHandler @ 0338676c */
  if ((DAT_045672ba & 1) == 0) {
    FUN_01bab630(&StringLiteral_19499/*"locked_active_"*/);
                    /* try { // try from 03386544 to 0348654b has its CatchHandler @ 03386768 */
    DAT_045672ba = 1;
  }
                    /* try { // try from 0338654c to 0348662b has its CatchHandler @ 033852c4 */
  pSVar1 = System_String__Concat(StringLiteral_19499/*"locked_active_"*/,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== public void NMBHOBDKCHF(string CJNHFNHJHPE)  [RVA 0x3286560]
// OOMHDDBCBJP$$NMBHOBDKCHF @ RVA 0x3286560

void OOMHDDBCBJP__NMBHOBDKCHF(OOMHDDBCBJP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OKDCDPMNNJJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public virtual List<AFFHKININGD> DHBIECBOKMB()  [RVA 0x3286568]
// OOMHDDBCBJP$$DHBIECBOKMB @ RVA 0x3286568

System_Collections_Generic_List_AFFHKININGD__o *
OOMHDDBCBJP__DHBIECBOKMB(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  if ((__this->fields).KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
  return (__this->fields).HDDNEKLMLMF;
}


// ===== public COALAGILPBO NHGGBEACKBD()  [RVA 0x3285E6C]
// OOMHDDBCBJP$$NHGGBEACKBD @ RVA 0x3285E6C

int32_t OOMHDDBCBJP__NHGGBEACKBD(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public string GIMBGOMDHOH()  [RVA 0x3286594]
// OOMHDDBCBJP$$GIMBGOMDHOH @ RVA 0x3286594

System_String_o * OOMHDDBCBJP__GIMBGOMDHOH(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).FHPNAJENHNG;
}


// ===== private void GNLPNKGBAFL(COALAGILPBO CJNHFNHJHPE)  [RVA 0x328659C]
// OOMHDDBCBJP$$GNLPNKGBAFL @ RVA 0x328659C

void OOMHDDBCBJP__GNLPNKGBAFL(OOMHDDBCBJP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public string LOHPFCGCHNH()  [RVA 0x32865BC]
// OOMHDDBCBJP$$LOHPFCGCHNH @ RVA 0x32865BC

System_String_o * OOMHDDBCBJP__LOHPFCGCHNH(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MEJIKMPNBNL_o *pMVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045672bb & 1) == 0) {
    auVar3 = FUN_01bab630(&StringLiteral_22460/*"{0}|{1}|"*/);
    DAT_045672bb = 1;
  }
  pMVar2 = (__this->fields).IAJPHAAMKPC;
  if (pMVar2 != (MEJIKMPNBNL_o *)0x0) {
    pSVar1 = System_String__Format
                       (StringLiteral_22460/*"{0}|{1}|"*/,(Il2CppObject *)(pMVar2->fields).DEKCPPOJFEH,
                        (Il2CppObject *)(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public virtual void HNDIAFHOEJF(AFFHKININGD FBFPLEFCDOK, bool IPGNPJLADGH)  [RVA 0x3286618]
// OOMHDDBCBJP$$HNDIAFHOEJF @ RVA 0x3286618

void OOMHDDBCBJP__HNDIAFHOEJF
               (OOMHDDBCBJP_o *__this,AFFHKININGD_o *FBFPLEFCDOK,bool IPGNPJLADGH,MethodInfo *method
               )

{
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  
                    /* try { // try from 0338662c to 0348662f has its CatchHandler @ 03386820 */
                    /* try { // try from 03386638 to 0348663b has its CatchHandler @ 0338681c */
  if ((DAT_045672bc & 1) == 0) {
                    /* try { // try from 03386644 to 03486647 has its CatchHandler @ 03386818 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03386650 to 03486653 has its CatchHandler @ 03386808 */
    DAT_045672bc = 1;
  }
                    /* try { // try from 0338665c to 0348665f has its CatchHandler @ 033867fc */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03386668 to 0348666b has its CatchHandler @ 033867f8 */
  CJNHFNHJHPE = NLPJLHOEAOE__KNHMOFPKOAM(FBFPLEFCDOK,IPGNPJLADGH,(MethodInfo *)0x0);
                    /* try { // try from 03386674 to 03486683 has its CatchHandler @ 03386814 */
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 0338668c to 0348668f has its CatchHandler @ 033867e4 */
    AFFHKININGD__HKBKHKMMBFG(FBFPLEFCDOK,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3286698]
// OOMHDDBCBJP$$KCHJCGEMCGE @ RVA 0x3286698

System_String_o * OOMHDDBCBJP__KCHJCGEMCGE(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
                    /* try { // try from 03386698 to 0348669b has its CatchHandler @ 033867d8 */
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public virtual AFFHKININGD FKALJBOIAHP()  [RVA 0x32866A0]
// OOMHDDBCBJP$$FKALJBOIAHP @ RVA 0x32866A0

AFFHKININGD_o * OOMHDDBCBJP__FKALJBOIAHP(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  uint uVar2;
  
                    /* try { // try from 033866a4 to 034866a7 has its CatchHandler @ 033867d4 */
  if ((__this->fields).KIHDFNGKPGN != 0) {
                    /* try { // try from 033866b0 to 034866b3 has its CatchHandler @ 033867d0 */
                    /* try { // try from 033866b4 to 034866bf has its CatchHandler @ 033852c4 */
    uVar2 = 0;
    do {
                    /* try { // try from 033866c0 to 034866c3 has its CatchHandler @ 033867c4 */
                    /* try { // try from 033866cc to 034866cf has its CatchHandler @ 033867c0 */
      pAVar1 = (AFFHKININGD_o *)
               (*(__this->klass->vtable)._16_EPLGFIOJNDK.methodPtr)
                         (__this,(ulong)uVar2,(__this->klass->vtable)._16_EPLGFIOJNDK.method);
      if (pAVar1 == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033866d8 to 034866db has its CatchHandler @ 033867c8 */
      if ((pAVar1->fields).HHJIJKJCEOF == 2) {
        return pAVar1;
      }
                    /* try { // try from 033866e4 to 034866e7 has its CatchHandler @ 033867a4 */
      uVar2 = uVar2 + 1;
    } while (uVar2 < (__this->fields).KIHDFNGKPGN);
  }
                    /* try { // try from 033866f0 to 034866f3 has its CatchHandler @ 033867a0 */
                    /* try { // try from 033866f4 to 0348670b has its CatchHandler @ 033852c4 */
  return (AFFHKININGD_o *)0x0;
}


// ===== public bool KFMAFEPOEIB()  [RVA 0x3286704]
// OOMHDDBCBJP$$KFMAFEPOEIB @ RVA 0x3286704

bool OOMHDDBCBJP__KFMAFEPOEIB(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  OLKPEJMEBPJ_o *pOVar1;
  
  pOVar1 = (__this->fields).LFJPDELEIHG;
  if (pOVar1 != (OLKPEJMEBPJ_o *)0x0) {
                    /* try { // try from 0338670c to 0348671b has its CatchHandler @ 0338675c */
    return (pOVar1->fields).PABIMIFJJKF != false;
  }
  return false;
}


// ===== public string CJPIFPJMENP()  [RVA 0x3286724]
// OOMHDDBCBJP$$CJPIFPJMENP @ RVA 0x3286724

System_String_o * OOMHDDBCBJP__CJPIFPJMENP(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
                    /* try { // try from 03386724 to 03486727 has its CatchHandler @ 033867c8 */
  return (__this->fields).BJMHBMDFFPA;
}


// ===== public string BBFNBBGPPBH()  [RVA 0x328672C]
// OOMHDDBCBJP$$BBFNBBGPPBH @ RVA 0x328672C

System_String_o * OOMHDDBCBJP__BBFNBBGPPBH(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 03386730 to 03486733 has its CatchHandler @ 03386754 */
                    /* try { // try from 0338673c to 0348673f has its CatchHandler @ 03386758 */
                    /* try { // try from 03386748 to 0348674b has its CatchHandler @ 03386750 */
  if ((DAT_045672bd & 1) == 0) {
                    /* catch() { ... } // from try @ 03386418 with catch @ 0338674c */
                    /* catch() { ... } // from try @ 03386748 with catch @ 03386750 */
                    /* catch() { ... } // from try @ 03386730 with catch @ 03386754 */
    FUN_01bab630(&StringLiteral_20275/*"pressed_"*/);
                    /* catch() { ... } // from try @ 0338673c with catch @ 03386758 */
                    /* catch() { ... } // from try @ 0338670c with catch @ 0338675c */
    DAT_045672bd = 1;
  }
                    /* catch() { ... } // from try @ 03386544 with catch @ 03386768 */
                    /* catch() { ... } // from try @ 0338652c with catch @ 0338676c */
                    /* catch() { ... } // from try @ 03386508 with catch @ 03386770 */
                    /* catch() { ... } // from try @ 0338648c with catch @ 03386774 */
  pSVar1 = System_String__Concat(StringLiteral_20275/*"pressed_"*/,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== public string FIMJOAKEGNL()  [RVA 0x3286778]
// OOMHDDBCBJP$$FIMJOAKEGNL @ RVA 0x3286778

System_String_o * OOMHDDBCBJP__FIMJOAKEGNL(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03386468 with catch @ 03386778 */
                    /* catch() { ... } // from try @ 03386448 with catch @ 0338677c */
  return (__this->fields).EEENDKPCOPF;
}


// ===== public virtual void RandomizeObscuredVars()  [RVA 0x3286780]
// OOMHDDBCBJP$$RandomizeObscuredVars @ RVA 0x3286780

void OOMHDDBCBJP__RandomizeObscuredVars(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
                    /* catch() { ... } // from try @ 03386428 with catch @ 03386780 */
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).JDNKKGPNHPB;
                    /* catch() { ... } // from try @ 033863ec with catch @ 03386784 */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public virtual void FAFFJKFGMAL()  [RVA 0x328678C]
// OOMHDDBCBJP$$FAFFJKFGMAL @ RVA 0x328678C

void OOMHDDBCBJP__FAFFJKFGMAL(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03386794 to 03486797 has its CatchHandler @ 033868b4 */
                    /* try { // try from 03386798 to 0348685b has its CatchHandler @ 033852c4 */
                    /* catch() { ... } // from try @ 033866f0 with catch @ 033867a0 */
                    /* catch() { ... } // from try @ 033866e4 with catch @ 033867a4 */
                    /* catch() { ... } // from try @ 033864d8 with catch @ 033867a8 */
  if ((DAT_045672be & 1) == 0) {
                    /* catch() { ... } // from try @ 033864b4 with catch @ 033867ac */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
                    /* catch() { ... } // from try @ 033866cc with catch @ 033867c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
                    /* catch() { ... } // from try @ 033866c0 with catch @ 033867c4 */
                    /* catch() { ... } // from try @ 033866d8 with catch @ 033867c8
                       catch() { ... } // from try @ 03386724 with catch @ 033867c8 */
                    /* catch() { ... } // from try @ 033863a4 with catch @ 033867cc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
                    /* catch() { ... } // from try @ 033866b0 with catch @ 033867d0 */
                    /* catch() { ... } // from try @ 033866a4 with catch @ 033867d4 */
                    /* catch() { ... } // from try @ 03386698 with catch @ 033867d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033862c8 with catch @ 033867dc */
                    /* catch() { ... } // from try @ 033862a4 with catch @ 033867e0 */
                    /* catch() { ... } // from try @ 0338668c with catch @ 033867e4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
                    /* catch() { ... } // from try @ 03386368 with catch @ 033867e8 */
                    /* catch() { ... } // from try @ 03386350 with catch @ 033867ec */
                    /* catch() { ... } // from try @ 0338638c with catch @ 033867f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
                    /* catch() { ... } // from try @ 03386388 with catch @ 033867f4 */
                    /* catch() { ... } // from try @ 03386668 with catch @ 033867f8 */
    DAT_045672be = 1;
  }
                    /* catch() { ... } // from try @ 0338665c with catch @ 033867fc */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* catch() { ... } // from try @ 033862e0 with catch @ 03386800 */
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 03386308 with catch @ 03386804 */
                    /* catch() { ... } // from try @ 03386650 with catch @ 03386808 */
  if ((__this->fields).KANKFCNHDPA == false) {
                    /* catch() { ... } // from try @ 03386314 with catch @ 0338680c */
                    /* catch() { ... } // from try @ 03386278 with catch @ 03386810 */
                    /* catch() { ... } // from try @ 03386674 with catch @ 03386814 */
                    /* catch() { ... } // from try @ 03386644 with catch @ 03386818 */
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
                    /* catch() { ... } // from try @ 03386638 with catch @ 0338681c */
  pSVar2 = (__this->fields).HDDNEKLMLMF;
                    /* catch() { ... } // from try @ 0338662c with catch @ 03386820 */
  if (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* catch() { ... } // from try @ 03386284 with catch @ 0338682c */
                    /* catch() { ... } // from try @ 03386264 with catch @ 03386830 */
                    /* catch() { ... } // from try @ 033861e0 with catch @ 03386834 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
                    /* try { // try from 0338685c to 0348685f has its CatchHandler @ 03386888 */
    local_50.fields._current = local_68.fields._current;
    do {
                    /* try { // try from 03386860 to 03486897 has its CatchHandler @ 033852c4 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) goto LAB_033868b8;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(int *)((long)&local_50.fields._current[6].klass + 4) != 2);
                    /* catch() { ... } // from try @ 0338685c with catch @ 03386888 */
    if (*(int *)&local_50.fields._current[5].klass < 1) {
LAB_033868b8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
    }
    else {
      pSVar2 = (__this->fields).HDDNEKLMLMF;
      if (pSVar2 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03386898 to 0348689f has its CatchHandler @ 033868b4 */
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          *(int *)&local_50.fields._current[5].klass + -1,
                          Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
                    /* try { // try from 033868a0 to 034868ab has its CatchHandler @ 033852c4 */
                    /* try { // try from 033868ac to 034868b3 has its CatchHandler @ 033868b4 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
      if (pIVar3 != (Il2CppObject *)0x0) goto LAB_033868e4;
    }
    pSVar2 = (__this->fields).HDDNEKLMLMF;
    if ((pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,
                            (pSVar2->fields)._size + -1,
                            Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__),
       pIVar3 != (Il2CppObject *)0x0)) {
LAB_033868e4:
      __this_00 = pIVar3[2].klass;
      if (__this_00 != (Il2CppClass *)0x0) {
        PAMEPBLOLPB__DNNBHOPPCPL((PAMEPBLOLPB_o *)__this_00,0,(MethodInfo *)0x0);
        PAMEPBLOLPB__HOONFLPHAIL((PAMEPBLOLPB_o *)__this_00,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual FNLLFBNCKBG AAHLCCCONKI()  [RVA 0x32869AC]
// OOMHDDBCBJP$$AAHLCCCONKI @ RVA 0x32869AC

int32_t OOMHDDBCBJP__AAHLCCCONKI(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  int32_t iVar3;
  uint uVar4;
  
  uVar1 = (__this->fields).KIHDFNGKPGN;
  if ((__this->fields).KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
  uVar2 = (*(__this->klass->vtable)._17_KDENPABEMHA.methodPtr)
                    (__this,1,(__this->klass->vtable)._17_KDENPABEMHA.method);
  uVar4 = (uint)uVar1;
  if (uVar2 == uVar4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (*(__this->klass->vtable)._17_KDENPABEMHA.methodPtr)
                      (__this,3,(__this->klass->vtable)._17_KDENPABEMHA.method);
    iVar3 = 2;
    if (uVar2 == uVar4) {
      iVar3 = 3;
    }
  }
  return iVar3;
}


// ===== public virtual AFFHKININGD EPLGFIOJNDK(int DPJIDNBJIBG)  [RVA 0x3286A2C]
// OOMHDDBCBJP$$EPLGFIOJNDK @ RVA 0x3286A2C

AFFHKININGD_o *
OOMHDDBCBJP__EPLGFIOJNDK(OOMHDDBCBJP_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AFFHKININGD_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672bf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672bf = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pAVar2 = (AFFHKININGD_o *)0x0;
  if (DPJIDNBJIBG < (int)(uint)(__this->fields).KIHDFNGKPGN) {
    __this_00 = (__this->fields).HDDNEKLMLMF;
    if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      pAVar2 = (AFFHKININGD_o *)local_48.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        pAVar2 = (AFFHKININGD_o *)
                 (*(__this->klass->vtable)._6_IOJIEDAEOBN.methodPtr)
                           (__this,(ulong)(uint)DPJIDNBJIBG,
                            (__this->klass->vtable)._6_IOJIEDAEOBN.method);
        return pAVar2;
      }
      if ((AFFHKININGD_o *)local_48.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((AFFHKININGD_Fields *)((long)local_48.fields._current + 0x10))->HLFBMBHOPMI !=
             DPJIDNBJIBG);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  }
  return pAVar2;
}


// ===== public string DMGDFPDJMDL()  [RVA 0x3286BC4]
// OOMHDDBCBJP$$DMGDFPDJMDL @ RVA 0x3286BC4

System_String_o * OOMHDDBCBJP__DMGDFPDJMDL(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).NDEFOHKEFJD;
}


// ===== protected virtual uint KDENPABEMHA(FNLLFBNCKBG MNPKIDDPNBM)  [RVA 0x3286BCC]
// OOMHDDBCBJP$$KDENPABEMHA @ RVA 0x3286BCC

uint32_t OOMHDDBCBJP__KDENPABEMHA(OOMHDDBCBJP_o *__this,int32_t MNPKIDDPNBM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  uint32_t uVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672c0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672c0 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  uVar2 = 0;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
      return uVar2;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (*(int *)((long)&local_48.fields._current[6].klass + 4) == MNPKIDDPNBM) {
      uVar2 = uVar2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CCANMOPIFEC()  [RVA 0x3286D1C]
// OOMHDDBCBJP$$CCANMOPIFEC @ RVA 0x3286D1C

void OOMHDDBCBJP__CCANMOPIFEC(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar2;
  AFFHKININGD_o *FBFPLEFCDOK;
  AFFHKININGD_o *pAVar3;
  NLPJLHOEAOE_o *__this_00;
  int length;
  PKHMIGFEJCL_o *__this_01;
  PKHMIGFEJCL_o *__this_02;
  
  if ((DAT_045672c1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672c1 = 1;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this_01 = (pNVar1->fields).QuestParameters;
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pSVar2 = (__this->fields).HDDNEKLMLMF,
       pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0)) {
      __this_02 = (pNVar1->fields).QuestParametersBeforeLottery;
      length = 0;
      do {
        while( true ) {
          if (length == (pSVar2->fields)._size) {
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,
                                  (MethodInfo *)0x0);
            }
            (__this->fields).KANKFCNHDPA = false;
            (__this->fields).AELJGHFFPPC = 0;
            return;
          }
          FBFPLEFCDOK = (AFFHKININGD_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,length,
                                   Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
          if (__this_01 == (PKHMIGFEJCL_o *)0x0) goto LAB_03386e6c;
          pAVar3 = PKHMIGFEJCL__ACPCMCCBDEI(__this_01,(MethodInfo *)0x0);
          if (pAVar3 != FBFPLEFCDOK) break;
LAB_03386e60:
          pSVar2 = (__this->fields).HDDNEKLMLMF;
          length = length + 1;
          if (pSVar2 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_03386e6c;
        }
        if (__this_02 == (PKHMIGFEJCL_o *)0x0) break;
        pAVar3 = PKHMIGFEJCL__ACPCMCCBDEI(__this_02,(MethodInfo *)0x0);
        if (pAVar3 == FBFPLEFCDOK) goto LAB_03386e60;
        pSVar2 = (__this->fields).HDDNEKLMLMF;
        if (pSVar2 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,length,
                   Method_System_Collections_Generic_List<AFFHKININGD>_RemoveAt__);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (NLPJLHOEAOE_o *)0x0) break;
        NLPJLHOEAOE__ELJFHKALHPA(__this_00,FBFPLEFCDOK,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).HDDNEKLMLMF;
      } while (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0);
    }
  }
LAB_03386e6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DPDDOKKMMOM EEDIJDBFOGE()  [RVA 0x3286EB8]
// OOMHDDBCBJP$$EEDIJDBFOGE @ RVA 0x3286EB8

DPDDOKKMMOM_o * OOMHDDBCBJP__EEDIJDBFOGE(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).CIHKJLAGDLJ;
}


// ===== public virtual void NCENBOMEPBN(long LFJGFLNMBMC)  [RVA 0x3286EC0]
// OOMHDDBCBJP$$NCENBOMEPBN @ RVA 0x3286EC0

void OOMHDDBCBJP__NCENBOMEPBN(OOMHDDBCBJP_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045672c2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672c2 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if ((AFFHKININGD_o *)local_38.fields._current == (AFFHKININGD_o *)0x0) break;
      AFFHKININGD__NCENBOMEPBN
                ((AFFHKININGD_o *)local_38.fields._current,LFJGFLNMBMC,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PGMIOJCMMOG()  [RVA 0x3287014]
// OOMHDDBCBJP$$PGMIOJCMMOG @ RVA 0x3287014

void OOMHDDBCBJP__PGMIOJCMMOG(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  (__this->fields).LFJPDELEIHG = (OLKPEJMEBPJ_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  return;
}


// ===== protected void FLIFCMONJKF(string ACCIHBHMFPN)  [RVA 0x328582C]
// OOMHDDBCBJP$$FLIFCMONJKF @ RVA 0x328582C

void OOMHDDBCBJP__FLIFCMONJKF(OOMHDDBCBJP_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  NLPJLHOEAOE_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_045672c3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672c3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    CJNHFNHJHPE = NLPJLHOEAOE__JCFMJBBOPMH(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void JDGBDDAIJNK(FNLLFBNCKBG MNPKIDDPNBM)  [RVA 0x3287020]
// OOMHDDBCBJP$$JDGBDDAIJNK @ RVA 0x3287020

void OOMHDDBCBJP__JDGBDDAIJNK(OOMHDDBCBJP_o *__this,int32_t MNPKIDDPNBM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045672c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672c4 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      *(int32_t *)((long)&local_38.fields._current[6].klass + 4) = MNPKIDDPNBM;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OLKPEJMEBPJ ILEIHMELPNH()  [RVA 0x3287158]
// OOMHDDBCBJP$$ILEIHMELPNH @ RVA 0x3287158

OLKPEJMEBPJ_o * OOMHDDBCBJP__ILEIHMELPNH(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).LFJPDELEIHG;
}


// ===== public ushort MOPBDEKNMDD()  [RVA 0x3287160]
// OOMHDDBCBJP$$MOPBDEKNMDD @ RVA 0x3287160

uint16_t OOMHDDBCBJP__MOPBDEKNMDD(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).KIHDFNGKPGN;
}


// ===== public void NEACEKOKMKM(OLKPEJMEBPJ CJNHFNHJHPE)  [RVA 0x3287168]
// OOMHDDBCBJP$$NEACEKOKMKM @ RVA 0x3287168

void OOMHDDBCBJP__NEACEKOKMKM(OOMHDDBCBJP_o *__this,OLKPEJMEBPJ_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LFJPDELEIHG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool DOBEIOPJFMG()  [RVA 0x3287170]
// OOMHDDBCBJP$$DOBEIOPJFMG @ RVA 0x3287170

bool OOMHDDBCBJP__DOBEIOPJFMG(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).CILMHNDFBPH;
}


// ===== public string AFAHPEKBJKC()  [RVA 0x3287178]
// OOMHDDBCBJP$$AFAHPEKBJKC @ RVA 0x3287178

System_String_o * OOMHDDBCBJP__AFAHPEKBJKC(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields)._OKDCDPMNNJJ_k__BackingField;
}


// ===== public string PPFEAKGGCEK()  [RVA 0x3287180]
// OOMHDDBCBJP$$PPFEAKGGCEK @ RVA 0x3287180

System_String_o * OOMHDDBCBJP__PPFEAKGGCEK(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).ICPECIILDFJ;
}


// ===== public virtual void IILGJBCBHLA()  [RVA 0x3287188]
// OOMHDDBCBJP$$IILGJBCBHLA @ RVA 0x3287188

void OOMHDDBCBJP__IILGJBCBHLA(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  Il2CppClass *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672c5 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      __this_01 = local_48.fields._current[2].klass;
      *(undefined4 *)((long)&local_48.fields._current[6].klass + 4) = 2;
      if (__this_01 != (Il2CppClass *)0x0) {
        PAMEPBLOLPB__DNNBHOPPCPL((PAMEPBLOLPB_o *)__this_01,0,(MethodInfo *)0x0);
        if (pIVar1[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        PAMEPBLOLPB__HOONFLPHAIL((PAMEPBLOLPB_o *)pIVar1[2].klass,0,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public virtual void GOLLEBBHEHE(AFFHKININGD FBFPLEFCDOK, int DPJIDNBJIBG)  [RVA 0x3287310]
// OOMHDDBCBJP$$GOLLEBBHEHE @ RVA 0x3287310

void OOMHDDBCBJP__GOLLEBBHEHE
               (OOMHDDBCBJP_o *__this,AFFHKININGD_o *FBFPLEFCDOK,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar4;
  NLPJLHOEAOE_o *__this_00;
  System_Func_AFFHKININGD__int__o **ppSVar5;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  AFFHKININGD_array *pAVar6;
  System_Collections_Generic_List_AFFHKININGD__o **ppSVar7;
  System_Func_AFFHKININGD__int__o *keySelector;
  OOMHDDBCBJP_o **ppOVar8;
  
  if ((DAT_045672c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<AFFHKININGD,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<AFFHKININGD>__);
    FUN_01bab630(&System_Func<AFFHKININGD,_int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_OOMHDDBCBJP_<>c_IEIICJBLILM__);
    FUN_01bab630(&OOMHDDBCBJP_<>c_TypeInfo);
    DAT_045672c6 = 1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    ppOVar8 = &(FBFPLEFCDOK->fields).IFJLLGPGMHM;
    *ppOVar8 = __this;
    thunk_FUN_01c20e04(ppOVar8,__this);
    (FBFPLEFCDOK->fields).HLFBMBHOPMI = DPJIDNBJIBG;
    lVar3 = Method_System_Collections_Generic_List<AFFHKININGD>_Add__;
    ppSVar7 = &(__this->fields).HDDNEKLMLMF;
    pSVar4 = *ppSVar7;
    if (pSVar4 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
      pAVar6 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pAVar6 != (AFFHKININGD_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pAVar6->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pAVar6->m_Items[(int)uVar2] = FBFPLEFCDOK;
          thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar2,FBFPLEFCDOK);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)FBFPLEFCDOK
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
          NLPJLHOEAOE__GOLLEBBHEHE(__this_00,FBFPLEFCDOK,(MethodInfo *)0x0);
          uVar1 = (__this->fields).AELJGHFFPPC + 1;
          (__this->fields).AELJGHFFPPC = uVar1;
          if ((__this->fields).KIHDFNGKPGN <= uVar1) {
            (__this->fields).KANKFCNHDPA = true;
          }
          pSVar4 = *ppSVar7;
          if ((OOMHDDBCBJP_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          keySelector = OOMHDDBCBJP_<>c_TypeInfo->static_fields->__9__114_0;
          if (keySelector == (System_Func_AFFHKININGD__int__o *)0x0) {
            if ((OOMHDDBCBJP_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            keySelector = (System_Func_AFFHKININGD__int__o *)
                          thunk_FUN_01bda818(System_Func<AFFHKININGD,_int>_TypeInfo);
            System_Func<object,_int>___ctor();
            ppSVar5 = &OOMHDDBCBJP_<>c_TypeInfo->static_fields->__9__114_0;
            *ppSVar5 = keySelector;
            thunk_FUN_01c20e04(ppSVar5,keySelector);
          }
          source = System_Linq_Enumerable__OrderBy<object,_int>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                              (System_Func_TSource__TKey__o *)keySelector,
                              Method_System_Linq_Enumerable_OrderBy<AFFHKININGD,_int>__);
          pSVar4 = (System_Collections_Generic_List_AFFHKININGD__o *)
                   System_Linq_Enumerable__ToList<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              Method_System_Linq_Enumerable_ToList<AFFHKININGD>__);
          *ppSVar7 = pSVar4;
          thunk_FUN_01c20e04(ppSVar7,pSVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FLCMDHADNCN(XmlNode AHDGNOJPPIB)  [RVA 0x3287540]
// OOMHDDBCBJP$$FLCMDHADNCN @ RVA 0x3287540

void OOMHDDBCBJP__FLCMDHADNCN
               (OOMHDDBCBJP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  DPDDOKKMMOM_o *pDVar1;
  DPDDOKKMMOM_Fields *pDVar2;
  
  OOMHDDBCBJP__NDLGJIGPLAP(__this,AHDGNOJPPIB,method);
  pDVar1 = (__this->fields).CIHKJLAGDLJ;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    pDVar2 = &pDVar1->fields;
    pDVar2->DMLGJFCNNJF = AHDGNOJPPIB;
    thunk_FUN_01c20e04(pDVar2,AHDGNOJPPIB);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string HJKECJJMJDK()  [RVA 0x3287574]
// OOMHDDBCBJP$$HJKECJJMJDK @ RVA 0x3287574

System_String_o * OOMHDDBCBJP__HJKECJJMJDK(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  return (__this->fields).CNHHLPPHNCO;
}

