// TypeDefIndex 1373
// Namespace: 
// public class JHHFDBLANPH
// Fields:
//   private List<JHHFDBLANPH.MNHKJDJJINH> EJNOBBDDBDO; // 0x10
//   private int IOMNCJGDGNC; // 0x18
//   private string MKEEEDOKPMM; // 0x20
//   private static Dictionary<string, JHHFDBLANPH> EOPCNLCKANK; // 0x0

// ===== private static void .cctor()  [RVA 0x316D284]
// JHHFDBLANPH$$.cctor @ RVA 0x316D284

void JHHFDBLANPH___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
                    /* try { // try from 0326d284 to 0336d28f has its CatchHandler @ 0326cfcc */
                    /* try { // try from 0326d290 to 0336d297 has its CatchHandler @ 0326d298 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326d27c with catch @ 0326d298
                       catch(type#2 @ 00000000) { ... } // from try @ 0326d290 with catch @ 0326d298
                        */
  if ((DAT_04566904 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_TypeInfo);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    DAT_04566904 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>__ctor__);
  JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK =
       (System_Collections_Generic_Dictionary_string__JHHFDBLANPH__o *)__this;
  thunk_FUN_01c20e04(JHHFDBLANPH_TypeInfo->static_fields,__this);
  return;
}


// ===== public void IOBDPIBFLPL()  [RVA 0x316D31C]
// JHHFDBLANPH$$IOBDPIBFLPL @ RVA 0x316D31C

void JHHFDBLANPH__IOBDPIBFLPL(JHHFDBLANPH_o *__this,MethodInfo *method)

{
  int iVar1;
  int index;
  int32_t iVar2;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *pSVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  int32_t index_00;
  int local_54;
  
  if ((DAT_04566905 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    DAT_04566905 = 1;
  }
  local_54 = 0;
  pSVar3 = (__this->fields).EJNOBBDDBDO;
  if (pSVar3 != (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) {
    index_00 = 0;
    while( true ) {
      if ((pSVar3->fields)._size <= index_00) {
        return;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                          Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                         );
      if (pIVar4 == (Il2CppObject *)0x0) break;
      pIVar6 = pIVar4[1].klass;
      iVar1 = index_00 + 1;
      local_54 = iVar1;
      pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_15862/*"_"*/,pSVar5,(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppClass *)0x0) break;
      System_String__LastIndexOf((System_String_o *)pIVar6,pSVar5,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EJNOBBDDBDO;
      if ((pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                             ), pIVar4 == (Il2CppObject *)0x0)) break;
      pIVar6 = pIVar4[1].klass;
      local_54 = iVar1;
      pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_15862/*"_"*/,pSVar5,(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppClass *)0x0) break;
      iVar2 = System_String__LastIndexOf((System_String_o *)pIVar6,pSVar5,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EJNOBBDDBDO;
      if (((pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                               Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                              ), pIVar4 == (Il2CppObject *)0x0)) ||
         (pIVar4[1].klass == (Il2CppClass *)0x0)) break;
      if (iVar2 < *(int *)&((pIVar4[1].klass)->_1).name + -2) {
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        index = index_00;
        while( true ) {
          if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
          goto LAB_0326d5a0;
          if ((pSVar3->fields)._size <= index) goto LAB_0326d598;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                             );
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0326d5a0;
          pIVar6 = pIVar4[1].klass;
          local_54 = iVar1;
          pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(StringLiteral_15862/*"_"*/,pSVar5,(MethodInfo *)0x0);
          if (pIVar6 == (Il2CppClass *)0x0) goto LAB_0326d5a0;
          iVar2 = System_String__LastIndexOf((System_String_o *)pIVar6,pSVar5,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).EJNOBBDDBDO;
          if (((pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) ||
              (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                                  ), pIVar4 == (Il2CppObject *)0x0)) ||
             (pIVar4[1].klass == (Il2CppClass *)0x0)) goto LAB_0326d5a0;
          if (*(int *)&((pIVar4[1].klass)->_1).name + -2 <= iVar2) break;
          pSVar3 = (__this->fields).EJNOBBDDBDO;
          index = index + 1;
        }
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                           );
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                   Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_RemoveAt__);
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
        System_Collections_Generic_List<object>__Insert
                  ((System_Collections_Generic_List_object__o *)pSVar3,index_00,pIVar4,
                   Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Insert__);
      }
LAB_0326d598:
      pSVar3 = (__this->fields).EJNOBBDDBDO;
      index_00 = iVar1;
      if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
    }
  }
LAB_0326d5a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void .ctor(XmlDocument EPHIMGPGNPK, string EIJDDKJONFO)  [RVA 0x316D5C0]
// JHHFDBLANPH$$.ctor @ RVA 0x316D5C0

/* WARNING: Removing unreachable block (ram,0x0326db68) */
/* WARNING: Removing unreachable block (ram,0x0326dd74) */

void JHHFDBLANPH___ctor(JHHFDBLANPH_o *__this,System_Xml_XmlDocument_o *EPHIMGPGNPK,
                       System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *__this_00;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *GNEFHGGHFBL;
  System_String_o *pSVar7;
  long *plVar8;
  long *plVar9;
  System_String_array *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04566906 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_19666/*"metadata"*/);
    FUN_01bab630(&StringLiteral_20233/*"plist"*/);
    FUN_01bab630(&StringLiteral_21057/*"size"*/);
    FUN_01bab630(&StringLiteral_17719/*"dict"*/);
    FUN_01bab630(&StringLiteral_18346/*"frames"*/);
    FUN_01bab630(&StringLiteral_19289/*"key"*/);
    DAT_04566906 = 1;
  }
  __this_00 = (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>__ctor__);
  (__this->fields).EJNOBBDDBDO = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (EIJDDKJONFO != (System_String_o *)0x0) {
    pSVar4 = System_String__ToLower(EIJDDKJONFO,(MethodInfo *)0x0);
    (__this->fields).MKEEEDOKPMM = pSVar4;
    thunk_FUN_01c20e04();
    if ((((EPHIMGPGNPK != (System_Xml_XmlDocument_o *)0x0) &&
         (plVar5 = (long *)(*(EPHIMGPGNPK->klass->vtable)._51_get_Item.methodPtr)
                                     (EPHIMGPGNPK,StringLiteral_20233/*"plist"*/,
                                      (EPHIMGPGNPK->klass->vtable)._51_get_Item.method),
         plVar5 != (long *)0x0)) &&
        (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                    (plVar5,StringLiteral_17719/*"dict"*/,*(undefined8 *)(*plVar5 + 0x470)),
        plVar5 != (long *)0x0)) &&
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
       plVar5 != (long *)0x0)) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (System_String_o *)0x0;
LAB_0326d778:
      do {
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0326d7c4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326d7c4:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0326dc74;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0326dc5c;
        }
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0326d824;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326d824:
        GNEFHGGHFBL = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (GNEFHGGHFBL == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((GNEFHGGHFBL->klass->_2).naturalAligment < bVar1) ||
           ((GNEFHGGHFBL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(GNEFHGGHFBL);
        }
        pSVar7 = (System_String_o *)
                 (*(GNEFHGGHFBL->klass->vtable)._8_unknown.methodPtr)
                           (GNEFHGGHFBL,(GNEFHGGHFBL->klass->vtable)._8_unknown.method);
        bVar2 = System_String__op_Equality(pSVar7,StringLiteral_19289/*"key"*/,(MethodInfo *)0x0);
        if (bVar2) {
          plVar8 = (long *)(*(GNEFHGGHFBL->klass->vtable)._18_get_FirstChild.methodPtr)
                                     (GNEFHGGHFBL,
                                      (GNEFHGGHFBL->klass->vtable)._18_get_FirstChild.method);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar4 = (System_String_o *)
                   (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        }
        else {
          bVar2 = System_String__op_Equality(pSVar4,StringLiteral_18346/*"frames"*/,(MethodInfo *)0x0);
          if (bVar2) {
            JHHFDBLANPH__FIJCDMCDGCF(__this,GNEFHGGHFBL,(__this->fields).EJNOBBDDBDO,method);
          }
          bVar2 = System_String__op_Equality(pSVar4,StringLiteral_19666/*"metadata"*/,(MethodInfo *)0x0);
          if (bVar2) {
            plVar8 = (long *)(*(GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (GNEFHGGHFBL,
                                        (GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.method);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0))
            ;
            do {
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
LAB_0326d8f0:
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0326d93c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326d93c:
              uVar12 = (*(code *)*puVar6)(plVar8,puVar6[1]);
              if ((uVar12 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                if (plVar8 == (long *)0x0) break;
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 == 0) goto LAB_0326db3c;
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_0326db24;
              }
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0326d99c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326d99c:
              plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar9);
              }
              pSVar7 = (System_String_o *)
                       (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              bVar2 = System_String__op_Equality(pSVar7,StringLiteral_19289/*"key"*/,(MethodInfo *)0x0);
              if (!bVar2) {
                bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21057/*"size"*/,(MethodInfo *)0x0);
                if (bVar2) {
                  plVar9 = (long *)(**(code **)(*plVar9 + 600))
                                             (plVar9,*(undefined8 *)(*plVar9 + 0x260));
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = (System_String_o *)
                           (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
                  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = System_String__Substring
                                     (pSVar7,1,(pSVar7->fields)._stringLength + -2,(MethodInfo *)0x0
                                     );
                  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  method = (MethodInfo *)0x0;
                  pSVar10 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0);
                  if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  if ((uint)pSVar10->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8d0();
                  }
                  iVar3 = System_Int32__Parse(pSVar10->m_Items[1],(MethodInfo *)0x0);
                  (__this->fields).IOMNCJGDGNC = iVar3;
                }
                goto LAB_0326d8f0;
              }
              plVar9 = (long *)(**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260))
              ;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = (System_String_o *)
                       (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            } while( true );
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0326db24:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0326db58;
    }
  }
LAB_0326db3c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0326db58:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  goto LAB_0326d778;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0326dc5c:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0326dc90;
    }
  }
LAB_0326dc74:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0326dc90:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public void GBJGBHNMPOE()  [RVA 0x316E29C]
// JHHFDBLANPH$$GBJGBHNMPOE @ RVA 0x316E29C

void JHHFDBLANPH__GBJGBHNMPOE(JHHFDBLANPH_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t startIndex;
  System_String_o *pSVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_00;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *pSVar6;
  int index;
  uint uVar7;
  
  if ((DAT_04566907 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    FUN_01bab630(&StringLiteral_1490/*".xml"*/);
    FUN_01bab630(&StringLiteral_20554/*"resources"*/);
    FUN_01bab630(&StringLiteral_16235/*"_xml"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566907 = 1;
  }
  pSVar3 = (__this->fields).MKEEEDOKPMM;
  if (pSVar3 != (System_String_o *)0x0) {
    startIndex = System_String__IndexOf(pSVar3,StringLiteral_20554/*"resources"*/,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).MKEEEDOKPMM;
    if (startIndex != -1) {
      if (pSVar3 == (System_String_o *)0x0) goto LAB_0326e490;
      pSVar3 = System_String__Substring(pSVar3,startIndex,(MethodInfo *)0x0);
    }
    if ((pSVar3 != (System_String_o *)0x0) &&
       (pSVar3 = System_String__Replace
                           (pSVar3,StringLiteral_16235/*"_xml"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0),
       pSVar3 != (System_String_o *)0x0)) {
      pSVar3 = System_String__Replace(pSVar3,StringLiteral_1490/*".xml"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      pSVar4 = UnityEngine_ResourcesAndBundles__LoadAll<object>
                         (pSVar3,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar1 = (uint)pSVar4->max_length;
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (uVar1 <= uVar7) {
LAB_0326e494:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            __this_00 = (UnityEngine_Object_o *)pSVar4->m_Items[(int)uVar7];
            if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_0326e490;
            pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
            pSVar6 = (__this->fields).EJNOBBDDBDO;
            if (pSVar6 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
            goto LAB_0326e490;
            index = 0;
            while (index < (pSVar6->fields)._size) {
              pIVar5 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                  Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                                 );
              if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0326e490;
              bVar2 = System_String__op_Equality
                                ((System_String_o *)pIVar5[1].klass,pSVar3,(MethodInfo *)0x0);
              if (bVar2) {
                pSVar6 = (__this->fields).EJNOBBDDBDO;
                if (pSVar6 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
                goto LAB_0326e490;
                pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                    Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                                   );
                if ((uint)pSVar4->max_length <= uVar7) goto LAB_0326e494;
                if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0326e490;
                pIVar5[1].monitor = pSVar4->m_Items[(int)uVar7];
                thunk_FUN_01c20e04();
              }
              pSVar6 = (__this->fields).EJNOBBDDBDO;
              index = index + 1;
              if (pSVar6 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
              goto LAB_0326e490;
            }
            uVar1 = (uint)pSVar4->max_length;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar1);
        }
        return;
      }
    }
  }
LAB_0326e490:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static JHHFDBLANPH EOHMFJFFFIN(string EIJDDKJONFO, bool HCFJIALLIJJ = False)  [RVA 0x316E498]
// JHHFDBLANPH$$EOHMFJFFFIN @ RVA 0x316E498

JHHFDBLANPH_o *
JHHFDBLANPH__EOHMFJFFFIN(System_String_o *EIJDDKJONFO,bool HCFJIALLIJJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  JHHFDBLANPH_o *pJVar3;
  System_Xml_XmlDocument_o *EPHIMGPGNPK;
  MethodInfo *method_00;
  
  if ((DAT_04566908 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_get_Item__);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566908 = 1;
  }
  if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)EIJDDKJONFO,
                       Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_ContainsKey__
                      );
    if (!bVar1) {
      method_00 = (MethodInfo *)0x1;
      EPHIMGPGNPK = GIAMPEGMNHE__IBJOMPOLPCC
                              (EIJDDKJONFO,StringLiteral_1/*""*/,(uint)HCFJIALLIJJ,true,true,false,
                               (MethodInfo *)0x0);
      if (EPHIMGPGNPK == (System_Xml_XmlDocument_o *)0x0) {
        pJVar3 = (JHHFDBLANPH_o *)0x0;
      }
      else {
        pJVar3 = (JHHFDBLANPH_o *)thunk_FUN_01bda818(JHHFDBLANPH_TypeInfo);
        JHHFDBLANPH___ctor(pJVar3,EPHIMGPGNPK,EIJDDKJONFO,method_00);
        if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_0326e618;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)EIJDDKJONFO,(Il2CppObject *)pJVar3,
                   Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Add__);
      }
      return pJVar3;
    }
    if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pJVar3 = (JHHFDBLANPH_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)EIJDDKJONFO,
                          Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_get_Item__
                         );
      return pJVar3;
    }
  }
LAB_0326e618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIJCDMCDGCF(XmlNode GNEFHGGHFBL, List<JHHFDBLANPH.MNHKJDJJINH> CLDOMICJKPE)  [RVA 0x316DEA0]
// JHHFDBLANPH$$FIJCDMCDGCF @ RVA 0x316DEA0

/* WARNING: Removing unreachable block (ram,0x0326e1b4) */

void JHHFDBLANPH__FIJCDMCDGCF
               (JHHFDBLANPH_o *__this,System_Xml_XmlNode_o *GNEFHGGHFBL,
               System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *CLDOMICJKPE,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *HDIAJLKOKLI;
  System_String_o *a;
  JHHFDBLANPH_MNHKJDJJINH_o *item;
  long *plVar6;
  long lVar7;
  JHHFDBLANPH_MNHKJDJJINH_array *pJVar8;
  ulong uVar9;
  int *piVar10;
  System_String_o *AFKICLAFDKC;
  
  if ((DAT_04566909 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    __this = (JHHFDBLANPH_o *)FUN_01bab630(&StringLiteral_19289/*"key"*/);
    DAT_04566909 = 1;
  }
  if (GNEFHGGHFBL != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (GNEFHGGHFBL,(GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.method);
    __this = (JHHFDBLANPH_o *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      AFKICLAFDKC = (System_String_o *)0x0;
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0326dfb4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326dfb4:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0326e154;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0326e13c;
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0326e014;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326e014:
        HDIAJLKOKLI = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (HDIAJLKOKLI == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((HDIAJLKOKLI->klass->_2).naturalAligment < bVar1) ||
           ((HDIAJLKOKLI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(HDIAJLKOKLI);
        }
        a = (System_String_o *)
            (*(HDIAJLKOKLI->klass->vtable)._8_unknown.methodPtr)
                      (HDIAJLKOKLI,(HDIAJLKOKLI->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_19289/*"key"*/,(MethodInfo *)0x0);
        if (bVar3) {
          plVar6 = (long *)(*(HDIAJLKOKLI->klass->vtable)._18_get_FirstChild.methodPtr)
                                     (HDIAJLKOKLI,
                                      (HDIAJLKOKLI->klass->vtable)._18_get_FirstChild.method);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          AFKICLAFDKC = (System_String_o *)
                        (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        }
        else {
          item = JHHFDBLANPH__LLOLAGGFMCJ((JHHFDBLANPH_o *)0x0,HDIAJLKOKLI,AFKICLAFDKC,method);
          lVar7 = Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Add__;
          if (CLDOMICJKPE == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar8 = (CLDOMICJKPE->fields)._items;
          (CLDOMICJKPE->fields)._version = (CLDOMICJKPE->fields)._version + 1;
          if (pJVar8 == (JHHFDBLANPH_MNHKJDJJINH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (CLDOMICJKPE->fields)._size;
          if (uVar2 < (uint)pJVar8->max_length) {
            (CLDOMICJKPE->fields)._size = uVar2 + 1;
            pJVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)CLDOMICJKPE,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0326e13c:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0326e170;
    }
  }
LAB_0326e154:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0326e170:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== private JHHFDBLANPH.MNHKJDJJINH LLOLAGGFMCJ(XmlNode HDIAJLKOKLI, string AFKICLAFDKC)  [RVA 0x316E61C]
// JHHFDBLANPH$$LLOLAGGFMCJ @ RVA 0x316E61C

/* WARNING: Removing unreachable block (ram,0x0326ebf0) */
/* WARNING: Removing unreachable block (ram,0x0326ec3c) */

JHHFDBLANPH_MNHKJDJJINH_o *
JHHFDBLANPH__LLOLAGGFMCJ
          (JHHFDBLANPH_o *__this,System_Xml_XmlNode_o *HDIAJLKOKLI,System_String_o *AFKICLAFDKC,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  JHHFDBLANPH_MNHKJDJJINH_o *__this_00;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_0456690a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0326e65c to 0336e777 has its CatchHandler @ 0326e65c
                       catch() { ... } // from try @ 0326e65c with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e830 with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e8c0 with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e8c8 with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e974 with catch @ 0326e65c */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JHHFDBLANPH_MNHKJDJJINH_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_21139/*"sourceSize"*/);
    FUN_01bab630(&StringLiteral_21465/*"textureRect"*/);
    FUN_01bab630(&StringLiteral_19963/*"offset"*/);
    FUN_01bab630(&StringLiteral_21168/*"spriteSize"*/);
    FUN_01bab630(&StringLiteral_1480/*".png"*/);
    FUN_01bab630(&StringLiteral_22255/*"{0,0}"*/);
    FUN_01bab630(&StringLiteral_21466/*"textureRotated"*/);
    FUN_01bab630(&StringLiteral_21605/*"true"*/);
    FUN_01bab630(&StringLiteral_20618/*"rotated"*/);
    FUN_01bab630(&StringLiteral_18343/*"frame"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_21167/*"spriteOffset"*/);
    FUN_01bab630(&StringLiteral_19289/*"key"*/);
    DAT_0456690a = 1;
  }
  __this_00 = (JHHFDBLANPH_MNHKJDJJINH_o *)thunk_FUN_01bda818(JHHFDBLANPH_MNHKJDJJINH_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((AFKICLAFDKC != (System_String_o *)0x0) &&
     (pSVar4 = System_String__Replace
                         (AFKICLAFDKC,StringLiteral_1480/*".png"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0),
     __this_00 != (JHHFDBLANPH_MNHKJDJJINH_o *)0x0)) {
    (__this_00->fields).NPFMOEOIEKM = pSVar4;
    thunk_FUN_01c20e04();
                    /* try { // try from 0326e778 to 0336e79f has its CatchHandler @ 0326e8e4 */
    if ((HDIAJLKOKLI != (System_Xml_XmlNode_o *)0x0) &&
       (plVar5 = (long *)(*(HDIAJLKOKLI->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (HDIAJLKOKLI,
                                    (HDIAJLKOKLI->klass->vtable)._13_get_ChildNodes.method),
       plVar5 != (long *)0x0)) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (System_String_o *)0x0;
                    /* try { // try from 0326e7d4 to 0336e7fb has its CatchHandler @ 0326e8e0 */
LAB_0326e7e0:
      do {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0326e828 to 0336e82f has its CatchHandler @ 0326e8d4 */
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0326e82c;
            }
            uVar11 = uVar11 - 1;
                    /* try { // try from 0326e808 to 0336e817 has its CatchHandler @ 0326e8dc */
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326e82c:
                    /* try { // try from 0326e830 to 0336e8bb has its CatchHandler @ 0326e65c */
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_0326ebe4;
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0326ebbc;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0326eba4;
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0326e88c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326e88c:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0326e8bc to 0336e8bf has its CatchHandler @ 0326e8d8 */
                    /* try { // try from 0326e8c0 to 0336e8c3 has its CatchHandler @ 0326e65c */
                    /* try { // try from 0326e8c4 to 0336e8c7 has its CatchHandler @ 0326e8d0 */
                    /* try { // try from 0326e8c8 to 0336e8fb has its CatchHandler @ 0326e65c */
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e8c4 with catch @ 0326e8d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e828 with catch @ 0326e8d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e8bc with catch @ 0326e8d8
                        */
        pSVar8 = (System_String_o *)
                 (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e808 with catch @ 0326e8dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e7d4 with catch @ 0326e8e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e778 with catch @ 0326e8e4
                        */
        bVar2 = System_String__op_Equality(pSVar8,StringLiteral_19289/*"key"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar4,(MethodInfo *)0x0);
          if (0xbb6a4c95 < uVar3) {
            if (uVar3 < 0xdcc01c8a) {
                    /* try { // try from 0326e974 to 0336e97f has its CatchHandler @ 0326e65c */
              if (uVar3 == 0xd20a71a6) {
                pMVar9 = (MethodInfo *)0x0;
                bVar2 = System_String__op_Equality(pSVar4,StringLiteral_18343/*"frame"*/,(MethodInfo *)0x0);
                goto LAB_0326eab0;
              }
                    /* try { // try from 0326e980 to 0336e987 has its CatchHandler @ 0326e988 */
              if (uVar3 != 0xdcc01c89) goto LAB_0326e7e0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326e94c with catch @ 0326e988
                       catch(type#2 @ 00000000) { ... } // from try @ 0326e980 with catch @ 0326e988
                        */
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21139/*"sourceSize"*/,(MethodInfo *)0x0);
            }
            else {
              if (uVar3 == 0xef5b2107) {
                pMVar9 = (MethodInfo *)0x0;
                bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21167/*"spriteOffset"*/,(MethodInfo *)0x0);
                if (bVar2) {
                  JHHFDBLANPH_MNHKJDJJINH__JMFIDIANAAI(__this_00,StringLiteral_22255/*"{0,0}"*/,pMVar9);
                }
                goto LAB_0326e7e0;
              }
              if (uVar3 != 0xfede9a95) goto LAB_0326e7e0;
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21168/*"spriteSize"*/,(MethodInfo *)0x0);
            }
            if (bVar2 != false) {
              plVar7 = (long *)(**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260))
              ;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar8 = (System_String_o *)
                       (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
              JHHFDBLANPH_MNHKJDJJINH__EABFNDGMFKD(__this_00,pSVar8,pMVar9);
            }
            goto LAB_0326e7e0;
          }
          if (uVar3 < 0x4d8f3303) {
            if (uVar3 == 0x14c8d3ca) {
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_19963/*"offset"*/,(MethodInfo *)0x0);
              if (bVar2) {
                plVar7 = (long *)(**(code **)(*plVar7 + 600))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x260));
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar8 = (System_String_o *)
                         (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
                JHHFDBLANPH_MNHKJDJJINH__JMFIDIANAAI(__this_00,pSVar8,pMVar9);
              }
            }
            else if (uVar3 == 0x4d8f3302) {
                    /* try { // try from 0326e94c to 0336e973 has its CatchHandler @ 0326e988 */
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21465/*"textureRect"*/,(MethodInfo *)0x0);
LAB_0326eab0:
              if (bVar2 != false) {
                plVar7 = (long *)(**(code **)(*plVar7 + 600))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x260));
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar8 = (System_String_o *)
                         (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
                JHHFDBLANPH_MNHKJDJJINH__IDJNOIMDGKJ(__this_00,pSVar8,pMVar9);
              }
            }
            goto LAB_0326e7e0;
          }
          if (uVar3 == 0xaeaaf42a) {
            bVar2 = System_String__op_Equality(pSVar4,StringLiteral_20618/*"rotated"*/,(MethodInfo *)0x0);
          }
          else {
            if (uVar3 != 0xbb6a4c95) goto LAB_0326e7e0;
            bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21466/*"textureRotated"*/,(MethodInfo *)0x0);
          }
          if (bVar2 != false) {
            pSVar8 = (System_String_o *)
                     (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            bVar2 = System_String__op_Equality(pSVar8,StringLiteral_21605/*"true"*/,(MethodInfo *)0x0);
            (__this_00->fields).CDHBEDHABDL = bVar2;
          }
          goto LAB_0326e7e0;
        }
                    /* try { // try from 0326e8fc to 0336e8ff has its CatchHandler @ 0326e90c */
        plVar7 = (long *)(**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0326e8fc with catch @ 0326e90c */
        pSVar4 = (System_String_o *)
                 (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      } while( true );
    }
  }
  goto LAB_0326ec2c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0326eba4:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0326ebd8;
    }
  }
LAB_0326ebbc:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0326ebd8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0326ebe4:
  if ((__this_00->fields).EMPEBPJNGKP != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
    return __this_00;
  }
LAB_0326ec2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NECODEBPGNE()  [RVA 0x316F0D8]
// JHHFDBLANPH$$NECODEBPGNE @ RVA 0x316F0D8

void JHHFDBLANPH__NECODEBPGNE(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_0456690b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Clear__);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    DAT_0456690b = 1;
  }
  if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0326f12c to 0336f23b has its CatchHandler @ 0326f12c
                       catch() { ... } // from try @ 0326f12c with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f2c0 with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f2f8 with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f334 with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f364 with catch @ 0326f12c */
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<JHHFDBLANPH.MNHKJDJJINH> CFGGKLJEMHE()  [RVA 0x316F150]
// JHHFDBLANPH$$CFGGKLJEMHE @ RVA 0x316F150

System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *
JHHFDBLANPH__CFGGKLJEMHE(JHHFDBLANPH_o *__this,MethodInfo *method)

{
  return (__this->fields).EJNOBBDDBDO;
}

