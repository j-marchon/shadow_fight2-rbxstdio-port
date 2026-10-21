// TypeDefIndex 374
// Namespace: 
// public class LPACFIDMJOM
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public float GHKNFJJOIDM; // 0x18

// ===== public static float MFCLMHKBBGH(XmlNode DMDFAKNEPGH, LDHGBBPECKF HJCLPBKNLDP)  [RVA 0x347A758]
// LPACFIDMJOM$$MFCLMHKBBGH @ RVA 0x347A758

float LPACFIDMJOM__MFCLMHKBBGH
                (System_Xml_XmlNode_o *DMDFAKNEPGH,LDHGBBPECKF_o *HJCLPBKNLDP,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_04568341 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3266/*"AverageQuantity"*/);
    DAT_04568341 = 1;
  }
  if (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                       (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_3266/*"AverageQuantity"*/,(MethodInfo *)0x0);
      fVar1 = GIAMPEGMNHE__FOKFAIPDIMB(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      if (HJCLPBKNLDP != (LDHGBBPECKF_o *)0x0) {
        (HJCLPBKNLDP->fields).HLIONLGKLPH = fVar1;
        return fVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x347A7DC]
// LPACFIDMJOM$$.ctor @ RVA 0x347A7DC

void LPACFIDMJOM___ctor(LPACFIDMJOM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static int INECGHKFPAL(XmlNode DMDFAKNEPGH, List<LPACFIDMJOM> HJCLPBKNLDP)  [RVA 0x347A7E4]
// LPACFIDMJOM$$INECGHKFPAL @ RVA 0x347A7E4

int32_t LPACFIDMJOM__INECGHKFPAL
                  (System_Xml_XmlNode_o *DMDFAKNEPGH,
                  System_Collections_Generic_List_LPACFIDMJOM__o *HJCLPBKNLDP,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04568342 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202/*"Attribute"*/);
    DAT_04568342 = 1;
  }
  iVar1 = LPACFIDMJOM__HNIHOIAMDPC(DMDFAKNEPGH,HJCLPBKNLDP,StringLiteral_3202/*"Attribute"*/,in_x3);
  return iVar1;
}


// ===== private static int HNIHOIAMDPC(XmlNode DMDFAKNEPGH, List<LPACFIDMJOM> HJCLPBKNLDP, string AFKICLAFDKC)  [RVA 0x347A83C]
// LPACFIDMJOM$$HNIHOIAMDPC @ RVA 0x347A83C

/* WARNING: Removing unreachable block (ram,0x0357ab60) */

int32_t LPACFIDMJOM__HNIHOIAMDPC
                  (System_Xml_XmlNode_o *DMDFAKNEPGH,
                  System_Collections_Generic_List_LPACFIDMJOM__o *HJCLPBKNLDP,
                  System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *a;
  LPACFIDMJOM_o *__this;
  MethodInfo *method_00;
  long lVar7;
  LPACFIDMJOM_array *pLVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04568343 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LPACFIDMJOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPACFIDMJOM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPACFIDMJOM>_get_Count__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568343 = 1;
  }
  if ((HJCLPBKNLDP != (System_Collections_Generic_List_LPACFIDMJOM__o *)0x0) &&
     (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0)) {
    iVar1 = (HJCLPBKNLDP->fields)._size;
    plVar5 = (long *)(*(DMDFAKNEPGH->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._13_get_ChildNodes.method);
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
              goto LAB_0357a968;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0357a968:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_0357ab1c;
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0357aaf4;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0357aadc;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0357a9c8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0357a9c8:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar2) ||
           ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO);
        }
        a = (System_String_o *)
            (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                      (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
        method_00 = (MethodInfo *)0x0;
        bVar4 = System_String__op_Equality(a,AFKICLAFDKC,(MethodInfo *)0x0);
        if (bVar4) {
          __this = (LPACFIDMJOM_o *)thunk_FUN_01bda818(LPACFIDMJOM_TypeInfo);
          System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
          if (__this == (LPACFIDMJOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LPACFIDMJOM__HNIHOIAMDPC(__this,JHMENEKPIBO,method_00);
          lVar7 = Method_System_Collections_Generic_List<LPACFIDMJOM>_Add__;
          pLVar8 = (HJCLPBKNLDP->fields)._items;
          (HJCLPBKNLDP->fields)._version = (HJCLPBKNLDP->fields)._version + 1;
          if (pLVar8 == (LPACFIDMJOM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar3 = (HJCLPBKNLDP->fields)._size;
          if (uVar3 < (uint)pLVar8->max_length) {
            (HJCLPBKNLDP->fields)._size = uVar3 + 1;
            pLVar8->m_Items[(int)uVar3] = __this;
            thunk_FUN_01c20e04(pLVar8->m_Items + (int)uVar3,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)HJCLPBKNLDP,
                       (Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0357aadc:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0357ab10;
    }
  }
LAB_0357aaf4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0357ab10:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0357ab1c:
  return (HJCLPBKNLDP->fields)._size - iVar1;
}


// ===== private void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x347AC40]
// LPACFIDMJOM$$HNIHOIAMDPC @ RVA 0x347AC40

void LPACFIDMJOM__HNIHOIAMDPC
               (LPACFIDMJOM_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04568344 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11991/*"Shift"*/);
    DAT_04568344 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_11991/*"Shift"*/,(MethodInfo *)0x0);
        fVar4 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).GHKNFJJOIDM = fVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float HKIEJPKHBKG(XmlNode DMDFAKNEPGH, LDHGBBPECKF HJCLPBKNLDP)  [RVA 0x347AD14]
// LPACFIDMJOM$$HKIEJPKHBKG @ RVA 0x347AD14

float LPACFIDMJOM__HKIEJPKHBKG
                (System_Xml_XmlNode_o *DMDFAKNEPGH,LDHGBBPECKF_o *HJCLPBKNLDP,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_04568345 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3265/*"AverageBaseDamage"*/);
    FUN_01bab630(&StringLiteral_11102/*"RechargeRate"*/);
    FUN_01bab630(&StringLiteral_8785/*"MagicRechargeRate"*/);
    DAT_04568345 = 1;
  }
  if (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                       (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3265/*"AverageBaseDamage"*/,(MethodInfo *)0x0);
      fVar3 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
      if (HJCLPBKNLDP != (LDHGBBPECKF_o *)0x0) {
        (HJCLPBKNLDP->fields).JFILIGMAEAL = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                           (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_11102/*"RechargeRate"*/,(MethodInfo *)0x0);
          fVar3 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
          (HJCLPBKNLDP->fields).HIILEMCLEPD = fVar3;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                             (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_8785/*"MagicRechargeRate"*/,(MethodInfo *)0x0);
            fVar3 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
            (HJCLPBKNLDP->fields).MKAOIILMGCG = fVar3;
            return (HJCLPBKNLDP->fields).JFILIGMAEAL;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

