// TypeDefIndex 1466
// Namespace: 
// public class JFDNJGDAMHJ
// Fields:
//   private string NAKOKMPECML; // 0x10
//   public float AIEHPCAGOAL; // 0x18
//   public float CKGOPICDKMO; // 0x1C
//   public float MDEJIIBDAIE; // 0x20
//   public float DNMAFBCDEJJ; // 0x24
//   public float EKMMDCLBFIK; // 0x28
//   public float NLFJFKCJEAC; // 0x2C
//   public List<float> PEMHPNLDPHD; // 0x30

// ===== public void .ctor()  [RVA 0x3191E28]
// JFDNJGDAMHJ$$.ctor @ RVA 0x3191E28

void JFDNJGDAMHJ___ctor(JFDNJGDAMHJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_float__o *__this_00;
  System_Collections_Generic_List_float__o **ppSVar1;
  
  if ((DAT_04566a47 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04566a47 = 1;
  }
  (__this->fields).NAKOKMPECML = StringLiteral_14694/*"Value"*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo);
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  ppSVar1 = &(__this->fields).PEMHPNLDPHD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3191ED4]
// JFDNJGDAMHJ$$HNIHOIAMDPC @ RVA 0x3191ED4

void JFDNJGDAMHJ__HNIHOIAMDPC
               (JFDNJGDAMHJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  MethodInfo *method_00;
  float fVar4;
  
  if ((DAT_04566a48 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10205/*"Perfect"*/);
    FUN_01bab630(&StringLiteral_7051/*"HeadShot"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_4512/*"ComboCount"*/);
    FUN_01bab630(&StringLiteral_6488/*"FirstStrike"*/);
    FUN_01bab630(&StringLiteral_5257/*"DefaultPrizeBaseFactor"*/);
    DAT_04566a48 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_5257/*"DefaultPrizeBaseFactor"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar1 != (long *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        (__this->fields).EKMMDCLBFIK = fVar4;
        plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                   (AHDGNOJPPIB,StringLiteral_10205/*"Perfect"*/,
                                    (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (plVar1 != (long *)0x0) {
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
            fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
            (__this->fields).AIEHPCAGOAL = fVar4;
            plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                       (AHDGNOJPPIB,StringLiteral_6488/*"FirstStrike"*/,
                                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
            if (plVar1 != (long *)0x0) {
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
                fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                (__this->fields).CKGOPICDKMO = fVar4;
                plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                           (AHDGNOJPPIB,StringLiteral_4512/*"ComboCount"*/,
                                            (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                if (plVar1 != (long *)0x0) {
                  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
                  if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar2,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
                    fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    (__this->fields).MDEJIIBDAIE = fVar4;
                    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                               (AHDGNOJPPIB,StringLiteral_7051/*"HeadShot"*/,
                                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    if (plVar1 != (long *)0x0) {
                      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                               (**(code **)(*plVar1 + 0x238))
                                         (plVar1,*(undefined8 *)(*plVar1 + 0x240));
                      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar2,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
                        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                        (__this->fields).DNMAFBCDEJJ = fVar4;
                        plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                   (AHDGNOJPPIB,StringLiteral_11996/*"Shock"*/,
                                                    (AHDGNOJPPIB->klass->vtable)._51_get_Item.method
                                                   );
                        if (plVar1 != (long *)0x0) {
                          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                                   (**(code **)(*plVar1 + 0x238))
                                             (plVar1,*(undefined8 *)(*plVar1 + 0x240));
                          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            method_00 = (MethodInfo *)0x0;
                            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar2,(__this->fields).NAKOKMPECML,
                                                (MethodInfo *)0x0);
                            fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                            (__this->fields).NLFJFKCJEAC = fVar4;
                            JFDNJGDAMHJ__MDHENNNGCEA(__this,AHDGNOJPPIB,method_00);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MDHENNNGCEA(XmlNode AHDGNOJPPIB)  [RVA 0x3192154]
// JFDNJGDAMHJ$$MDHENNNGCEA @ RVA 0x3192154

void JFDNJGDAMHJ__MDHENNNGCEA
               (JFDNJGDAMHJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_Collections_Generic_List_float__o *pSVar7;
  System_Single_array *pSVar8;
  float fVar9;
  
  if ((DAT_04566a49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Clear__);
    FUN_01bab630(&StringLiteral_13972/*"Turtle"*/);
    FUN_01bab630(&StringLiteral_7019/*"Hard"*/);
    FUN_01bab630(&StringLiteral_4848/*"Crazy"*/);
    FUN_01bab630(&StringLiteral_2790/*"Agressive"*/);
    FUN_01bab630(&StringLiteral_6273/*"Fantastic"*/);
    FUN_01bab630(&StringLiteral_12505/*"Styles"*/);
    FUN_01bab630(&StringLiteral_3572/*"Brutal"*/);
    DAT_04566a49 = 1;
  }
  pSVar7 = (__this->fields).PEMHPNLDPHD;
  if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                 (AHDGNOJPPIB,StringLiteral_12505/*"Styles"*/,
                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (plVar3 != (long *)0x0) {
        pSVar7 = (__this->fields).PEMHPNLDPHD;
        plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_13972/*"Turtle"*/,*(undefined8 *)(*plVar3 + 0x470));
        if (plVar4 != (long *)0x0) {
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<float>_Add__;
            if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
              pSVar8 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pSVar8 != (System_Single_array *)0x0) {
                uVar1 = (pSVar7->fields)._size;
                if (uVar1 < (uint)pSVar8->max_length) {
                  (pSVar7->fields)._size = uVar1 + 1;
                  pSVar8->m_Items[(int)uVar1] = fVar9;
                }
                else {
                  System_Collections_Generic_List<float>__AddWithResize
                            (pSVar7,fVar9,
                             *(MethodInfo_2703A5C **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar7 = (__this->fields).PEMHPNLDPHD;
                plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                           (plVar3,StringLiteral_7019/*"Hard"*/,
                                            *(undefined8 *)(*plVar3 + 0x470));
                if (plVar4 != (long *)0x0) {
                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
                    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    lVar2 = Method_System_Collections_Generic_List<float>_Add__;
                    if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
                      pSVar8 = (pSVar7->fields)._items;
                      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                      if (pSVar8 != (System_Single_array *)0x0) {
                        uVar1 = (pSVar7->fields)._size;
                        if (uVar1 < (uint)pSVar8->max_length) {
                          (pSVar7->fields)._size = uVar1 + 1;
                          pSVar8->m_Items[(int)uVar1] = fVar9;
                        }
                        else {
                          System_Collections_Generic_List<float>__AddWithResize
                                    (pSVar7,fVar9,
                                     *(MethodInfo_2703A5C **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar7 = (__this->fields).PEMHPNLDPHD;
                        plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                                   (plVar3,StringLiteral_3572/*"Brutal"*/,
                                                    *(undefined8 *)(*plVar3 + 0x470));
                        if (plVar4 != (long *)0x0) {
                          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                   (**(code **)(*plVar4 + 0x238))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x240));
                          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar5,(__this->fields).NAKOKMPECML,
                                                (MethodInfo *)0x0);
                            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                            lVar2 = Method_System_Collections_Generic_List<float>_Add__;
                            if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
                              pSVar8 = (pSVar7->fields)._items;
                              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                              if (pSVar8 != (System_Single_array *)0x0) {
                                uVar1 = (pSVar7->fields)._size;
                                if (uVar1 < (uint)pSVar8->max_length) {
                                  (pSVar7->fields)._size = uVar1 + 1;
                                  pSVar8->m_Items[(int)uVar1] = fVar9;
                                }
                                else {
                                  System_Collections_Generic_List<float>__AddWithResize
                                            (pSVar7,fVar9,
                                             *(MethodInfo_2703A5C **)
                                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar7 = (__this->fields).PEMHPNLDPHD;
                                plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                                           (plVar3,StringLiteral_2790/*"Agressive"*/,
                                                            *(undefined8 *)(*plVar3 + 0x470));
                                if (plVar4 != (long *)0x0) {
                                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                           (**(code **)(*plVar4 + 0x238))
                                                     (plVar4,*(undefined8 *)(*plVar4 + 0x240));
                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar5,(__this->fields).NAKOKMPECML,
                                                        (MethodInfo *)0x0);
                                    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                                    lVar2 = Method_System_Collections_Generic_List<float>_Add__;
                                    if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
                                      pSVar8 = (pSVar7->fields)._items;
                                      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                                      if (pSVar8 != (System_Single_array *)0x0) {
                                        uVar1 = (pSVar7->fields)._size;
                                        if (uVar1 < (uint)pSVar8->max_length) {
                                          (pSVar7->fields)._size = uVar1 + 1;
                                          pSVar8->m_Items[(int)uVar1] = fVar9;
                                        }
                                        else {
                                          System_Collections_Generic_List<float>__AddWithResize
                                                    (pSVar7,fVar9,
                                                     *(MethodInfo_2703A5C **)
                                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        pSVar7 = (__this->fields).PEMHPNLDPHD;
                                        plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                                                   (plVar3,StringLiteral_4848/*"Crazy"*/,
                                                                    *(undefined8 *)(*plVar3 + 0x470)
                                                                   );
                                        if (plVar4 != (long *)0x0) {
                                          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                   (**(code **)(*plVar4 + 0x238))
                                                             (plVar4,*(undefined8 *)
                                                                      (*plVar4 + 0x240));
                                          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)
                                          {
                                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar5,(__this->fields).NAKOKMPECML,
                                                                (MethodInfo *)0x0);
                                            fVar9 = EIABCPKDEBD__GICIEKCGOHA
                                                              (pSVar6,0.0,(MethodInfo *)0x0);
                                            lVar2 = 
                                            Method_System_Collections_Generic_List<float>_Add__;
                                            if (pSVar7 != (System_Collections_Generic_List_float__o
                                                           *)0x0) {
                                              pSVar8 = (pSVar7->fields)._items;
                                              (pSVar7->fields)._version =
                                                   (pSVar7->fields)._version + 1;
                                              if (pSVar8 != (System_Single_array *)0x0) {
                                                uVar1 = (pSVar7->fields)._size;
                                                if (uVar1 < (uint)pSVar8->max_length) {
                                                  (pSVar7->fields)._size = uVar1 + 1;
                                                  pSVar8->m_Items[(int)uVar1] = fVar9;
                                                }
                                                else {
                                                  System_Collections_Generic_List<float>__AddWithResize
                                                            (pSVar7,fVar9,
                                                             *(MethodInfo_2703A5C **)
                                                              (*(long *)(*(long *)(lVar2 + 0x20) +
                                                                        0xc0) + 0x70));
                                                }
                                                pSVar7 = (__this->fields).PEMHPNLDPHD;
                                                plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                                                           (plVar3,
                                                  StringLiteral_6273/*"Fantastic"*/,
                                                  *(undefined8 *)(*plVar3 + 0x470));
                                                if (plVar3 != (long *)0x0) {
                                                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                           (**(code **)(*plVar3 + 0x238))
                                                                     (plVar3,*(undefined8 *)
                                                                              (*plVar3 + 0x240));
                                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,(__this->fields).NAKOKMPECML,
                                                             (MethodInfo *)0x0);
                                                  fVar9 = EIABCPKDEBD__GICIEKCGOHA
                                                                    (pSVar6,0.0,(MethodInfo *)0x0);
                                                  lVar2 = 
                                                  Method_System_Collections_Generic_List<float>_Add__
                                                  ;
                                                  if (pSVar7 != (
                                                  System_Collections_Generic_List_float__o *)0x0) {
                                                    pSVar8 = (pSVar7->fields)._items;
                                                    (pSVar7->fields)._version =
                                                         (pSVar7->fields)._version + 1;
                                                    if (pSVar8 != (System_Single_array *)0x0) {
                                                      uVar1 = (pSVar7->fields)._size;
                                                      if (uVar1 < (uint)pSVar8->max_length) {
                                                        (pSVar7->fields)._size = uVar1 + 1;
                                                        pSVar8->m_Items[(int)uVar1] = fVar9;
                                                        return;
                                                      }
                                                                                                            
                                                  System_Collections_Generic_List<float>__AddWithResize
                                                            (pSVar7,fVar9,
                                                             *(MethodInfo_2703A5C **)
                                                              (*(long *)(*(long *)(lVar2 + 0x20) +
                                                                        0xc0) + 0x70));
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

