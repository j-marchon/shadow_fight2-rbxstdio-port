// TypeDefIndex 2416
// Namespace: 
// public class JGIFDELCGOJ
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public float JAICMIMBIOA; // 0x18

// ===== public static float PPOKEOHAHFG(List<JGIFDELCGOJ> JGHIJMJNJLE, string KGLJICLJHEL)  [RVA 0x333A16C]
// JGIFDELCGOJ$$PPOKEOHAHFG @ RVA 0x333A16C

float JGIFDELCGOJ__PPOKEOHAHFG
                (System_Collections_Generic_List_JGIFDELCGOJ__o *JGHIJMJNJLE,
                System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04567965 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Item__);
    DAT_04567965 = 1;
  }
  if (JGHIJMJNJLE != (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
    if (0 < (JGHIJMJNJLE->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)JGHIJMJNJLE,index,
                            Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0343a23c;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pIVar2[1].klass,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar1) {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)JGHIJMJNJLE,index,
                              Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Item__);
          if (pIVar2 != (Il2CppObject *)0x0) {
            return *(float *)&pIVar2[1].monitor;
          }
          goto LAB_0343a23c;
        }
        index = index + 1;
      } while (index < (JGHIJMJNJLE->fields)._size);
    }
    return 0.0;
  }
LAB_0343a23c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x333A240]
// JGIFDELCGOJ$$.ctor @ RVA 0x333A240

void JGIFDELCGOJ___ctor(JGIFDELCGOJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static List<JGIFDELCGOJ> KJNFEIJBDAH(XmlNode ELOCKFLGKNO)  [RVA 0x333A248]
// JGIFDELCGOJ$$KJNFEIJBDAH @ RVA 0x333A248

/* WARNING: Removing unreachable block (ram,0x0343a564) */

System_Collections_Generic_List_JGIFDELCGOJ__o *
JGIFDELCGOJ__KJNFEIJBDAH(System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *ELOCKFLGKNO_00;
  JGIFDELCGOJ_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  long lVar5;
  JGIFDELCGOJ_array *pJVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567966 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JGIFDELCGOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JGIFDELCGOJ>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567966 = 1;
    method = extraout_x1;
  }
  __this = (System_Collections_Generic_List_JGIFDELCGOJ__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<JGIFDELCGOJ>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<JGIFDELCGOJ>__ctor__);
  if ((ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method
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
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0343a390;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    in_x2 = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0343a390:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return __this;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0343a500;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0343a3f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    in_x2 = (MethodInfo *)0x1;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0343a3f0:
    ELOCKFLGKNO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (ELOCKFLGKNO_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((ELOCKFLGKNO_00->klass->_2).naturalAligment < bVar1) ||
         ((ELOCKFLGKNO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(ELOCKFLGKNO_00);
      }
    }
    __this_00 = (JGIFDELCGOJ_o *)thunk_FUN_01bda818(JGIFDELCGOJ_TypeInfo);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (JGIFDELCGOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    JGIFDELCGOJ__HNIHOIAMDPC(__this_00,ELOCKFLGKNO_00,in_x2);
    lVar5 = Method_System_Collections_Generic_List<JGIFDELCGOJ>_Add__;
    if (__this == (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pJVar6 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pJVar6 == (JGIFDELCGOJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pJVar6->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pJVar6->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar2,__this_00);
    }
    else {
      in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                 (MethodInfo_26E4DAC *)in_x2);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0343a51c;
    }
  }
LAB_0343a500:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0343a51c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return __this;
}


// ===== private void HNIHOIAMDPC(XmlNode ELOCKFLGKNO)  [RVA 0x333A638]
// JGIFDELCGOJ$$HNIHOIAMDPC @ RVA 0x333A638

void JGIFDELCGOJ__HNIHOIAMDPC
               (JGIFDELCGOJ_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04567967 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04567967 = 1;
  }
  if (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                       (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                         (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        fVar4 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).JAICMIMBIOA = fVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

