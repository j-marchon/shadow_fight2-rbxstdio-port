// Nekki.SF2.GUI.SimpleScroll$$ArrangeBySiblingIndex @ RVA 0x302B248

void Nekki_SF2_GUI_SimpleScroll__ArrangeBySiblingIndex
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_IEnumerable_T__o *collection;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_IEnumerable_T__c *pSVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  long lVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  int index;
  
  if ((DAT_04565cbf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollItem___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    DAT_04565cbf = 1;
    method = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method);
  lVar5 = *(long *)&(__this->fields)._snapEase;
  if (lVar5 != 0) {
    piVar1 = &(__this->fields)._snapEase;
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 FUN_01bab718(Nekki_SF2_GUI_BaseScrollItem___TypeInfo,*(undefined4 *)(lVar5 + 0x18))
    ;
    pSVar6 = *(System_Collections_Generic_List_object__o **)piVar1;
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      index = 0;
      while( true ) {
        if ((pSVar6->fields)._size <= index) {
          pSVar6 = (System_Collections_Generic_List_object__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (pSVar6,collection,
                     Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
          *(System_Collections_Generic_List_object__o **)piVar1 = pSVar6;
          thunk_FUN_01c20e04(piVar1,pSVar6);
          return;
        }
        __this_00 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar6,index,
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_Transform_o *)0x0)) break;
        uVar2 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
        if ((*(System_Collections_Generic_List_object__o **)piVar1 ==
             (System_Collections_Generic_List_object__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_IEnumerable_T__c *)
                     System_Collections_Generic_List<object>__get_Item
                               (*(System_Collections_Generic_List_object__o **)piVar1,index,
                                Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__),
           collection == (System_Collections_Generic_IEnumerable_T__o *)0x0)) break;
        if ((pSVar3 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar3,(collection->klass->_1).element_class), lVar5 == 0)) {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if (*(uint *)&collection[1].monitor <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        (&collection[2].klass)[(int)uVar2] = pSVar3;
        thunk_FUN_01c20e04(&collection[2].klass + (int)uVar2,pSVar3);
        pSVar6 = *(System_Collections_Generic_List_object__o **)piVar1;
        index = index + 1;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

