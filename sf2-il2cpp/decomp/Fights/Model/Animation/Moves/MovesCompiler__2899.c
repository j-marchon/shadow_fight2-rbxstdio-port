// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.MovesCompiler  (obfuscated CGALNIOABHK)
// TypeDefIndex 2899
// Namespace: 
// public static class MovesCompiler
// Fields:
//   public const string NLEIEAICLKM = "/moves.xml";
//   private static readonly char[] CHGAPDHMOHM; // 0x0
//   private static Dictionary<string, XmlNode> OJGHOJALHBK; // 0x8

// ===== private static void DBANMLBOKIP(InfoAnimation.HJPFANEPGJF DMGLMCBIAGL, XmlNode AHDGNOJPPIB, List<XmlNode> EDMMHCAGPON)  [RVA 0x34428C0]
// MovesCompiler$$DBANMLBOKIP @ RVA 0x34428C0

void MovesCompiler__DBANMLBOKIP
               (InfoAnimation_HJPFANEPGJF_o *DMGLMCBIAGL,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  InfoAnimation_KFMLLPPCPHI_o *pEVar2;
  Il2CppObject *pIVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  InfoAnimation_KFMLLPPCPHI_o **ppEVar4;
  int index;
  undefined1 auVar5 [16];
  long lVar1;
  
  if ((DAT_04568234 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_2803/*"Align"*/);
    DAT_04568234 = 1;
  }
  if (DMGLMCBIAGL != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    ppEVar4 = &(DMGLMCBIAGL->fields).EJNDOMGCGFL;
    if ((*ppEVar4 != (InfoAnimation_KFMLLPPCPHI_o *)0x0) &&
       (((*ppEVar4)->fields).OKONAOJIODE = false, AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
                    /* try { // try from 0354294c to 036429d7 has its CatchHandler @ 0354294c
                       catch() { ... } // from try @ 0354294c with catch @ 0354294c
                       catch() { ... } // from try @ 035429f0 with catch @ 0354294c
                       catch() { ... } // from try @ 03542a48 with catch @ 0354294c
                       catch() { ... } // from try @ 03542a78 with catch @ 0354294c */
      auVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_2803/*"Align"*/,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      lVar1 = auVar5._0_8_;
      if (lVar1 == 0) {
        if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
          if ((EDMMHCAGPON->fields)._size < 1) {
            return;
          }
          index = 0;
                    /* try { // try from 035429d8 to 036429df has its CatchHandler @ 03542a2c */
          while (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                                     Method_System_Collections_Generic_List<XmlNode>_get_Item__),
                pIVar3 != (Il2CppObject *)0x0) {
                    /* try { // try from 035429e8 to 036429ef has its CatchHandler @ 03542a28 */
                    /* try { // try from 035429f0 to 03642a43 has its CatchHandler @ 0354294c */
            auVar5 = (*pIVar3->klass->vtable[0x33].methodPtr)
                               (pIVar3,StringLiteral_2803/*"Align"*/,pIVar3->klass->vtable[0x33].method);
            lVar1 = auVar5._0_8_;
            if (lVar1 != 0) {
              if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                auVar5._8_8_ = extraout_x1_00;
                auVar5._0_8_ = lVar1;
              }
              goto LAB_03542978;
            }
            index = index + 1;
            if ((EDMMHCAGPON->fields)._size <= index) {
              return;
            }
          }
        }
      }
      else {
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          auVar5._8_8_ = extraout_x1;
          auVar5._0_8_ = lVar1;
        }
LAB_03542978:
        pEVar2 = MovesCompiler__OFPKFCDBHDL(auVar5._0_8_,auVar5._8_8_);
        *ppEVar4 = pEVar2;
        thunk_FUN_01c20e04(ppEVar4,pEVar2);
        if (*ppEVar4 != (InfoAnimation_KFMLLPPCPHI_o *)0x0) {
          ((*ppEVar4)->fields).OKONAOJIODE = true;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035429e8 with catch @ 03542a28
                        */
  FUN_01bab8c8();
}


// ===== private static List<ConditionAnimation> MLJDPILPJDE(string BCPAFBNLBDE, XmlNode OBDMHHJBLKL, List<XmlNode> EDMMHCAGPON)  [RVA 0x34431E4]
// MovesCompiler$$MLJDPILPJDE @ RVA 0x34431E4

System_Collections_Generic_List_IENLNOEDCFF__o *
MovesCompiler__MLJDPILPJDE
          (System_String_o *BCPAFBNLBDE,System_Xml_XmlNode_o *OBDMHHJBLKL,
          System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
                    /* try { // try from 035431e4 to 036431ef has its CatchHandler @ 03543030 */
                    /* try { // try from 035431f0 to 036431f7 has its CatchHandler @ 035431f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035431dc with catch @ 035431f8
                       catch(type#2 @ 00000000) { ... } // from try @ 035431f0 with catch @ 035431f8
                        */
  if ((DAT_04568235 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    DAT_04568235 = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,BCPAFBNLBDE);
    if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
    }
    MovesCompiler__MLJDPILPJDE(pSVar1,JGHPAFEFEFB,pMVar3);
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0354334c;
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,BCPAFBNLBDE);
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
        }
        MovesCompiler__MLJDPILPJDE(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_0354334c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CMDOHLDFLLF()  [RVA 0x3443740]
// MovesCompiler$$CMDOHLDFLLF @ RVA 0x3443740

System_String_o * MovesCompiler__CMDOHLDFLLF(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlDocument_o *EPHIMGPGNPK;
  
  if ((DAT_04568236 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1534/*"/moves.xml"*/);
    FUN_01bab630(&StringLiteral_1142/*"*parse error*"*/);
    DAT_04568236 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__AAELNNJNDIF((MethodInfo *)0x0);
  EPHIMGPGNPK = GIAMPEGMNHE__IBJOMPOLPCC
                          (pSVar1,StringLiteral_1534/*"/moves.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (EPHIMGPGNPK != (System_Xml_XmlDocument_o *)0x0) {
    pSVar1 = EIABCPKDEBD__KGPPJAHDJEH(EPHIMGPGNPK,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_1142/*"*parse error*"*/;
}


// ===== private static void OPECGOMJLLP(XmlNode JHMENEKPIBO, List<ActionAnimation> JGHPAFEFEFB)  [RVA 0x34437F0]
// MovesCompiler$$OPECGOMJLLP @ RVA 0x34437F0

/* WARNING: Removing unreachable block (ram,0x03543ae0) */

void MovesCompiler__OPECGOMJLLP
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_IIMNGGHGKOD__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  ActionAnimation_o *item;
  long lVar7;
  ActionAnimation_array *pIVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04568237 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_set_Capacity__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568237 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<ActionAnimation>_set_Capacity__);
      plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03543944;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03543944:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_03543a90;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03543a78;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_035439a4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_035439a4:
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
          }
          item = ActionsParser__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<ActionAnimation>_Add__;
          if (item != (ActionAnimation_o *)0x0) {
            pIVar8 = (JGHPAFEFEFB->fields)._items;
            (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
            if (pIVar8 == (ActionAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (JGHPAFEFEFB->fields)._size;
            if (uVar3 < (uint)pIVar8->max_length) {
              (JGHPAFEFEFB->fields)._size = uVar3 + 1;
              pIVar8->m_Items[(int)uVar3] = item;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                         (Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03543a78:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03543aac;
    }
  }
LAB_03543a90:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03543aac:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private static List<ModelConditions> MKJOEPDDOJP(XmlNode OBDMHHJBLKL)  [RVA 0x3443BAC]
// MovesCompiler$$MKJOEPDDOJP @ RVA 0x3443BAC

/* WARNING: Removing unreachable block (ram,0x03544068) */

System_Collections_Generic_List_KAFCPHCBLPL__o *
MovesCompiler__MKJOEPDDOJP(System_Xml_XmlNode_o *OBDMHHJBLKL,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int32_t iVar5;
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *OBDMHHJBLKL_00;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  ModelConditions_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  MethodInfo *in_x3;
  long lVar10;
  ModelConditions_array *pKVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar15;
  
  auVar14._8_8_ = method;
  auVar14._0_8_ = OBDMHHJBLKL;
  if ((DAT_04568238 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&ModelConditions_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelConditions>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelConditions>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ModelConditions>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_6581/*"FrameShift"*/);
    auVar14 = FUN_01bab630(&StringLiteral_6477/*"FirstFrame"*/);
    DAT_04568238 = 1;
  }
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    auVar14 = (*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                        (OBDMHHJBLKL,(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method);
    plVar6 = auVar14._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar14._8_8_;
    auVar14 = auVar3 << 0x40;
    if (plVar6 != (long *)0x0) {
      iVar5 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      __this = (System_Collections_Generic_List_KAFCPHCBLPL__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<ModelConditions>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this,iVar5,
                 Method_System_Collections_Generic_List<ModelConditions>__ctor__);
      auVar14 = (*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                          (OBDMHHJBLKL,(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method);
      plVar6 = auVar14._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar14._8_8_;
      auVar14 = auVar4 << 0x40;
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03543d60;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03543d60:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar12 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
            if (plVar6 == (long *)0x0) {
              return __this;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_03543fe8;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_03543fd0;
          }
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_03543dc0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03543dc0:
          OBDMHHJBLKL_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (OBDMHHJBLKL_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((OBDMHHJBLKL_00->klass->_2).naturalAligment < bVar1) ||
               ((OBDMHHJBLKL_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(OBDMHHJBLKL_00);
            }
          }
          if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          AHEFOIOKDOK = MovesCompiler__MLJDPILPJDE
                                  (StringLiteral_4577/*"Conditions"*/,OBDMHHJBLKL_00,
                                   (System_Collections_Generic_List_XmlNode__o *)0x0,in_x3);
          __this_00 = (ModelConditions_o *)thunk_FUN_01bda818(ModelConditions_TypeInfo);
          ModelConditions___ctor(__this_00,AHEFOIOKDOK,(MethodInfo *)0x0);
          if (OBDMHHJBLKL_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (OBDMHHJBLKL_00,
                              (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_6477/*"FirstFrame"*/,(MethodInfo *)0x0);
          if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
            if (__this_00 == (ModelConditions_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).FMGLHJDODPA = false;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (OBDMHHJBLKL_00,
                                (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_6477/*"FirstFrame"*/,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar5,(MethodInfo *)0x0);
            (__this_00->fields).JAHFGPMFLGN.fields = CVar15;
          }
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (OBDMHHJBLKL_00,
                              (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_6581/*"FrameShift"*/,(MethodInfo *)0x0);
          if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
            if (__this_00 == (ModelConditions_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).FMGLHJDODPA = true;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (OBDMHHJBLKL_00,
                                (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_6581/*"FrameShift"*/,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar5,(MethodInfo *)0x0);
            (__this_00->fields).JAHFGPMFLGN.fields = CVar15;
          }
          lVar10 = Method_System_Collections_Generic_List<ModelConditions>_Add__;
          if (__this == (System_Collections_Generic_List_KAFCPHCBLPL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pKVar11 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pKVar11 == (ModelConditions_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pKVar11->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pKVar11->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pKVar11->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
            ;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar14._0_8_,auVar14._8_8_);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03543fd0:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03544004;
    }
  }
LAB_03543fe8:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03544004:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return __this;
}


// ===== private static void .cctor()  [RVA 0x34441A0]
// MovesCompiler$$.cctor @ RVA 0x34441A0

void MovesCompiler___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  
  if ((DAT_04568239 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    DAT_04568239 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = 0x7c;
      MovesCompiler_TypeInfo->static_fields->CHGAPDHMOHM = pSVar1;
      thunk_FUN_01c20e04(MovesCompiler_TypeInfo->static_fields);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA COCMBLDPDIM(XmlNode AHDGNOJPPIB)  [RVA 0x3444230]
// MovesCompiler$$COCMBLDPDIM @ RVA 0x3444230

InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *
MovesCompiler__COCMBLDPDIM(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *__this;
  undefined8 uVar2;
  DistancePoint_o *pPVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456823a & 1) == 0) {
    FUN_01bab630(&InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_TypeInfo);
    FUN_01bab630(&StringLiteral_13833/*"To"*/);
    FUN_01bab630(&StringLiteral_6609/*"From"*/);
    FUN_01bab630(&StringLiteral_7357/*"Impulse"*/);
    DAT_0456823a = 1;
    method = extraout_x1;
  }
  __this = (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)
           thunk_FUN_01bda818(InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_TypeInfo,method);
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA___ctor(__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    uVar2 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                      (AHDGNOJPPIB,StringLiteral_6609/*"From"*/,
                       (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if ((__this != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
       (pPVar3 = (__this->fields).DBNCGNGNGNM, pPVar3 != (DistancePoint_o *)0x0)) {
      (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                (pPVar3,uVar2,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
      uVar2 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_13833/*"To"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      pPVar3 = (__this->fields).OCNJNIOMPMJ;
      if (pPVar3 != (DistancePoint_o *)0x0) {
        (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                  (pPVar3,uVar2,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
        AHDGNOJPPIB_00 =
             (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_7357/*"Impulse"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        iVar1 = InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA__HMCBPDICONH(AHDGNOJPPIB_00,(MethodInfo *)0x0);
        (__this->fields).GDPIIGNJCLE = iVar1;
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void BOEHFFCDAJO(XmlNode JGHPAFEFEFB, XmlNode ABOGEFBHAPG)  [RVA 0x3444358]
// MovesCompiler$$BOEHFFCDAJO @ RVA 0x3444358

/* WARNING: Removing unreachable block (ram,0x035445dc) */

void MovesCompiler__BOEHFFCDAJO
               (System_Xml_XmlNode_o *JGHPAFEFEFB,System_Xml_XmlNode_o *ABOGEFBHAPG,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttribute_o *JOHFLOEABJL;
  System_String_o *name;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0456823b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_0456823b = 1;
  }
  if ((ABOGEFBHAPG == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(ABOGEFBHAPG->klass->vtable)._16_get_Attributes.methodPtr)
                                 (ABOGEFBHAPG,(ABOGEFBHAPG->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03544440;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_03544440:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0354457c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_035444a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_035444a0:
    JOHFLOEABJL = (System_Xml_XmlAttribute_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    name = (System_String_o *)
           (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                     (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
    if (JGHPAFEFEFB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JGHPAFEFEFB->klass->vtable)._16_get_Attributes.methodPtr)
                       (JGHPAFEFEFB,(JGHPAFEFEFB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__DGPOFACHGMP(JGHPAFEFEFB,JOHFLOEABJL,(MethodInfo *)0x0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03544598;
    }
  }
LAB_0354457c:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_03544598:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private static List<InfoAnimation> JIOCLOBELJJ(XmlNode OBDMHHJBLKL, Dictionary<string, TemplateAnimation> PHOLAJOMLEL, List<InfoAnimation> KENFFDHLNDA, HashSet<string> KHIINLPNKPC, List<KCLPNDAPADO> LKHHJJJFHGN)  [RVA 0x34446B8]
// MovesCompiler$$JIOCLOBELJJ @ RVA 0x34446B8

/* WARNING: Removing unreachable block (ram,0x035457e0) */
/* WARNING: Removing unreachable block (ram,0x0354595c) */
/* WARNING: Removing unreachable block (ram,0x03545a28) */
/* WARNING: Removing unreachable block (ram,0x035456f4) */

System_Collections_Generic_List_ECENNHNBAME__o *
MovesCompiler__JIOCLOBELJJ
          (System_Xml_XmlNode_o *OBDMHHJBLKL,
          System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *PHOLAJOMLEL,
          System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA,
          System_Collections_Generic_HashSet_string__o *KHIINLPNKPC,
          System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN,MethodInfo *method)

{
  Il2CppClass *__this;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_XmlNode__o *PIPBEEIHMJN;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  InfoAnimation_o *pEVar12;
  System_String_o **ppSVar13;
  MGNDHCBAPEN_T1__T2__o *__this_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  KCLPNDAPADO_o *__this_02;
  undefined8 uVar14;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar15;
  MethodInfo *method_00;
  long lVar16;
  System_Object_array *pSVar17;
  InfoAnimation_array *pEVar18;
  KCLPNDAPADO_array *pKVar19;
  ulong uVar20;
  int *piVar21;
  InfoAnimation_MNDFKOHIAHI_o *__this_03;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar22;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar23;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  System_Collections_Generic_List_T__o *local_b8 [3];
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)KHIINLPNKPC;
  if ((DAT_0456823c & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<InfoAnimation,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<InfoAnimation,_string>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<InfoAnimation,_string>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KCLPNDAPADO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_set_Capacity__
                );
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<InfoAnimation,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<InfoAnimation,_string>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8314/*"Labels"*/);
    FUN_01bab630(&StringLiteral_9543/*"NoWallRepulsion"*/);
    FUN_01bab630(&StringLiteral_8753/*"MOVE"*/);
    FUN_01bab630(&StringLiteral_3773/*"CameraCOMAlignStage"*/);
    FUN_01bab630(&StringLiteral_12498/*"StyleFactor"*/);
    FUN_01bab630(&StringLiteral_8667/*"Looped"*/);
    FUN_01bab630(&StringLiteral_14855/*"WallRepulsion"*/);
    FUN_01bab630(&StringLiteral_9050/*"MidFrames"*/);
    FUN_01bab630(&StringLiteral_6396/*"FileName"*/);
    FUN_01bab630(&StringLiteral_5736/*"EndFrame"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9077/*"MirrorNode"*/);
    FUN_01bab630(&StringLiteral_9538/*"NoMagicRecharge"*/);
    FUN_01bab630(&StringLiteral_10262/*"Physics"*/);
    FUN_01bab630(&StringLiteral_12808/*"TacticEquivalent"*/);
    FUN_01bab630(&StringLiteral_11428/*"Rotation"*/);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_5755/*"EndsStage"*/);
    FUN_01bab630(&StringLiteral_10072/*"PackName"*/);
    FUN_01bab630(&StringLiteral_2805/*"AlignOnParentWallCollision"*/);
    FUN_01bab630(&StringLiteral_10470/*"Priority"*/);
    FUN_01bab630(&StringLiteral_6477/*"FirstFrame"*/);
    FUN_01bab630(&StringLiteral_9524/*"NoAnimation"*/);
    FUN_01bab630(&StringLiteral_12067/*"Show"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_12810/*"TacticWeapon"*/);
    FUN_01bab630(&StringLiteral_2670/*"ATTACK"*/);
    FUN_01bab630(&StringLiteral_22326/*"{0} tactic equivalent {1} not found"*/);
    FUN_01bab630(&StringLiteral_9535/*"NoInterpolationFrames"*/);
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_0456823c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            (__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>__ctor__);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__set_Capacity
              (__this_00,100,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_set_Capacity__
              );
    PIPBEEIHMJN = (System_Collections_Generic_List_XmlNode__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)PIPBEEIHMJN,
               Method_System_Collections_Generic_List<XmlNode>__ctor__);
    if ((OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) &&
       (plVar5 = (long *)(*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (OBDMHHJBLKL,
                                    (OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method),
       plVar5 != (long *)0x0)) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar16 = *plVar5;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03544ae8;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03544ae8:
        uVar20 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar20 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_035456e8;
          lVar16 = *plVar5;
          uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar20 == 0) goto LAB_035456c0;
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_035456a8;
        }
        lVar16 = *plVar5;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar16 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_03544b48;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03544b48:
        pSVar7 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar7);
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                            (pSVar9,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_8314/*"Labels"*/,(MethodInfo *)0x0);
        pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        pMVar15 = extraout_x1;
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar15 = extraout_x1_00;
        }
        bVar3 = MovesCompiler__BHCAAHDJJJK(pSVar11,pMVar15);
        if (bVar3) {
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_10072/*"PackName"*/,(MethodInfo *)0x0);
          pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
          pMVar15 = extraout_x1_01;
          if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar15 = extraout_x1_02;
          }
          bVar3 = MovesCompiler__DAGLOBOBEIG(pSVar11,pMVar15);
          if (bVar3) {
            if (PIPBEEIHMJN == (System_Collections_Generic_List_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar4 = (PIPBEEIHMJN->fields)._size;
            (PIPBEEIHMJN->fields)._size = 0;
            (PIPBEEIHMJN->fields)._version = (PIPBEEIHMJN->fields)._version + 1;
            if (0 < iVar4) {
              method_00 = (MethodInfo *)0x0;
              System_Array__Clear((System_Array_o *)(PIPBEEIHMJN->fields)._items,0,iVar4,
                                  (MethodInfo *)0x0);
            }
            if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MovesCompiler__KJLLLGAEJFG(pSVar7,pSVar7,PIPBEEIHMJN,method_00);
            pEVar12 = (InfoAnimation_o *)thunk_FUN_01bda818(InfoAnimation_TypeInfo);
            InfoAnimation___ctor(pEVar12,(MethodInfo *)0x0);
            if (pEVar12 == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            ppSVar13 = &(pEVar12->fields).JIJLBFGKNJK;
            *ppSVar13 = pSVar10;
            thunk_FUN_01c20e04(ppSVar13,pSVar10);
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            (pEVar12->fields).IGLHCNLNIPK = iVar4;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (pEVar12->fields).KBCOHMPJELJ = pSVar10;
            thunk_FUN_01c20e04();
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9050/*"MidFrames"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar4,(MethodInfo *)0x0);
            (pEVar12->fields).FECCBIOBKAF.fields = CVar22;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_6477/*"FirstFrame"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar4,(MethodInfo *)0x0);
            (pEVar12->fields).LCLBPCMKHPM.fields = CVar22;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_5736/*"EndFrame"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar4,(MethodInfo *)0x0);
            (pEVar12->fields).IPAGCJKIPEN.fields = CVar22;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_10470/*"Priority"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar4,(MethodInfo *)0x0);
            (pEVar12->fields).EAFPDFHFBOM.fields = CVar22;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9538/*"NoMagicRecharge"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            (pEVar12->fields).BGHFADDGPAD = 0;
            (pEVar12->fields).BNLDAAPGEHO = bVar3;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9543/*"NoWallRepulsion"*/,(MethodInfo *)0x0);
            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
              if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar8,StringLiteral_9543/*"NoWallRepulsion"*/,(MethodInfo *)0x0);
              bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
              CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                 (bVar3,(MethodInfo *)0x0);
              (pEVar12->fields).OEGKFPBBLEP.fields = CVar23;
            }
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_14855/*"WallRepulsion"*/,(MethodInfo *)0x0);
            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
              if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar8,StringLiteral_14855/*"WallRepulsion"*/,(MethodInfo *)0x0);
              bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
              CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                 ((bool)(~bVar3 & 1),(MethodInfo *)0x0);
              (pEVar12->fields).OEGKFPBBLEP.fields = CVar23;
            }
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_12498/*"StyleFactor"*/,(MethodInfo *)0x0);
            CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar9,1.0,(MethodInfo *)0x0);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_b8,CJNHFNHJHPE,
                       (MethodInfo *)0x0);
            local_d0.fields._8_8_ = local_b8[1];
            local_d0.fields._list = local_b8[0];
            local_d0.fields._current._0_1_ = local_b8[2]._0_1_;
            local_d0.fields._current._1_1_ = local_b8[2]._1_1_;
            local_d0.fields._current._2_2_ = local_b8[2]._2_2_;
            (pEVar12->fields).DDBKJGNJHPP.fields.fakeValueActive = local_b8[2]._0_1_;
            (pEVar12->fields).DDBKJGNJHPP.fields.inited = local_b8[2]._1_1_;
            *(undefined2 *)&(pEVar12->fields).DDBKJGNJHPP.fields.field_0x12 = local_b8[2]._2_2_;
            *(System_Collections_Generic_List_T__o **)
             &(pEVar12->fields).DDBKJGNJHPP.fields.hiddenValueOldByte4 = local_b8[1];
            *(System_Collections_Generic_List_T__o **)&(pEVar12->fields).DDBKJGNJHPP.fields =
                 local_b8[0];
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_10262/*"Physics"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            (pEVar12->fields).BFMPHOCJIHP = bVar3;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_5755/*"EndsStage"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                               (bVar3,(MethodInfo *)0x0);
            (pEVar12->fields).HLDOANABODA.fields = CVar23;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_8667/*"Looped"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            InfoAnimation__JNBPPHIFBMC(pEVar12,bVar3,(MethodInfo *)0x0);
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9535/*"NoInterpolationFrames"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            (pEVar12->fields).HEFBBDINLMN = bVar3;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9524/*"NoAnimation"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            (pEVar12->fields).BDINFCJOMNC = bVar3;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_2805/*"AlignOnParentWallCollision"*/,(MethodInfo *)0x0);
            bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
            (pEVar12->fields).LIAEJLADLPH = bVar3;
            InfoAnimation__LLPDMCGMLOK(pEVar12,(MethodInfo *)0x0);
            InfoAnimation__JLJIIIPLIPK(pEVar12,(pEVar12->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9077/*"MirrorNode"*/,(MethodInfo *)0x0);
            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
              __this_03 = (pEVar12->fields).FGEAOBODDAP;
              pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              if (__this_03 == (InfoAnimation_MNDFKOHIAHI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              InfoAnimation_MNDFKOHIAHI__CMAABCJILJH(__this_03,pSVar10,(MethodInfo *)0x0);
            }
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_3773/*"CameraCOMAlignStage"*/,(MethodInfo *)0x0);
            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              iVar4 = StageType__GILKLPLMPFM(pSVar10,(MethodInfo *)0x0);
              (pEVar12->fields).NECLMKFFDCO = iVar4;
            }
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_12810/*"TacticWeapon"*/,(MethodInfo *)0x0);
            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            InfoAnimation__EKIGLDNIJBC(pEVar12,pSVar10,(MethodInfo *)0x0);
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_12808/*"TacticEquivalent"*/,(MethodInfo *)0x0);
            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            bVar3 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
            if (!bVar3) {
              __this_01 = (MGNDHCBAPEN_T1__T2__o *)
                          thunk_FUN_01bda818(MGNDHCBAPEN<InfoAnimation,_string>_TypeInfo);
              method_00 = Method_MGNDHCBAPEN<InfoAnimation,_string>__ctor__;
              MGNDHCBAPEN<object,_object>___ctor
                        (__this_01,(Il2CppObject *)pEVar12,(Il2CppObject *)pSVar10,
                         (MethodInfo_27BB420 *)Method_MGNDHCBAPEN<InfoAnimation,_string>__ctor__);
              lVar16 = 
              Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_Add__;
              pSVar17 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pSVar17 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar17->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pSVar17->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
                thunk_FUN_01c20e04(pSVar17->m_Items + (int)uVar2,__this_01);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_00,(Il2CppObject *)__this_01,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_10470/*"Priority"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar4,(MethodInfo *)0x0);
            (pEVar12->fields).EAFPDFHFBOM.fields = CVar22;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              bVar3 = System_String__op_Equality(pSVar10,StringLiteral_8753/*"MOVE"*/,(MethodInfo *)0x0);
              if (bVar3) {
                iVar4 = 1;
              }
              else {
                bVar3 = System_String__op_Equality(pSVar10,StringLiteral_2670/*"ATTACK"*/,(MethodInfo *)0x0);
                if (!bVar3) goto LAB_03545494;
                iVar4 = 2;
              }
              (pEVar12->fields).BGHFADDGPAD = iVar4;
            }
LAB_03545494:
            if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MovesCompiler__HNOMDBJEICP(PIPBEEIHMJN,pEVar12,PHOLAJOMLEL,method_00);
            MovesCompiler__AKNNHCKPLEA(pSVar7,PIPBEEIHMJN,pEVar12,method_00);
            MovesCompiler__AMHDBJPIFOO(pEVar12,pSVar7,PIPBEEIHMJN,method_00);
            pMVar15 = (pSVar7->klass->vtable)._51_get_Item.method;
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                          (*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar7,StringLiteral_11428/*"Rotation"*/);
            MovesCompiler__MNEAHFKOHKI(pEVar12,AHDGNOJPPIB,pMVar15);
            InfoAnimation__GIENGNEGHPJ(pEVar12,(MethodInfo *)0x0);
            lVar16 = Method_System_Collections_Generic_List<InfoAnimation>_Add__;
            if (KENFFDHLNDA == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pEVar18 = (KENFFDHLNDA->fields)._items;
            (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
            if (pEVar18 == (InfoAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (KENFFDHLNDA->fields)._size;
            if (uVar2 < (uint)pEVar18->max_length) {
              (KENFFDHLNDA->fields)._size = uVar2 + 1;
              pEVar18->m_Items[(int)uVar2] = pEVar12;
              thunk_FUN_01c20e04(pEVar18->m_Items + (int)uVar2,pEVar12);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                         (Il2CppObject *)pEVar12,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                        );
            }
            pSVar7 = (System_Xml_XmlNode_o *)
                     (*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar7,StringLiteral_10491/*"Profile"*/,
                                (pSVar7->klass->vtable)._51_get_Item.method);
            if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
              pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
              if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar8,StringLiteral_12067/*"Show"*/,(MethodInfo *)0x0);
              bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
              if (bVar3) {
                __this_02 = (KCLPNDAPADO_o *)thunk_FUN_01bda818(KCLPNDAPADO_TypeInfo);
                method_00 = (MethodInfo *)0x0;
                KCLPNDAPADO___ctor(__this_02,pSVar7,pEVar12,(MethodInfo *)0x0);
                lVar16 = Method_System_Collections_Generic_List<KCLPNDAPADO>_Add__;
                if (LKHHJJJFHGN == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pKVar19 = (LKHHJJJFHGN->fields)._items;
                (LKHHJJJFHGN->fields)._version = (LKHHJJJFHGN->fields)._version + 1;
                if (pKVar19 == (KCLPNDAPADO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (LKHHJJJFHGN->fields)._size;
                if (uVar2 < (uint)pKVar19->max_length) {
                  (LKHHJJJFHGN->fields)._size = uVar2 + 1;
                  pKVar19->m_Items[(int)uVar2] = __this_02;
                  thunk_FUN_01c20e04(pKVar19->m_Items + (int)uVar2,__this_02);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)LKHHJJJFHGN,
                             (Il2CppObject *)__this_02,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          else {
            if (KHIINLPNKPC == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_HashSet<object>__Add
                      ((System_Collections_Generic_HashSet_object__o *)KHIINLPNKPC,
                       (Il2CppObject *)pSVar10,
                       Method_System_Collections_Generic_HashSet<string>_Add__);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_035456a8:
    if (*(System_IDisposable_c **)(piVar21 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_035456dc;
    }
  }
LAB_035456c0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_035456dc:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_035456e8:
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_d0,__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<InfoAnimation,_string>>_GetEnumerator__
            );
  local_80.fields._current =
       (Il2CppObject *)CONCAT44(local_d0.fields._current._4_4_,local_d0.fields._current._0_4_);
  local_80.fields._index = local_d0.fields._index;
  local_80.fields._version = local_d0.fields._version;
  local_80.fields._list = local_d0.fields._list;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<InfoAnimation,_string>>_MoveNext__
                      );
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<InfoAnimation,_string>>_Dispose__
                );
      return KENFFDHLNDA;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (KENFFDHLNDA == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = local_80.fields._current[1].klass;
    pSVar10 = local_80.fields._current[1].monitor;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_d0,(System_Collections_Generic_List_object__o *)KENFFDHLNDA,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    local_a0.fields._current =
         (Il2CppObject *)CONCAT44(local_d0.fields._current._4_4_,local_d0.fields._current._0_4_);
    local_a0.fields._index = local_d0.fields._index;
    local_a0.fields._version = local_d0.fields._version;
    local_a0.fields._list = local_d0.fields._list;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
      pEVar12 = (InfoAnimation_o *)local_a0.fields._current;
      if (!bVar3) {
        pEVar12 = (InfoAnimation_o *)0x0;
        break;
      }
      if ((InfoAnimation_o *)local_a0.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        (((InfoAnimation_Fields *)((long)local_a0.fields._current + 0x10))->
                         JIJLBFGKNJK,pSVar10,(MethodInfo *)0x0);
    } while (!bVar3);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    if (pEVar12 == (InfoAnimation_o *)0x0) {
      pSVar17 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      if (__this == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pSVar17 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar11 = (__this->_1).typeMetadataHandle;
      if ((pSVar11 != (System_String_o *)0x0) &&
         (lVar16 = thunk_FUN_01bda71c(pSVar11,(((pSVar17->obj).klass)->_1).element_class),
         lVar16 == 0)) {
        uVar14 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar14,0);
      }
      if ((int)pSVar17->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar17->m_Items[0] = (Il2CppObject *)pSVar11;
      thunk_FUN_01c20e04(pSVar17->m_Items,pSVar11);
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar16 = thunk_FUN_01bda71c(pSVar10,(((pSVar17->obj).klass)->_1).element_class),
         lVar16 == 0)) {
        uVar14 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar14,0);
      }
      if ((uint)pSVar17->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar17->m_Items[1] = (Il2CppObject *)pSVar10;
      thunk_FUN_01c20e04(pSVar17->m_Items + 1,pSVar10);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_22326/*"{0} tactic equivalent {1} not found"*/,pSVar17,(MethodInfo *)0x0);
    }
    else {
      if (__this == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      InfoAnimation__MADPEPAMMJD((InfoAnimation_o *)__this,pEVar12,(MethodInfo *)0x0);
    }
  } while( true );
}


// ===== private static void MNEAHFKOHKI(InfoAnimation NLEBDPHNIDI, XmlNode AHDGNOJPPIB)  [RVA 0x3446AF4]
// MovesCompiler$$MNEAHFKOHKI @ RVA 0x3446AF4

void MovesCompiler__MNEAHFKOHKI
               (InfoAnimation_o *NLEBDPHNIDI,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  DistancePoint_o *__this_00;
  float CJNHFNHJHPE;
  
  if ((DAT_0456823d & 1) == 0) {
    FUN_01bab630(&DistancePoint_TypeInfo);
    FUN_01bab630(&StringLiteral_10362/*"Position"*/);
    FUN_01bab630(&StringLiteral_2963/*"Angle"*/);
    DAT_0456823d = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    CJNHFNHJHPE = 0.0;
  }
  else {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546c04;
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_2963/*"Angle"*/,(MethodInfo *)0x0);
    CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                   (AHDGNOJPPIB,StringLiteral_10362/*"Position"*/,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method
                   );
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
      DistancePoint___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
      if (NLEBDPHNIDI == (InfoAnimation_o *)0x0) goto LAB_03546c04;
      (NLEBDPHNIDI->fields).JCKNGNJBIIF = __this_00;
      thunk_FUN_01c20e04(&(NLEBDPHNIDI->fields).JCKNGNJBIIF,__this_00);
      goto LAB_03546be8;
    }
  }
  if (NLEBDPHNIDI != (InfoAnimation_o *)0x0) {
LAB_03546be8:
    InfoAnimation__CEPCEKHLKDN(NLEBDPHNIDI,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03546c04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static InfoAnimation.HJPFANEPGJF.CDDKPPNEEMB ACKGIKOKLEP(XmlNode OBDMHHJBLKL)  [RVA 0x3446C08]
// MovesCompiler$$ACKGIKOKLEP @ RVA 0x3446C08

InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *
MovesCompiler__ACKGIKOKLEP(System_Xml_XmlNode_o *OBDMHHJBLKL,MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *__this;
  long lVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456823e & 1) == 0) {
    FUN_01bab630(&InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_TypeInfo);
    FUN_01bab630(&StringLiteral_9420/*"NextAnimation"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11480/*"RunOnStart"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456823e = 1;
    method = extraout_x1;
  }
  __this = (InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *)
           thunk_FUN_01bda818(InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_TypeInfo,method);
  InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB___ctor(__this,(MethodInfo *)0x0);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    lVar1 = (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)
                      (OBDMHHJBLKL,StringLiteral_11480/*"RunOnStart"*/,
                       (OBDMHHJBLKL->klass->vtable)._51_get_Item.method);
    if (__this != (InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *)0x0) {
      (__this->fields).EGFDEAJLNND = lVar1 != 0;
      plVar2 = (long *)(*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)
                                 (OBDMHHJBLKL,StringLiteral_9420/*"NextAnimation"*/,
                                  (OBDMHHJBLKL->klass->vtable)._51_get_Item.method);
      if (plVar2 != (long *)0x0) {
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
        if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).KBHJKPDKNMA = pSVar3;
          thunk_FUN_01c20e04();
          (__this->fields).OKONAOJIODE = true;
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JODGPLBHHIA()  [RVA 0x3446D40]
// MovesCompiler$$JODGPLBHHIA @ RVA 0x3446D40

void MovesCompiler__JODGPLBHHIA(MethodInfo *method)

{
  MovesMaps__NDNPGAKJLHM((MethodInfo *)0x0);
  return;
}


// ===== private static void AKNNHCKPLEA(XmlNode AHDGNOJPPIB, List<XmlNode> EDMMHCAGPON, InfoAnimation NLEBDPHNIDI)  [RVA 0x3446508]
// MovesCompiler$$AKNNHCKPLEA @ RVA 0x3446508

void MovesCompiler__AKNNHCKPLEA
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,InfoAnimation_o *NLEBDPHNIDI,
               MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_o *__this;
  System_Collections_Generic_List_KJFPGDFNFCL__o *pSVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar2;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar3;
  System_Collections_Generic_List_IIMNGGHGKOD__o *pSVar4;
  System_Collections_Generic_List_KAFCPHCBLPL__o *pSVar5;
  InfoAnimation_HJPFANEPGJF_CDDKPPNEEMB_o *pEVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar7;
  InfoAnimation_o *method_00;
  undefined1 auVar8 [16];
  
                    /* try { // try from 03546520 to 03646547 has its CatchHandler @ 03546768 */
  method_00 = NLEBDPHNIDI;
  if ((DAT_0456823f & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&InfoAnimation_HJPFANEPGJF_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_13914/*"Transitions"*/);
    FUN_01bab630(&StringLiteral_8605/*"Locks"*/);
                    /* try { // try from 0354657c to 036465a7 has its CatchHandler @ 03546760 */
    FUN_01bab630(&StringLiteral_12000/*"Shop"*/);
    DAT_0456823f = 1;
  }
  __this = (InfoAnimation_HJPFANEPGJF_o *)thunk_FUN_01bda818(InfoAnimation_HJPFANEPGJF_TypeInfo);
  InfoAnimation_HJPFANEPGJF___ctor(__this,(MethodInfo *)0x0);
  if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MovesCompiler__GHPJIHEBELJ(AHDGNOJPPIB,EDMMHCAGPON,(MethodInfo *)method_00);
  if (__this != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
                    /* try { // try from 035465d8 to 036465df has its CatchHandler @ 03546748 */
    (__this->fields).AFFIHBMACFF = pSVar1;
    thunk_FUN_01c20e04();
    pSVar2 = MovesCompiler__MLJDPILPJDE(StringLiteral_4577/*"Conditions"*/,AHDGNOJPPIB,EDMMHCAGPON,method);
    (__this->fields).KPFGHBEKJIM = pSVar2;
    thunk_FUN_01c20e04();
    pMVar7 = (MethodInfo *)EDMMHCAGPON;
    pSVar2 = MovesCompiler__MLJDPILPJDE(StringLiteral_8605/*"Locks"*/,AHDGNOJPPIB,EDMMHCAGPON,method);
    (__this->fields).KFLHLLDPBIC = pSVar2;
                    /* try { // try from 03546620 to 0364663b has its CatchHandler @ 0354674c */
    thunk_FUN_01c20e04();
    pSVar3 = MovesCompiler__LJDOIGBJCMN(AHDGNOJPPIB,EDMMHCAGPON,pMVar7);
    (__this->fields).GLFJDDHEMNO = pSVar3;
                    /* try { // try from 0354663c to 0364670b has its CatchHandler @ 0354600c */
    thunk_FUN_01c20e04();
    pSVar4 = MovesCompiler__OPECGOMJLLP(AHDGNOJPPIB,EDMMHCAGPON,pMVar7);
    (__this->fields).NEIJJHEFLHP = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = MovesCompiler__APNMIPIALNP(AHDGNOJPPIB,EDMMHCAGPON,pMVar7);
    (__this->fields).ENCCFIFCDGL = pSVar2;
    thunk_FUN_01c20e04();
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      auVar8 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_13914/*"Transitions"*/,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      pMVar7 = auVar8._8_8_;
      if (auVar8._0_8_ != (System_Xml_XmlNode_o *)0x0) {
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar7 = extraout_x1;
        }
        pSVar5 = MovesCompiler__MKJOEPDDOJP(auVar8._0_8_,pMVar7);
        (__this->fields).NLPMEFHNMOI = pSVar5;
        thunk_FUN_01c20e04();
      }
      auVar8 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_12000/*"Shop"*/,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      pMVar7 = auVar8._8_8_;
      if (auVar8._0_8_ != (System_Xml_XmlNode_o *)0x0) {
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar7 = extraout_x1_00;
        }
        pEVar6 = MovesCompiler__ACKGIKOKLEP(auVar8._0_8_,pMVar7);
                    /* try { // try from 0354670c to 0364670f has its CatchHandler @ 0354675c */
                    /* try { // try from 03546710 to 03646713 has its CatchHandler @ 03546758 */
                    /* try { // try from 03546714 to 0364671b has its CatchHandler @ 03546814 */
        (__this->fields).MGCCHNBNJPC = pEVar6;
        thunk_FUN_01c20e04();
      }
                    /* try { // try from 0354671c to 03646723 has its CatchHandler @ 03546770 */
                    /* try { // try from 03546724 to 03646727 has its CatchHandler @ 0354600c */
      if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03546728 to 0364672b has its CatchHandler @ 03546744 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0354672c to 03646733 has its CatchHandler @ 0354600c */
                    /* try { // try from 03546734 to 03646737 has its CatchHandler @ 03546740 */
                    /* try { // try from 03546738 to 0364677f has its CatchHandler @ 0354600c */
      MovesCompiler__DBANMLBOKIP(__this,AHDGNOJPPIB,EDMMHCAGPON,method);
                    /* catch() { ... } // from try @ 03546734 with catch @ 03546740 */
                    /* catch() { ... } // from try @ 03546728 with catch @ 03546744 */
                    /* catch() { ... } // from try @ 035465d8 with catch @ 03546748 */
      MovesCompiler__OFNGFKIGDOJ(__this,AHDGNOJPPIB,EDMMHCAGPON,method);
                    /* catch() { ... } // from try @ 03546620 with catch @ 0354674c */
      if (NLEBDPHNIDI != (InfoAnimation_o *)0x0) {
                    /* catch() { ... } // from try @ 035463cc with catch @ 03546750 */
                    /* catch() { ... } // from try @ 03546414 with catch @ 03546754 */
                    /* catch() { ... } // from try @ 03546710 with catch @ 03546758 */
                    /* catch() { ... } // from try @ 0354670c with catch @ 0354675c */
                    /* catch() { ... } // from try @ 0354657c with catch @ 03546760 */
                    /* catch() { ... } // from try @ 03546370 with catch @ 03546764 */
                    /* catch() { ... } // from try @ 03546520 with catch @ 03546768 */
                    /* catch() { ... } // from try @ 03546314 with catch @ 0354676c */
        InfoAnimation__LLKAJAOEELF(NLEBDPHNIDI,__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354671c with catch @ 03546770 */
  FUN_01bab8c8();
}


// ===== private static List<EventAnimation> GHPJIHEBELJ(XmlNode OBDMHHJBLKL, List<XmlNode> EDMMHCAGPON)  [RVA 0x3446D48]
// MovesCompiler$$GHPJIHEBELJ @ RVA 0x3446D48

System_Collections_Generic_List_KJFPGDFNFCL__o *
MovesCompiler__GHPJIHEBELJ
          (System_Xml_XmlNode_o *OBDMHHJBLKL,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_KJFPGDFNFCL__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
  if ((DAT_04568240 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<EventAnimation>_TypeInfo);
    FUN_01bab630(&StringLiteral_5995/*"Events"*/);
    DAT_04568240 = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_KJFPGDFNFCL__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<EventAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<EventAnimation>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,StringLiteral_5995/*"Events"*/);
    if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
    }
    MovesCompiler__GHPJIHEBELJ(pSVar1,JGHPAFEFEFB,pMVar3);
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03546ec0;
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,StringLiteral_5995/*"Events"*/);
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
        }
        MovesCompiler__GHPJIHEBELJ(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_03546ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KMMFOCJLFIF(XmlNode AHDGNOJPPIB, List<ABNLGBHKOCE> KENFFDHLNDA)  [RVA 0x34478B8]
// MovesCompiler$$KMMFOCJLFIF @ RVA 0x34478B8

/* WARNING: Removing unreachable block (ram,0x03547c9c) */

void MovesCompiler__KMMFOCJLFIF
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_ABNLGBHKOCE__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *PJHODHEOHFN;
  ABNLGBHKOCE_o *__this;
  ABNLGBHKOCE_JBMHDDKONHC_o *__this_00;
  System_Collections_Generic_List_KJFPGDFNFCL__o *pSVar5;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar6;
  System_Collections_Generic_List_IIMNGGHGKOD__o *pSVar7;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  long lVar9;
  ABNLGBHKOCE_array *pAVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04568241 & 1) == 0) {
    FUN_01bab630(&ABNLGBHKOCE_TypeInfo);
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_8605/*"Locks"*/);
    DAT_04568241 = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03547a04;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03547a04:
    uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 03547bc0 with catch @ 03547bec */
                    /* try { // try from 03547bf4 to 03647bfb has its CatchHandler @ 03547c10 */
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
                    /* try { // try from 03547bfc to 03647c07 has its CatchHandler @ 03547abc */
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
                    /* try { // try from 03547c08 to 03647c0f has its CatchHandler @ 03547c10 */
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03547bf4 with catch @ 03547c10
                       catch(type#2 @ 00000000) { ... } // from try @ 03547c08 with catch @ 03547c10
                        */
      if (uVar11 == 0) goto LAB_03547c34;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03547a64;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03547a64:
    PJHODHEOHFN = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (PJHODHEOHFN != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((PJHODHEOHFN->klass->_2).naturalAligment < bVar1) ||
         ((PJHODHEOHFN->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(PJHODHEOHFN);
      }
    }
    __this = (ABNLGBHKOCE_o *)thunk_FUN_01bda818(ABNLGBHKOCE_TypeInfo);
                    /* try { // try from 03547abc to 03647b4f has its CatchHandler @ 03547abc
                       catch() { ... } // from try @ 03547abc with catch @ 03547abc
                       catch() { ... } // from try @ 03547b58 with catch @ 03547abc
                       catch() { ... } // from try @ 03547ba0 with catch @ 03547abc
                       catch() { ... } // from try @ 03547bc4 with catch @ 03547abc
                       catch() { ... } // from try @ 03547bfc with catch @ 03547abc */
    pMVar8 = (MethodInfo *)0x0;
    ABNLGBHKOCE___ctor(__this,PJHODHEOHFN,(MethodInfo *)0x0);
    __this_00 = (ABNLGBHKOCE_JBMHDDKONHC_o *)thunk_FUN_01bda818(ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
    ABNLGBHKOCE_JBMHDDKONHC___ctor(__this_00,(MethodInfo *)0x0);
    if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = MovesCompiler__GHPJIHEBELJ
                       (PJHODHEOHFN,(System_Collections_Generic_List_XmlNode__o *)0x0,pMVar8);
    if (__this_00 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_00->fields).AFFIHBMACFF = pSVar5;
    thunk_FUN_01c20e04();
    pSVar6 = MovesCompiler__MLJDPILPJDE
                       (StringLiteral_4577/*"Conditions"*/,PJHODHEOHFN,
                        (System_Collections_Generic_List_XmlNode__o *)0x0,in_x3);
    (__this_00->fields).KPFGHBEKJIM = pSVar6;
    thunk_FUN_01c20e04();
    pMVar8 = (MethodInfo *)0x0;
    pSVar6 = MovesCompiler__MLJDPILPJDE
                       (StringLiteral_8605/*"Locks"*/,PJHODHEOHFN,
                        (System_Collections_Generic_List_XmlNode__o *)0x0,in_x3);
    (__this_00->fields).KFLHLLDPBIC = pSVar6;
    thunk_FUN_01c20e04();
                    /* try { // try from 03547b50 to 03647b57 has its CatchHandler @ 03547ba8 */
                    /* try { // try from 03547b58 to 03647b9b has its CatchHandler @ 03547abc */
    pSVar7 = MovesCompiler__OPECGOMJLLP
                       (PJHODHEOHFN,(System_Collections_Generic_List_XmlNode__o *)0x0,pMVar8);
    (__this_00->fields).NEIJJHEFLHP = pSVar7;
    thunk_FUN_01c20e04();
    if (__this == (ABNLGBHKOCE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ABNLGBHKOCE__LLKAJAOEELF(__this,__this_00,(MethodInfo *)0x0);
    lVar9 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    if (KENFFDHLNDA == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar10 = (KENFFDHLNDA->fields)._items;
    (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
    if (pAVar10 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03547b9c to 03647b9f has its CatchHandler @ 03547ba4 */
    uVar2 = (KENFFDHLNDA->fields)._size;
                    /* try { // try from 03547ba0 to 03647bbf has its CatchHandler @ 03547abc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547b9c with catch @ 03547ba4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547b50 with catch @ 03547ba8
                        */
    if (uVar2 < (uint)pAVar10->max_length) {
      (KENFFDHLNDA->fields)._size = uVar2 + 1;
      pAVar10->m_Items[(int)uVar2] = __this;
                    /* try { // try from 03547bc0 to 03647bc3 has its CatchHandler @ 03547bec */
      thunk_FUN_01c20e04(pAVar10->m_Items + (int)uVar2,__this);
                    /* try { // try from 03547bc4 to 03647bf3 has its CatchHandler @ 03547abc */
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03547c50;
    }
  }
LAB_03547c34:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03547c50:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== private static void FMNBNOCEAHE(XmlNode ELOCKFLGKNO, Dictionary<string, TemplateAnimation> PHOLAJOMLEL)  [RVA 0x3447DA4]
// MovesCompiler$$FMNBNOCEAHE @ RVA 0x3447DA4

/* WARNING: Removing unreachable block (ram,0x03548148) */

void MovesCompiler__FMNBNOCEAHE
               (System_Xml_XmlNode_o *ELOCKFLGKNO,
               System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *PHOLAJOMLEL,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__XmlNode__o **ppSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *a;
  TemplateAnimation_o *__this;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04568242 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_XmlNode>_TypeInfo);
    FUN_01bab630(&TemplateAnimation_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    DAT_04568242 = 1;
  }
  if (PHOLAJOMLEL != (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
               Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_XmlNode>_TypeInfo);
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (pSVar3,Method_System_Collections_Generic_Dictionary<string,_XmlNode>__ctor__);
    if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar4 = &MovesCompiler_TypeInfo->static_fields->OJGHOJALHBK;
    *ppSVar4 = (System_Collections_Generic_Dictionary_string__XmlNode__o *)pSVar3;
    thunk_FUN_01c20e04(ppSVar4,pSVar3);
                    /* try { // try from 03547ec4 to 03647f9f has its CatchHandler @ 03547ec4
                       catch() { ... } // from try @ 03547ec4 with catch @ 03547ec4
                       catch() { ... } // from try @ 035480d0 with catch @ 03547ec4
                       catch() { ... } // from try @ 03548118 with catch @ 03547ec4
                       catch() { ... } // from try @ 03548168 with catch @ 03547ec4
                       catch() { ... } // from try @ 03548198 with catch @ 03547ec4 */
    if (ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    plVar5 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548100 with catch @ 03548144 */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03547f70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03547f70:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar8 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
                    /* try { // try from 035480ac to 036480cf has its CatchHandler @ 03548124 */
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_035480e4;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_035480cc;
        }
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 03547fa0 to 03647fa7 has its CatchHandler @ 0354814c */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03547fd0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03547fd0:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548108 with catch @ 03548134 */
          FUN_01bab8c8();
        }
                    /* try { // try from 03547fe8 to 03647ff3 has its CatchHandler @ 03548148 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* catch() { ... } // from try @ 0354804c with catch @ 0354812c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354810c with catch @ 03548130 */
          FUN_01babc64(AHDGNOJPPIB);
        }
                    /* try { // try from 03548014 to 0364801f has its CatchHandler @ 03548128 */
        a = (System_String_o *)
            (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
                    /* try { // try from 03548028 to 03648033 has its CatchHandler @ 0354811c */
        bVar2 = System_String__op_Equality(a,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (TemplateAnimation_o *)thunk_FUN_01bda818(TemplateAnimation_TypeInfo);
                    /* try { // try from 0354803c to 03648047 has its CatchHandler @ 03548138 */
          TemplateAnimation___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
          if (__this == (TemplateAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548104 with catch @ 0354813c */
            FUN_01bab8c8();
          }
                    /* try { // try from 0354804c to 03648053 has its CatchHandler @ 0354812c */
          System_Collections_Generic_Dictionary<object,_object>__Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                     (Il2CppObject *)(__this->fields).NPFMOEOIEKM,(Il2CppObject *)__this,
                     Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
                    /* try { // try from 03548060 to 0364806b has its CatchHandler @ 03548120 */
          if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   MovesCompiler_TypeInfo->static_fields->OJGHOJALHBK;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354803c with catch @ 03548138 */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (pSVar3,(Il2CppObject *)(__this->fields).NPFMOEOIEKM,(Il2CppObject *)AHDGNOJPPIB
                     ,Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Add__);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548110 with catch @ 03548140 */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_035480cc:
                    /* try { // try from 035480d0 to 036480ff has its CatchHandler @ 03547ec4 */
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03548100;
    }
  }
LAB_035480e4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03548100:
                    /* try { // try from 03548100 to 03648103 has its CatchHandler @ 03548144 */
                    /* try { // try from 03548104 to 03648107 has its CatchHandler @ 0354813c */
                    /* try { // try from 03548108 to 0364810b has its CatchHandler @ 03548134 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 03548110 to 03648117 has its CatchHandler @ 03548140 */
                    /* try { // try from 03548118 to 03648163 has its CatchHandler @ 03547ec4 */
                    /* catch() { ... } // from try @ 03548028 with catch @ 0354811c */
                    /* catch() { ... } // from try @ 03548060 with catch @ 03548120 */
                    /* catch() { ... } // from try @ 035480ac with catch @ 03548124 */
                    /* catch() { ... } // from try @ 03548014 with catch @ 03548128 */
  return;
}


// ===== private static void GHPJIHEBELJ(XmlNode JHMENEKPIBO, List<EventAnimation> JGHPAFEFEFB)  [RVA 0x34474CC]
// MovesCompiler$$GHPJIHEBELJ @ RVA 0x34474CC

/* WARNING: Removing unreachable block (ram,0x035477e8) */

void MovesCompiler__GHPJIHEBELJ
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_KJFPGDFNFCL__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  EventAnimation_o *__this;
  long lVar7;
  EventAnimation_array *pKVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04568243 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventAnimation>_set_Capacity__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568243 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
                    /* try { // try from 03547550 to 03647607 has its CatchHandler @ 03547550
                       catch() { ... } // from try @ 03547550 with catch @ 03547550
                       catch() { ... } // from try @ 03547610 with catch @ 03547550
                       catch() { ... } // from try @ 03547698 with catch @ 03547550
                       catch() { ... } // from try @ 035476bc with catch @ 03547550
                       catch() { ... } // from try @ 035476fc with catch @ 03547550 */
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<EventAnimation>_set_Capacity__);
      plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03547624;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
                    /* try { // try from 03547608 to 0364760f has its CatchHandler @ 035476a0 */
                    /* try { // try from 03547610 to 03647693 has its CatchHandler @ 03547550 */
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03547624:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_03547790;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03547778;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_03547684;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03547684:
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 03547694 to 03647697 has its CatchHandler @ 0354769c */
          if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03547698 to 036476b7 has its CatchHandler @ 03547550 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547694 with catch @ 0354769c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547608 with catch @ 035476a0
                        */
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035476b8 to 036476bb has its CatchHandler @ 035476e4 */
                    /* try { // try from 035476bc to 036476f3 has its CatchHandler @ 03547550 */
            if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(AHDGNOJPPIB);
            }
          }
          __this = MovesParser__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)0x0);
          if (__this != (EventAnimation_o *)0x0) {
                    /* catch() { ... } // from try @ 035476b8 with catch @ 035476e4 */
            EventAnimation__GIENGNEGHPJ(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
            lVar7 = Method_System_Collections_Generic_List<EventAnimation>_Add__;
            pKVar8 = (JGHPAFEFEFB->fields)._items;
                    /* try { // try from 035476f4 to 036476fb has its CatchHandler @ 03547710 */
            (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
                    /* try { // try from 035476fc to 03647707 has its CatchHandler @ 03547550 */
            if (pKVar8 == (EventAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (JGHPAFEFEFB->fields)._size;
                    /* try { // try from 03547708 to 0364770f has its CatchHandler @ 03547710 */
            if (uVar3 < (uint)pKVar8->max_length) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035476f4 with catch @ 03547710
                       catch(type#2 @ 00000000) { ... } // from try @ 03547708 with catch @ 03547710
                        */
              (JGHPAFEFEFB->fields)._size = uVar3 + 1;
              pKVar8->m_Items[(int)uVar3] = __this;
              thunk_FUN_01c20e04(pKVar8->m_Items + (int)uVar3,__this);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                         (Il2CppObject *)__this,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03547778:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_035477ac;
    }
  }
LAB_03547790:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_035477ac:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public static void HNIHOIAMDPC(List<InfoAnimation> BBNCKLAGHGA, HashSet<string> KHIINLPNKPC, Dictionary<string, TemplateAnimation> JAGLGJNPPHA, List<KCLPNDAPADO> LKHHJJJFHGN, List<ABNLGBHKOCE> AIEIIIHLDPO)  [RVA 0x3448240]
// MovesCompiler$$HNIHOIAMDPC @ RVA 0x3448240

void MovesCompiler__HNIHOIAMDPC
               (System_Collections_Generic_List_ECENNHNBAME__o *BBNCKLAGHGA,
               System_Collections_Generic_HashSet_string__o *KHIINLPNKPC,
               System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *JAGLGJNPPHA,
               System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN,
               System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO,MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *ELOCKFLGKNO;
  System_Xml_XmlNode_o *OBDMHHJBLKL;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__XmlNode__o **ppSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568244 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Clear__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1534/*"/moves.xml"*/);
    FUN_01bab630(&StringLiteral_12865/*"Templates"*/);
    FUN_01bab630(&StringLiteral_9222/*"Moves"*/);
    FUN_01bab630(&StringLiteral_9225/*"Movesxml"*/);
    FUN_01bab630(&StringLiteral_13926/*"Triggers"*/);
    DAT_04568244 = 1;
  }
  MovesMaps__GIENGNEGHPJ((MethodInfo *)0x0);
                    /* try { // try from 035482fc to 03648303 has its CatchHandler @ 03548428 */
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = SF2Paths__AAELNNJNDIF((MethodInfo *)0x0);
                    /* try { // try from 03548318 to 0364831b has its CatchHandler @ 03548420 */
                    /* try { // try from 0354831c to 0364832b has its CatchHandler @ 03548424 */
  method_01 = (MethodInfo *)0x0;
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_1534/*"/moves.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 0354832c to 0364843f has its CatchHandler @ 035481b0 */
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_9225/*"Movesxml"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      ELOCKFLGKNO = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar2 + 0x468))
                              (plVar2,StringLiteral_12865/*"Templates"*/,*(undefined8 *)(*plVar2 + 0x470));
      plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar1,StringLiteral_9225/*"Movesxml"*/,
                                  (pSVar1->klass->vtable)._51_get_Item.method);
      if (plVar2 != (long *)0x0) {
        OBDMHHJBLKL = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar2 + 0x468))
                                (plVar2,StringLiteral_9222/*"Moves"*/,*(undefined8 *)(*plVar2 + 0x470));
        plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar1,StringLiteral_9225/*"Movesxml"*/,
                                    (pSVar1->klass->vtable)._51_get_Item.method);
        if (plVar2 != (long *)0x0) {
          method_00 = *(MethodInfo **)(*plVar2 + 0x470);
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                        (**(code **)(*plVar2 + 0x468))(plVar2,StringLiteral_13926/*"Triggers"*/);
          if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
          }
          MovesCompiler__FMNBNOCEAHE(ELOCKFLGKNO,JAGLGJNPPHA,method_00);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548318 with catch @ 03548420
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354831c with catch @ 03548424
                        */
          MovesCompiler__JIOCLOBELJJ
                    (OBDMHHJBLKL,JAGLGJNPPHA,BBNCKLAGHGA,KHIINLPNKPC,LKHHJJJFHGN,method_01);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035482fc with catch @ 03548428
                        */
          MovesCompiler__KMMFOCJLFIF(AHDGNOJPPIB,AIEIIIHLDPO,(MethodInfo *)BBNCKLAGHGA);
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   MovesCompiler_TypeInfo->static_fields->OJGHOJALHBK;
                    /* try { // try from 03548440 to 03648443 has its CatchHandler @ 0354846c */
          if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 03548444 to 0364847b has its CatchHandler @ 035481b0 */
            System_Collections_Generic_Dictionary<object,_object>__Clear
                      (__this,Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Clear__)
            ;
            ppSVar3 = &MovesCompiler_TypeInfo->static_fields->OJGHOJALHBK;
                    /* catch() { ... } // from try @ 03548440 with catch @ 0354846c */
            *ppSVar3 = (System_Collections_Generic_Dictionary_string__XmlNode__o *)0x0;
            thunk_FUN_01c20e04(ppSVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0354847c to 03648483 has its CatchHandler @ 03548498 */
  FUN_01bab8c8();
}


// ===== private static void AMHDBJPIFOO(InfoAnimation NLEBDPHNIDI, XmlNode JHMENEKPIBO, List<XmlNode> EDMMHCAGPON)  [RVA 0x3446774]
// MovesCompiler$$AMHDBJPIFOO @ RVA 0x3446774

void MovesCompiler__AMHDBJPIFOO
               (InfoAnimation_o *NLEBDPHNIDI,System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  Il2CppObject *pIVar4;
  Vector3f_o *pCVar5;
  int index;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  UnityEngine_Vector3_o PHCOHKNFGLE_00;
  
                    /* try { // try from 03546780 to 03646783 has its CatchHandler @ 03546798 */
                    /* catch() { ... } // from try @ 03546780 with catch @ 03546798 */
                    /* try { // try from 035467a0 to 03646813 has its CatchHandler @ 035468bc */
  if ((DAT_04568245 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_15220/*"Z"*/);
    FUN_01bab630(&StringLiteral_11706/*"SaveVelocity"*/);
    FUN_01bab630(&StringLiteral_14762/*"Velocity"*/);
    FUN_01bab630(&StringLiteral_3269/*"Ax"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_3271/*"Ay"*/);
                    /* catch() { ... } // from try @ 03546714 with catch @ 03546814
                       try { // try from 03546814 to 03646823 has its CatchHandler @ 0354600c */
    FUN_01bab630(&StringLiteral_3274/*"Az"*/);
                    /* try { // try from 03546824 to 03646827 has its CatchHandler @ 03546838 */
    DAT_04568245 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) goto LAB_03546af0;
                    /* catch() { ... } // from try @ 03546824 with catch @ 03546838 */
                    /* try { // try from 03546840 to 036468a7 has its CatchHandler @ 035468bc */
  plVar1 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,StringLiteral_14762/*"Velocity"*/,
                              (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if (plVar1 == (long *)0x0) {
    if (EDMMHCAGPON == (System_Collections_Generic_List_XmlNode__o *)0x0) goto LAB_03546af0;
    if (0 < (EDMMHCAGPON->fields)._size) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03546af0;
        plVar1 = (long *)(*pIVar4->klass->vtable[0x33].methodPtr)
                                   (pIVar4,StringLiteral_14762/*"Velocity"*/,pIVar4->klass->vtable[0x33].method);
      } while ((plVar1 == (long *)0x0) && (index = index + 1, index < (EDMMHCAGPON->fields)._size));
    }
  }
  if (plVar1 == (long *)0x0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  else {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
    fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
                    /* try { // try from 035468a8 to 036468b3 has its CatchHandler @ 0354600c */
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
                    /* try { // try from 035468b4 to 036468bb has its CatchHandler @ 035468bc */
                    /* catch() { ... } // from try @ 035467a0 with catch @ 035468bc
                       catch() { ... } // from try @ 03546840 with catch @ 035468bc
                       catch() { ... } // from try @ 035468b4 with catch @ 035468bc */
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
    fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_15220/*"Z"*/,(MethodInfo *)0x0);
    fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_3269/*"Ax"*/,(MethodInfo *)0x0);
    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_3271/*"Ay"*/,(MethodInfo *)0x0);
    fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_3274/*"Az"*/,(MethodInfo *)0x0);
    fVar11 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_11706/*"SaveVelocity"*/,(MethodInfo *)0x0);
    CJNHFNHJHPE = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
    if (NLEBDPHNIDI == (InfoAnimation_o *)0x0) goto LAB_03546af0;
    InfoAnimation__GCBPPDIFHHO(NLEBDPHNIDI,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  PHCOHKNFGLE.fields.y = fVar7;
  PHCOHKNFGLE.fields.x = fVar6;
  PHCOHKNFGLE.fields.z = fVar8;
  pCVar5 = Vector3f__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  if (NLEBDPHNIDI != (InfoAnimation_o *)0x0) {
    InfoAnimation__PHKBMFGNKFL(NLEBDPHNIDI,pCVar5,(MethodInfo *)0x0);
    PHCOHKNFGLE_00.fields.y = fVar10;
    PHCOHKNFGLE_00.fields.x = fVar9;
    PHCOHKNFGLE_00.fields.z = fVar11;
    pCVar5 = Vector3f__ALBJPLAPOBO(PHCOHKNFGLE_00,(MethodInfo *)0x0);
    InfoAnimation__LIFIDKHNGCM(NLEBDPHNIDI,pCVar5,(MethodInfo *)0x0);
    return;
  }
LAB_03546af0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KJLLLGAEJFG(XmlNode CMCEOIEBENH, XmlNode KBDJJBJJEMM, List<XmlNode> PIPBEEIHMJN)  [RVA 0x3445FD0]
// MovesCompiler$$KJLLLGAEJFG @ RVA 0x3445FD0

void MovesCompiler__KJLLLGAEJFG
               (System_Xml_XmlNode_o *CMCEOIEBENH,System_Xml_XmlNode_o *KBDJJBJJEMM,
               System_Collections_Generic_List_XmlNode__o *PIPBEEIHMJN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  uint uVar2;
  long lVar3;
  System_Xml_XmlNode_o *ABOGEFBHAPG;
  bool bVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  Il2CppObject *pIVar9;
  System_String_o *b;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Xml_XmlNode_array *pSVar10;
  int index;
  ulong uVar11;
  System_Xml_XmlNode_o *local_68;
  
  if ((DAT_04568246 & 1) == 0) {
                    /* try { // try from 0354600c to 03646313 has its CatchHandler @ 0354600c
                       catch() { ... } // from try @ 0354600c with catch @ 0354600c
                       catch() { ... } // from try @ 03546430 with catch @ 0354600c
                       catch() { ... } // from try @ 0354663c with catch @ 0354600c
                       catch() { ... } // from try @ 03546724 with catch @ 0354600c
                       catch() { ... } // from try @ 0354672c with catch @ 0354600c
                       catch() { ... } // from try @ 03546738 with catch @ 0354600c
                       catch() { ... } // from try @ 03546814 with catch @ 0354600c
                       catch() { ... } // from try @ 035468a8 with catch @ 0354600c */
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>_TryGetValue__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_12057/*"ShortAttack"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_9210/*"Move template don't find: "*/);
    DAT_04568246 = 1;
  }
  local_68 = (System_Xml_XmlNode_o *)0x0;
  if (KBDJJBJJEMM != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(KBDJJBJJEMM->klass->vtable)._16_get_Attributes.methodPtr)
                       (KBDJJBJJEMM,(KBDJJBJJEMM->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
      if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar7 = (System_String_o *)
                 (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
        if ((pSVar7 == (System_String_o *)0x0) ||
           (pSVar8 = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0),
           pSVar8 == (System_String_array *)0x0)) goto LAB_03546328;
        if (0 < (int)pSVar8->max_length) {
          uVar11 = 0;
          do {
            if (PIPBEEIHMJN == (System_Collections_Generic_List_XmlNode__o *)0x0) goto LAB_03546328;
            ppSVar1 = pSVar8->m_Items + uVar11;
            if (0 < (PIPBEEIHMJN->fields)._size) {
              index = 0;
              do {
                if ((uint)pSVar8->max_length <= uVar11) goto LAB_0354632c;
                pSVar7 = *ppSVar1;
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)PIPBEEIHMJN,index,
                                    Method_System_Collections_Generic_List<XmlNode>_get_Item__);
                if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03546328;
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*pIVar9->klass->vtable[0x10].methodPtr)
                                   (pIVar9,pIVar9->klass->vtable[0x10].method);
                if ((pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
                   (pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
                   pSVar6 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_03546328;
                b = (System_String_o *)
                    (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
                bVar4 = System_String__op_Equality(pSVar7,b,(MethodInfo *)0x0);
                if (bVar4) goto LAB_035462f8;
                index = index + 1;
              } while (index < (PIPBEEIHMJN->fields)._size);
            }
            local_68 = (System_Xml_XmlNode_o *)0x0;
            if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if ((uint)pSVar8->max_length <= uVar11) {
LAB_0354632c:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     MovesCompiler_TypeInfo->static_fields->OJGHOJALHBK;
            if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03546328;
            method_00 = (MethodInfo *)&local_68;
            method_01 = Method_System_Collections_Generic_Dictionary<string,_XmlNode>_TryGetValue__;
            bVar4 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                              (__this,(Il2CppObject *)*ppSVar1,(Il2CppObject **)method_00,
                               (MethodInfo_2334730 *)
                               Method_System_Collections_Generic_Dictionary<string,_XmlNode>_TryGetValue__
                              );
            lVar3 = Method_System_Collections_Generic_List<XmlNode>_Add__;
            if (bVar4) {
              pSVar10 = (PIPBEEIHMJN->fields)._items;
              (PIPBEEIHMJN->fields)._version = (PIPBEEIHMJN->fields)._version + 1;
              if (pSVar10 == (System_Xml_XmlNode_array *)0x0) goto LAB_03546328;
              uVar2 = (PIPBEEIHMJN->fields)._size;
              if (uVar2 < (uint)pSVar10->max_length) {
                (PIPBEEIHMJN->fields)._size = uVar2 + 1;
                pSVar10->m_Items[(int)uVar2] = local_68;
                thunk_FUN_01c20e04();
              }
              else {
                method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)PIPBEEIHMJN,
                           (Il2CppObject *)local_68,(MethodInfo_26E4DAC *)method_00);
              }
              ABOGEFBHAPG = local_68;
              if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              MovesCompiler__BOEHFFCDAJO(CMCEOIEBENH,ABOGEFBHAPG,method_00);
              MovesCompiler__KJLLLGAEJFG(CMCEOIEBENH,local_68,PIPBEEIHMJN,method_01);
            }
            else {
              if ((uint)pSVar8->max_length <= uVar11) goto LAB_0354632c;
              bVar4 = System_String__op_Inequality(*ppSVar1,StringLiteral_12057/*"ShortAttack"*/,(MethodInfo *)0x0);
              if (bVar4) {
                if ((uint)pSVar8->max_length <= uVar11) goto LAB_0354632c;
                pSVar7 = System_String__Concat(StringLiteral_9210/*"Move template don't find: "*/,*ppSVar1,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              }
            }
LAB_035462f8:
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)pSVar8->max_length);
        }
      }
                    /* try { // try from 03546314 to 0364633b has its CatchHandler @ 0354676c */
      return;
    }
  }
LAB_03546328:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void LJDOIGBJCMN(XmlNode JHMENEKPIBO, List<IntervalAnimation> JGHPAFEFEFB)  [RVA 0x3448480]
// MovesCompiler$$LJDOIGBJCMN @ RVA 0x3448480

/* WARNING: Removing unreachable block (ram,0x03548868) */

void MovesCompiler__LJDOIGBJCMN
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_JADGCGOJLJB__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int32_t OABGEBHHMBB;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ACCIHBHMFPN;
  IntervalAttack_o *__this_00;
  long lVar8;
  IntervalAnimation_array *pJVar9;
  ulong uVar10;
  int *piVar11;
  
                    /* try { // try from 03548484 to 0364848f has its CatchHandler @ 035481b0 */
                    /* try { // try from 03548490 to 03648497 has its CatchHandler @ 03548498 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354847c with catch @ 03548498
                       catch(type#2 @ 00000000) { ... } // from try @ 03548490 with catch @ 03548498
                        */
  if ((DAT_04568247 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IntervalAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_set_Capacity__);
    FUN_01bab630(&IntervalAttack_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568247 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<IntervalAnimation>_set_Capacity__);
      plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0354861c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0354861c:
          uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar10 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto LAB_03548800;
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_035487e8;
          }
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0354867c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0354867c:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar7);
          }
          __this = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
          ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          OABGEBHHMBB = IntervalAnimation__PKKPCLFNEDC(ACCIHBHMFPN,(MethodInfo *)0x0);
          if (OABGEBHHMBB == 4) {
            __this_00 = (IntervalAttack_o *)thunk_FUN_01bda818(IntervalAttack_TypeInfo);
            IntervalAttack___ctor(__this_00,(MethodInfo *)0x0);
          }
          else {
            __this_00 = (IntervalAttack_o *)thunk_FUN_01bda818(IntervalAnimation_TypeInfo);
            IntervalAnimation___ctor((IntervalAnimation_o *)__this_00,OABGEBHHMBB,(MethodInfo *)0x0);
          }
          if (__this_00 == (IntervalAttack_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(__this_00->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                    (__this_00,plVar7,(__this_00->klass->vtable)._7_HNIHOIAMDPC.method);
          lVar8 = Method_System_Collections_Generic_List<IntervalAnimation>_Add__;
          pJVar9 = (JGHPAFEFEFB->fields)._items;
          (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
          if (pJVar9 == (IntervalAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar3 = (JGHPAFEFEFB->fields)._size;
          if (uVar3 < (uint)pJVar9->max_length) {
            (JGHPAFEFEFB->fields)._size = uVar3 + 1;
            pJVar9->m_Items[(int)uVar3] = (IntervalAnimation_o *)__this_00;
            thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar3,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_035487e8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0354881c;
    }
  }
LAB_03548800:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0354881c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== internal static bool BHCAAHDJJJK(string KFGHHGACFPE)  [RVA 0x3445E14]
// MovesCompiler$$BHCAAHDJJJK @ RVA 0x3445E14

bool MovesCompiler__BHCAAHDJJJK(System_String_o *KFGHHGACFPE,MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_String_array *CJNHFNHJHPE;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568248 & 1) == 0) {
    FUN_01bab630(&Method_CGALNIOABHK_AEEAMOFNOIN_HFEJKLKLDKH__);
    FUN_01bab630(&MovesCompiler_AEEAMOFNOIN_TypeInfo);
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<string>__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    DAT_04568248 = 1;
    method = extraout_x1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(MovesCompiler_AEEAMOFNOIN_TypeInfo,method);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  pIVar3 = (Il2CppClass *)GNAFJMPJNKI__CFJCDFEAPFD(GMGGINDHNPI,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = pIVar3;
    thunk_FUN_01c20e04(pIVar2,pIVar3);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(KFGHHGACFPE,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((System_String_o *)pIVar2->klass,(MethodInfo *)0x0), !bVar1
       )) {
      if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (KFGHHGACFPE == (System_String_o *)0x0) goto LAB_03545f8c;
      CJNHFNHJHPE = System_String__Split
                              (KFGHHGACFPE,MovesCompiler_TypeInfo->static_fields->CHGAPDHMOHM,1,
                               (MethodInfo *)0x0);
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_IList_T__o *)CJNHFNHJHPE,
                         Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
      if (!bVar1) {
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        bVar1 = System_Linq_Enumerable__Any<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)CJNHFNHJHPE,
                           predicate,Method_System_Linq_Enumerable_Any<string>__);
        return bVar1;
      }
    }
    return true;
  }
LAB_03545f8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static List<ConditionAnimation> APNMIPIALNP(XmlNode AHDGNOJPPIB, List<XmlNode> EDMMHCAGPON)  [RVA 0x34471BC]
// MovesCompiler$$APNMIPIALNP @ RVA 0x34471BC

System_Collections_Generic_List_IENLNOEDCFF__o *
MovesCompiler__APNMIPIALNP
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *JGHPAFEFEFB;
  long *plVar1;
  System_Xml_XmlNode_o *pSVar2;
  MethodInfo *pMVar3;
  int iVar4;
  
  if ((DAT_04568249 & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_12811/*"Tactics"*/);
    DAT_04568249 = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_12811/*"Tactics"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar1 != (long *)0x0) {
      pMVar3 = *(MethodInfo **)(*plVar1 + 0x470);
      pSVar2 = (System_Xml_XmlNode_o *)(**(code **)(*plVar1 + 0x468))(plVar1,StringLiteral_4577/*"Conditions"*/);
      if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
      }
      MovesCompiler__MLJDPILPJDE(pSVar2,JGHPAFEFEFB,pMVar3);
    }
    if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
      if (0 < (EDMMHCAGPON->fields)._size) {
        iVar4 = 0;
        do {
          plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                     (AHDGNOJPPIB,StringLiteral_12811/*"Tactics"*/,
                                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (plVar1 != (long *)0x0) {
            pMVar3 = *(MethodInfo **)(*plVar1 + 0x470);
            pSVar2 = (System_Xml_XmlNode_o *)
                     (**(code **)(*plVar1 + 0x468))(plVar1,StringLiteral_4577/*"Conditions"*/);
            if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
            }
            MovesCompiler__MLJDPILPJDE(pSVar2,JGHPAFEFEFB,pMVar3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (EDMMHCAGPON->fields)._size);
      }
      return JGHPAFEFEFB;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static bool DAGLOBOBEIG(string EIIKECLAKAM)  [RVA 0x3445F90]
// MovesCompiler$$DAGLOBOBEIG @ RVA 0x3445F90

bool MovesCompiler__DAGLOBOBEIG(System_String_o *EIIKECLAKAM,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this;
  
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(EIIKECLAKAM,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  __this = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (AAPGCAPGBLG_o *)0x0) {
    bVar1 = AAPGCAPGBLG__LAAKLBPOMGP(__this,EIIKECLAKAM,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MLJDPILPJDE(XmlNode JHMENEKPIBO, List<ConditionAnimation> JGHPAFEFEFB)  [RVA 0x3443350]
// MovesCompiler$$MLJDPILPJDE @ RVA 0x3443350

/* WARNING: Removing unreachable block (ram,0x03543670) */

void MovesCompiler__MLJDPILPJDE
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_IENLNOEDCFF__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  ConditionAnimation_o *item;
  long lVar7;
  ConditionAnimation_array *pIVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_0456824a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_set_Capacity__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456824a = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<ConditionAnimation>_set_Capacity__);
      plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_035434a8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_035434a8:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_03543618;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03543600;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_03543508;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03543508:
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(AHDGNOJPPIB);
            }
          }
          item = ConditionsParser__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)0x0);
          if (item != (ConditionAnimation_o *)0x0) {
            (*(item->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                      (item,AHDGNOJPPIB,(item->klass->vtable)._7_HNIHOIAMDPC.method);
            lVar7 = Method_System_Collections_Generic_List<ConditionAnimation>_Add__;
            pIVar8 = (JGHPAFEFEFB->fields)._items;
            (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
            if (pIVar8 == (ConditionAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (JGHPAFEFEFB->fields)._size;
            if (uVar3 < (uint)pIVar8->max_length) {
              (JGHPAFEFEFB->fields)._size = uVar3 + 1;
              pIVar8->m_Items[(int)uVar3] = item;
              thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar3,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                         (Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03543600:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03543634;
    }
  }
LAB_03543618:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03543634:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private static void HNOMDBJEICP(List<XmlNode> EDMMHCAGPON, InfoAnimation NLEBDPHNIDI, Dictionary<string, TemplateAnimation> PHOLAJOMLEL)  [RVA 0x3446330]
// MovesCompiler$$HNOMDBJEICP @ RVA 0x3446330

void MovesCompiler__HNOMDBJEICP
               (System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,InfoAnimation_o *NLEBDPHNIDI,
               System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *PHOLAJOMLEL,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  TemplateAnimation_o *pFVar4;
  int index;
  
  if ((DAT_0456824b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
                    /* try { // try from 03546370 to 0364639b has its CatchHandler @ 03546764 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__);
    FUN_01bab630(&TemplateAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_0456824b = 1;
  }
  if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
                    /* try { // try from 035463cc to 036463d3 has its CatchHandler @ 03546750 */
    if (0 < (EDMMHCAGPON->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03546504;
        __this = (System_Xml_XmlAttributeCollection_o *)
                 (*pIVar2->klass->vtable[0x10].methodPtr)(pIVar2,pIVar2->klass->vtable[0x10].method)
        ;
                    /* try { // try from 03546414 to 0364642f has its CatchHandler @ 03546754 */
        if ((__this == (System_Xml_XmlAttributeCollection_o *)0x0) ||
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (__this,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
           pSVar3 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_03546504;
        pIVar2 = (Il2CppObject *)
                 (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
                    /* try { // try from 03546430 to 0364651f has its CatchHandler @ 0354600c */
        if (PHOLAJOMLEL == (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)0x0)
        goto LAB_03546504;
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                           pIVar2,
                           Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                          );
        if (bVar1) {
          pFVar4 = (TemplateAnimation_o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL
                              ,pIVar2,
                              Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__
                             );
          if (pFVar4 == (TemplateAnimation_o *)0x0) goto LAB_03546504;
          TemplateAnimation__ACHCKILJGJK(pFVar4,NLEBDPHNIDI,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    if ((NLEBDPHNIDI != (InfoAnimation_o *)0x0) &&
       (PHOLAJOMLEL != (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)0x0)) {
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                         (Il2CppObject *)(NLEBDPHNIDI->fields).JIJLBFGKNJK,
                         Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                        );
      if (bVar1) {
        return;
      }
      pFVar4 = (TemplateAnimation_o *)thunk_FUN_01bda818(TemplateAnimation_TypeInfo);
      TemplateAnimation___ctor(pFVar4,NLEBDPHNIDI,(MethodInfo *)0x0);
      if (pFVar4 != (TemplateAnimation_o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                   (Il2CppObject *)(pFVar4->fields).NPFMOEOIEKM,(Il2CppObject *)pFVar4,
                   Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
        return;
      }
    }
  }
LAB_03546504:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static List<IntervalAnimation> LJDOIGBJCMN(XmlNode OBDMHHJBLKL, List<XmlNode> EDMMHCAGPON)  [RVA 0x3446EC4]
// MovesCompiler$$LJDOIGBJCMN @ RVA 0x3446EC4

System_Collections_Generic_List_JADGCGOJLJB__o *
MovesCompiler__LJDOIGBJCMN
          (System_Xml_XmlNode_o *OBDMHHJBLKL,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_JADGCGOJLJB__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
  if ((DAT_0456824c & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IntervalAnimation>_TypeInfo);
    FUN_01bab630(&StringLiteral_7634/*"Intervals"*/);
    DAT_0456824c = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_JADGCGOJLJB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IntervalAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<IntervalAnimation>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,StringLiteral_7634/*"Intervals"*/);
    if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
    }
    MovesCompiler__LJDOIGBJCMN(pSVar1,JGHPAFEFEFB,pMVar3);
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0354703c;
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,StringLiteral_7634/*"Intervals"*/);
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
        }
        MovesCompiler__LJDOIGBJCMN(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_0354703c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static InfoAnimation.KFMLLPPCPHI OFPKFCDBHDL(XmlNode AHDGNOJPPIB)  [RVA 0x3442A2C]
// MovesCompiler$$OFPKFCDBHDL @ RVA 0x3442A2C

InfoAnimation_KFMLLPPCPHI_o *
MovesCompiler__OFPKFCDBHDL(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  InfoAnimation_KFMLLPPCPHI_o *__this;
  long *plVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *a;
  System_String_o *a_00;
  System_String_o *pSVar8;
  System_String_o *ACCIHBHMFPN;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  System_Object_array *args;
  long lVar11;
  ShiftValue_o *pFVar12;
  ShiftValue_o **ppFVar13;
  undefined8 uVar14;
  MethodInfo *extraout_x1;
  ulong uVar15;
  ulong uVar16;
  System_String_o *a_01;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035429d8 with catch @ 03542a2c
                        */
                    /* try { // try from 03542a44 to 03642a47 has its CatchHandler @ 03542a68 */
                    /* try { // try from 03542a48 to 03642a6f has its CatchHandler @ 0354294c */
  if ((DAT_0456824d & 1) == 0) {
                    /* catch() { ... } // from try @ 03542a44 with catch @ 03542a68 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03542a70 to 03642a77 has its CatchHandler @ 03542a8c */
    FUN_01bab630(&ShiftValue_TypeInfo);
                    /* try { // try from 03542a78 to 03642a83 has its CatchHandler @ 0354294c */
    FUN_01bab630(&InfoAnimation_KFMLLPPCPHI_TypeInfo);
                    /* try { // try from 03542a84 to 03642a8b has its CatchHandler @ 03542a8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03542a70 with catch @ 03542a8c
                       catch(type#2 @ 00000000) { ... } // from try @ 03542a84 with catch @ 03542a8c
                        */
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 03542a90 to 03642b77 has its CatchHandler @ 03542a90
                       catch() { ... } // from try @ 03542a90 with catch @ 03542a90
                       catch() { ... } // from try @ 03542c3c with catch @ 03542a90
                       catch() { ... } // from try @ 03542c78 with catch @ 03542a90
                       catch() { ... } // from try @ 03542cb8 with catch @ 03542a90
                       catch() { ... } // from try @ 03542ce8 with catch @ 03542a90 */
    FUN_01bab630(&StringLiteral_11994/*"ShiftX"*/);
    FUN_01bab630(&StringLiteral_11992/*"ShiftModelNode"*/);
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_15220/*"Z"*/);
    FUN_01bab630(&StringLiteral_10362/*"Position"*/);
    FUN_01bab630(&StringLiteral_14851/*"Wall"*/);
    FUN_01bab630(&StringLiteral_9548/*"Nodes"*/);
    FUN_01bab630(&StringLiteral_10150/*"Part"*/);
    FUN_01bab630(&StringLiteral_5585/*"ERROR: alignParse - wrong axis "{0}" in "{1}""*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_9697/*"Object"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11995/*"ShiftY"*/);
    FUN_01bab630(&StringLiteral_3270/*"Axis"*/);
    FUN_01bab630(&StringLiteral_10276/*"Pivot"*/);
    DAT_0456824d = 1;
    method = extraout_x1;
  }
  __this = (InfoAnimation_KFMLLPPCPHI_o *)thunk_FUN_01bda818(InfoAnimation_KFMLLPPCPHI_TypeInfo,method);
                    /* try { // try from 03542b78 to 03642b7f has its CatchHandler @ 03542c98 */
  InfoAnimation_KFMLLPPCPHI___ctor(__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
LAB_035431d0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03542b8c to 03642b97 has its CatchHandler @ 03542c90 */
  plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_10276/*"Pivot"*/,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_10362/*"Position"*/,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    /* try { // try from 03542bd4 to 03642bdb has its CatchHandler @ 03542c80 */
                    /* try { // try from 03542bdc to 03642be7 has its CatchHandler @ 03542c94 */
  if ((plVar4 == (long *)0x0) ||
     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
     pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_035431d0;
                    /* try { // try from 03542bf0 to 03642bfb has its CatchHandler @ 03542c7c */
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_9697/*"Object"*/,(MethodInfo *)0x0);
  a = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 03542c30 to 03642c3b has its CatchHandler @ 03542c84 */
  if ((plVar5 == (long *)0x0) ||
     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
     pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_035431d0;
                    /* try { // try from 03542c3c to 03642c63 has its CatchHandler @ 03542a90 */
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_9697/*"Object"*/,(MethodInfo *)0x0);
  a_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                    /* try { // try from 03542c64 to 03642c6b has its CatchHandler @ 03542c9c */
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
                    /* try { // try from 03542c6c to 03642c6f has its CatchHandler @ 03542c8c */
                    /* try { // try from 03542c70 to 03642c77 has its CatchHandler @ 03542c88 */
                    /* try { // try from 03542c78 to 03642cb3 has its CatchHandler @ 03542a90 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542bf0 with catch @ 03542c7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542bd4 with catch @ 03542c80
                        */
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542c30 with catch @ 03542c84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542c70 with catch @ 03542c88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542c6c with catch @ 03542c8c
                        */
  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542b8c with catch @ 03542c90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542bdc with catch @ 03542c94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542b78 with catch @ 03542c98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03542c64 with catch @ 03542c9c
                        */
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
                    /* try { // try from 03542cb4 to 03642cb7 has its CatchHandler @ 03542cd8 */
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
                    /* try { // try from 03542cb8 to 03642cdf has its CatchHandler @ 03542a90 */
  ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03542cb4 with catch @ 03542cd8 */
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03542ce0 to 03642ce7 has its CatchHandler @ 03542cfc */
                    /* try { // try from 03542ce8 to 03642cf3 has its CatchHandler @ 03542a90 */
                    /* try { // try from 03542cf4 to 03642cfb has its CatchHandler @ 03542cfc */
  if ((pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
     (pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_3270/*"Axis"*/,(MethodInfo *)0x0),
     __this == (InfoAnimation_KFMLLPPCPHI_o *)0x0)) goto LAB_035431d0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03542ce0 with catch @ 03542cfc
                       catch(type#2 @ 00000000) { ... } // from try @ 03542cf4 with catch @ 03542cfc
                        */
  (__this->fields).ICPKNBPKPIF = false;
  (__this->fields).LBOJHMPHLGC = false;
  (__this->fields).FPPCPCFBFCL = false;
  if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
    (__this->fields).LBOJHMPHLGC = true;
    (__this->fields).FPPCPCFBFCL = true;
    (__this->fields).ICPKNBPKPIF = true;
  }
  else {
    pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if ((pSVar9 == (System_String_o *)0x0) ||
       (pSVar10 = System_String__Split(pSVar9,0x7c,0,(MethodInfo *)0x0),
       pSVar10 == (System_String_array *)0x0)) goto LAB_035431d0;
    if (0 < (int)pSVar10->max_length) {
      uVar16 = 0;
      uVar15 = pSVar10->max_length & 0xffffffff;
      do {
        if (uVar15 <= uVar16) goto LAB_035431d4;
        a_01 = pSVar10->m_Items[uVar16];
        bVar2 = System_String__op_Equality(a_01,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
        if (bVar2) {
          (__this->fields).LBOJHMPHLGC = true;
        }
        else {
          bVar2 = System_String__op_Equality(a_01,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields).FPPCPCFBFCL = true;
          }
          else {
            bVar2 = System_String__op_Equality(a_01,StringLiteral_15220/*"Z"*/,(MethodInfo *)0x0);
            if (bVar2) {
              (__this->fields).ICPKNBPKPIF = true;
            }
            else {
              args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
              if (args == (System_Object_array *)0x0) goto LAB_035431d0;
              if ((a_01 != (System_String_o *)0x0) &&
                 (lVar11 = thunk_FUN_01bda71c(a_01,(((args->obj).klass)->_1).element_class),
                 lVar11 == 0)) {
LAB_035431d8:
                uVar14 = thunk_FUN_01be8e1c();
                    /* try { // try from 035431dc to 036431e3 has its CatchHandler @ 035431f8 */
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar14,0);
              }
              if ((int)args->max_length == 0) {
LAB_035431d4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035431b0 with catch @ 035431d4 */
                FUN_01bab8d0();
              }
              args->m_Items[0] = (Il2CppObject *)a_01;
              thunk_FUN_01c20e04(args->m_Items,a_01);
              lVar11 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class);
              if (lVar11 == 0) goto LAB_035431d8;
              if ((uint)args->max_length < 2) goto LAB_035431d4;
              args->m_Items[1] = (Il2CppObject *)pSVar9;
              thunk_FUN_01c20e04(args->m_Items + 1,pSVar9);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_5585/*"ERROR: alignParse - wrong axis "{0}" in "{1}""*/,args,(MethodInfo *)0x0);
            }
          }
        }
        uVar1 = (uint)pSVar10->max_length;
        uVar15 = (ulong)uVar1;
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)uVar1);
    }
  }
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_11992/*"ShiftModelNode"*/,(MethodInfo *)0x0);
  if (pSVar7 != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).GOJLAPEHHAM = pSVar9;
    thunk_FUN_01c20e04();
  }
  iVar3 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar8,(MethodInfo *)0x0);
  (__this->fields).HGPLMIHMEBA = iVar3;
  iVar3 = LCAJGLLBBEC__HGMMJIIEOLF(ACCIHBHMFPN,(MethodInfo *)0x0);
  (__this->fields).AIJIIAOLNNJ = iVar3;
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_10150/*"Part"*/,(MethodInfo *)0x0);
  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  (__this->fields).OBBONHJFLBG = pSVar8;
  thunk_FUN_01c20e04();
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_10150/*"Part"*/,(MethodInfo *)0x0);
  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  (__this->fields).CCFODMDLKFD = pSVar8;
  thunk_FUN_01c20e04();
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_11994/*"ShiftX"*/,(MethodInfo *)0x0);
  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
  pFVar12 = (ShiftValue_o *)thunk_FUN_01bda818(ShiftValue_TypeInfo);
  ShiftValue___ctor(pFVar12,pSVar8,0.0,(MethodInfo *)0x0);
  ppFVar13 = &(__this->fields).IJILGOMOKCM;
  *ppFVar13 = pFVar12;
  thunk_FUN_01c20e04(ppFVar13,pFVar12);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
                    /* try { // try from 03543030 to 036430e7 has its CatchHandler @ 03543030
                       catch() { ... } // from try @ 03543030 with catch @ 03543030
                       catch() { ... } // from try @ 03543134 with catch @ 03543030
                       catch() { ... } // from try @ 03543180 with catch @ 03543030
                       catch() { ... } // from try @ 035431b4 with catch @ 03543030
                       catch() { ... } // from try @ 035431e4 with catch @ 03543030 */
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035431d0;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_11995/*"ShiftY"*/,(MethodInfo *)0x0);
  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
  pFVar12 = (ShiftValue_o *)thunk_FUN_01bda818(ShiftValue_TypeInfo);
  ShiftValue___ctor(pFVar12,pSVar8,0.0,(MethodInfo *)0x0);
  ppFVar13 = &(__this->fields).MECKAKAENEM;
  *ppFVar13 = pFVar12;
  thunk_FUN_01c20e04(ppFVar13,pFVar12);
  bVar2 = System_String__op_Equality(a,StringLiteral_9548/*"Nodes"*/,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = 1;
  }
  else {
    bVar2 = System_String__op_Equality(a,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
    if (bVar2) {
      iVar3 = 3;
    }
    else {
                    /* try { // try from 035430e8 to 036430ef has its CatchHandler @ 03543198 */
      bVar2 = System_String__op_Equality(a,StringLiteral_14851/*"Wall"*/,(MethodInfo *)0x0);
      if (bVar2) {
        iVar3 = 2;
                    /* try { // try from 035430fc to 03643107 has its CatchHandler @ 03543194 */
      }
      else {
        bVar2 = System_String__op_Equality(a,StringLiteral_10276/*"Pivot"*/,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_03543124;
        iVar3 = 4;
      }
    }
  }
  (__this->fields).LBDADFDEMPE = iVar3;
LAB_03543124:
                    /* try { // try from 03543128 to 03643133 has its CatchHandler @ 0354318c */
  bVar2 = System_String__op_Equality(a_00,StringLiteral_9548/*"Nodes"*/,(MethodInfo *)0x0);
                    /* try { // try from 03543134 to 03643173 has its CatchHandler @ 03543030 */
  if (bVar2) {
    iVar3 = 1;
  }
  else {
    bVar2 = System_String__op_Equality(a_00,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
    if (bVar2) {
      iVar3 = 3;
    }
    else {
                    /* try { // try from 03543174 to 03643177 has its CatchHandler @ 03543190 */
                    /* try { // try from 03543178 to 0364317b has its CatchHandler @ 03543188 */
      bVar2 = System_String__op_Equality(a_00,StringLiteral_14851/*"Wall"*/,(MethodInfo *)0x0);
                    /* try { // try from 0354317c to 0364317f has its CatchHandler @ 03543184 */
      if (bVar2) {
                    /* try { // try from 03543180 to 036431af has its CatchHandler @ 03543030 */
        iVar3 = 2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354317c with catch @ 03543184
                        */
      }
      else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03543178 with catch @ 03543188
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03543128 with catch @ 0354318c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03543174 with catch @ 03543190
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035430fc with catch @ 03543194
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035430e8 with catch @ 03543198
                        */
        bVar2 = System_String__op_Equality(a_00,StringLiteral_10276/*"Pivot"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          return __this;
        }
        iVar3 = 4;
      }
    }
  }
  (__this->fields).LGNNMJOCKFL = iVar3;
                    /* try { // try from 035431b0 to 036431b3 has its CatchHandler @ 035431d4 */
                    /* try { // try from 035431b4 to 036431db has its CatchHandler @ 03543030 */
  return __this;
}


// ===== private static List<ActionAnimation> OPECGOMJLLP(XmlNode OBDMHHJBLKL, List<XmlNode> EDMMHCAGPON)  [RVA 0x3447040]
// MovesCompiler$$OPECGOMJLLP @ RVA 0x3447040

System_Collections_Generic_List_IIMNGGHGKOD__o *
MovesCompiler__OPECGOMJLLP
          (System_Xml_XmlNode_o *OBDMHHJBLKL,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_IIMNGGHGKOD__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
                    /* try { // try from 0354705c to 036470e7 has its CatchHandler @ 0354705c
                       catch() { ... } // from try @ 0354705c with catch @ 0354705c
                       catch() { ... } // from try @ 03547100 with catch @ 0354705c
                       catch() { ... } // from try @ 03547144 with catch @ 0354705c
                       catch() { ... } // from try @ 03547174 with catch @ 0354705c */
  if ((DAT_0456824e & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<ActionAnimation>_TypeInfo);
    FUN_01bab630(&StringLiteral_2731/*"Actions"*/);
    DAT_0456824e = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_IIMNGGHGKOD__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ActionAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<ActionAnimation>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 035470e8 to 036470ef has its CatchHandler @ 03547128 */
                    /* try { // try from 035470f8 to 036470ff has its CatchHandler @ 03547124 */
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
                    /* try { // try from 03547100 to 0364713f has its CatchHandler @ 0354705c */
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,StringLiteral_2731/*"Actions"*/);
    if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035470f8 with catch @ 03547124
                        */
    MovesCompiler__OPECGOMJLLP(pSVar1,JGHPAFEFEFB,pMVar3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035470e8 with catch @ 03547128
                        */
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
                    /* try { // try from 03547140 to 03647143 has its CatchHandler @ 03547164 */
      index = 0;
      do {
                    /* try { // try from 03547144 to 0364716b has its CatchHandler @ 0354705c */
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035471b8;
                    /* catch() { ... } // from try @ 03547140 with catch @ 03547164 */
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,StringLiteral_2731/*"Actions"*/);
                    /* try { // try from 0354716c to 03647173 has its CatchHandler @ 03547188 */
                    /* try { // try from 03547174 to 0364717f has its CatchHandler @ 0354705c */
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03547180 to 03647187 has its CatchHandler @ 03547188 */
          thunk_FUN_01ba7564(MovesCompiler_TypeInfo);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354716c with catch @ 03547188
                       catch(type#2 @ 00000000) { ... } // from try @ 03547180 with catch @ 03547188
                        */
        MovesCompiler__OPECGOMJLLP(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_035471b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OFNGFKIGDOJ(InfoAnimation.HJPFANEPGJF DMGLMCBIAGL, XmlNode AHDGNOJPPIB, List<XmlNode> EDMMHCAGPON)  [RVA 0x3447360]
// MovesCompiler$$OFNGFKIGDOJ @ RVA 0x3447360

void MovesCompiler__OFNGFKIGDOJ
               (InfoAnimation_HJPFANEPGJF_o *DMGLMCBIAGL,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar2;
  Il2CppObject *pIVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o **ppEVar4;
  int index;
  undefined1 auVar5 [16];
  long lVar1;
  
  if ((DAT_0456824f & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_11897/*"SetDirection"*/);
    DAT_0456824f = 1;
  }
  if (DMGLMCBIAGL != (InfoAnimation_HJPFANEPGJF_o *)0x0) {
    ppEVar4 = &(DMGLMCBIAGL->fields).GCIHJDANIJJ;
    if ((*ppEVar4 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
       (((*ppEVar4)->fields).OKONAOJIODE = false, AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
      auVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_11897/*"SetDirection"*/,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      lVar1 = auVar5._0_8_;
      if (lVar1 == 0) {
        if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
          if ((EDMMHCAGPON->fields)._size < 1) {
            return;
          }
          index = 0;
          while (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                                     Method_System_Collections_Generic_List<XmlNode>_get_Item__),
                pIVar3 != (Il2CppObject *)0x0) {
            auVar5 = (*pIVar3->klass->vtable[0x33].methodPtr)
                               (pIVar3,StringLiteral_11897/*"SetDirection"*/,pIVar3->klass->vtable[0x33].method);
            lVar1 = auVar5._0_8_;
            if (lVar1 != 0) {
              if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                auVar5._8_8_ = extraout_x1_00;
                auVar5._0_8_ = lVar1;
              }
              goto LAB_03547418;
            }
            index = index + 1;
            if ((EDMMHCAGPON->fields)._size <= index) {
              return;
            }
          }
        }
      }
      else {
        if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          auVar5._8_8_ = extraout_x1;
          auVar5._0_8_ = lVar1;
        }
LAB_03547418:
        pEVar2 = MovesCompiler__COCMBLDPDIM(auVar5._0_8_,auVar5._8_8_);
        *ppEVar4 = pEVar2;
        thunk_FUN_01c20e04(ppEVar4,pEVar2);
        if (*ppEVar4 != (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) {
          ((*ppEVar4)->fields).OKONAOJIODE = true;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

