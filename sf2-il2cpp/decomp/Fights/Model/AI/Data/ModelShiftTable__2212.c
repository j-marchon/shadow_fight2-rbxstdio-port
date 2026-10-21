// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.ModelShiftTable  (obfuscated KOGMOACEOAM)
// TypeDefIndex 2212
// Namespace: 
// public class ModelShiftTable : List<float[]>
// Fields:
//   private const string LDPHPJENNDC = "assets/tactics/shift/";
//   private const string KJPBBPPPKJK = ".stb";
//   private List<string> KBPGCNCNJAG; // 0x28
//   private InfoAnimation OAKOFJJIOFF; // 0x30

// ===== public float ILMOLCLNCPI(int BDCMEGDFMOB, string BCPAFBNLBDE)  [RVA 0x32EA098]
// ModelShiftTable$$ILMOLCLNCPI @ RVA 0x32EA098

float ModelShiftTable__ILMOLCLNCPI
                (ModelShiftTable_o *__this,int32_t BDCMEGDFMOB,System_String_o *BCPAFBNLBDE,
                MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  float fVar5;
  
  method_00 = (MethodInfo *)BCPAFBNLBDE;
  if ((DAT_04567630 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ElementAt<float[]>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>_get_Count__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_19889/*"node {1} not found"*/);
    DAT_04567630 = 1;
  }
  fVar5 = 0.0;
  if (BDCMEGDFMOB < (__this->fields).super._size) {
    uVar1 = ModelShiftTable__IDKLPIGHDGI(__this,BCPAFBNLBDE,method_00);
    if ((int)uVar1 < 0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_033ea1f0;
      if ((BCPAFBNLBDE != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(BCPAFBNLBDE,(((args->obj).klass)->_1).element_class),
         lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) goto LAB_033ea1f4;
      args->m_Items[0] = (Il2CppObject *)BCPAFBNLBDE;
      thunk_FUN_01c20e04(args->m_Items,BCPAFBNLBDE);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_19889/*"node {1} not found"*/,args,(MethodInfo *)0x0);
      fVar5 = 0.0;
    }
    else {
      pIVar2 = System_Linq_Enumerable__ElementAt<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this,BDCMEGDFMOB,
                          Method_System_Linq_Enumerable_ElementAt<float[]>__);
      if (pIVar2 == (Il2CppObject *)0x0) {
LAB_033ea1f0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(uint *)&pIVar2[1].monitor <= uVar1) {
LAB_033ea1f4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      fVar5 = *(float *)((long)&pIVar2[2].klass + (ulong)uVar1 * 4);
    }
  }
  return fVar5;
}


// ===== public InfoAnimation FABBCMFIGBM()  [RVA 0x32EA3A4]
// ModelShiftTable$$FABBCMFIGBM @ RVA 0x32EA3A4

InfoAnimation_o * ModelShiftTable__FABBCMFIGBM(ModelShiftTable_o *__this,MethodInfo *method)

{
  return (__this->fields).OAKOFJJIOFF;
}


// ===== private int AKNJIJEHOBH(BinaryReader NLKOFFFAFHM)  [RVA 0x32EA3AC]
// ModelShiftTable$$AKNJIJEHOBH @ RVA 0x32EA3AC

int32_t ModelShiftTable__AKNJIJEHOBH
                  (ModelShiftTable_o *__this,System_IO_BinaryReader_o *NLKOFFFAFHM,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *item;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_04567631 & 1) == 0) {
    FUN_01bab630(&TacticalTableHolder_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04567631 = 1;
  }
  if (NLKOFFFAFHM != (System_IO_BinaryReader_o *)0x0) {
    uVar3 = (*(NLKOFFFAFHM->klass->vtable)._16_ReadUInt32.methodPtr)
                      (NLKOFFFAFHM,(NLKOFFFAFHM->klass->vtable)._16_ReadUInt32.method);
    pSVar4 = (__this->fields).KBPGCNCNJAG;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) {
        iVar7 = 4;
      }
      else {
        iVar7 = 4;
        iVar8 = 1;
        do {
          if ((TacticalTableHolder_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          item = TacticalTableHolder__IIADICPGOMI(NLKOFFFAFHM,(MethodInfo *)0x0);
          lVar6 = Method_System_Collections_Generic_List<string>_Add__;
          if ((item == (System_String_o *)0x0) ||
             (pSVar4 = (__this->fields).KBPGCNCNJAG,
             pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_033ea528;
          iVar1 = (item->fields)._stringLength;
          pSVar5 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pSVar5 == (System_String_array *)0x0) goto LAB_033ea528;
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = (long)iVar8;
          iVar7 = iVar7 + iVar1 + 1;
          iVar8 = iVar8 + 1;
        } while (lVar6 < (long)(ulong)uVar3);
      }
      return iVar7;
    }
  }
LAB_033ea528:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32EA52C]
// ModelShiftTable$$.ctor @ RVA 0x32EA52C

void ModelShiftTable___ctor(ModelShiftTable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  InfoAnimation_o **ppEVar2;
  
  if ((DAT_04567632 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<float[]>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567632 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).KBPGCNCNJAG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((System_Collections_Generic_List<float[]>_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<float[]>__ctor__);
  ppEVar2 = &(__this->fields).OAKOFJJIOFF;
  *ppEVar2 = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(ppEVar2,0);
  return;
}


// ===== private void ICNKLIDJEBG(BinaryReader NLKOFFFAFHM, int PGFAIJMMOHJ)  [RVA 0x32EA5FC]
// ModelShiftTable$$ICNKLIDJEBG @ RVA 0x32EA5FC

void ModelShiftTable__ICNKLIDJEBG
               (ModelShiftTable_o *__this,System_IO_BinaryReader_o *NLKOFFFAFHM,int32_t PGFAIJMMOHJ,
               MethodInfo *method)

{
  uint uVar1;
  int HFBFLHCIGNB;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  System_Single_array *JGHIJMJNJLE;
  System_Single_array *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Single_array_array *pSVar6;
  int KBAJGAHMEAF;
  int value;
  ulong uVar7;
  float fVar8;
  
  method_00 = (MethodInfo *)(ulong)(uint)PGFAIJMMOHJ;
  if ((DAT_04567633 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<float>__);
    FUN_01bab630(&TacticalTableHolder_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>_set_Capacity__);
    FUN_01bab630(&float___TypeInfo);
    FUN_01bab630(&StringLiteral_17398/*"count % 4 != 0"*/);
    FUN_01bab630(&StringLiteral_17399/*"count % nodeCount != 0"*/);
    DAT_04567633 = 1;
  }
  if (0 < PGFAIJMMOHJ) {
    iVar4 = ModelShiftTable__AKNJIJEHOBH(__this,NLKOFFFAFHM,method_00);
    pSVar5 = (__this->fields).KBPGCNCNJAG;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
LAB_033ea888:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HFBFLHCIGNB = (pSVar5->fields)._size;
    uVar2 = PGFAIJMMOHJ - iVar4;
    if ((uVar2 & 3) != 0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_17398/*"count % 4 != 0"*/,(MethodInfo *)0x0);
    }
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = (int)uVar1 >> 2;
    value = 0;
    if (HFBFLHCIGNB != 0) {
      value = (int)uVar1 / HFBFLHCIGNB;
    }
    if (uVar1 != value * HFBFLHCIGNB) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_17399/*"count % nodeCount != 0"*/,(MethodInfo *)0x0);
    }
    JGHIJMJNJLE = (System_Single_array *)FUN_01bab718(float___TypeInfo,uVar1);
    if (3 < (int)uVar2) {
      if (NLKOFFFAFHM == (System_IO_BinaryReader_o *)0x0) goto LAB_033ea888;
      uVar7 = 0;
      do {
        fVar8 = (float)(*(NLKOFFFAFHM->klass->vtable)._19_ReadSingle.methodPtr)
                                 (NLKOFFFAFHM,(NLKOFFFAFHM->klass->vtable)._19_ReadSingle.method);
        if (JGHIJMJNJLE == (System_Single_array *)0x0) goto LAB_033ea888;
        if ((uint)JGHIJMJNJLE->max_length <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        JGHIJMJNJLE->m_Items[uVar7] = fVar8;
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    System_Collections_Generic_List<object>__set_Capacity
              ((System_Collections_Generic_List_object__o *)__this,value,
               Method_System_Collections_Generic_List<float[]>_set_Capacity__);
    if (0 < value) {
      KBAJGAHMEAF = 0;
      do {
        if ((TacticalTableHolder_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        item = TacticalTableHolder__IANJLAEPPBH<float>
                         (JGHIJMJNJLE,KBAJGAHMEAF,HFBFLHCIGNB,
                          TacticalTableHolder_TypeInfo->static_fields->JFDJCGGDGEC,
                          Method_KJFHBENFBBO_IANJLAEPPBH<float>__);
        lVar3 = Method_System_Collections_Generic_List<float[]>_Add__;
        pSVar6 = (__this->fields).super._items;
        (__this->fields).super._version = (__this->fields).super._version + 1;
        if (pSVar6 == (System_Single_array_array *)0x0) goto LAB_033ea888;
        uVar2 = (__this->fields).super._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields).super._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,&item->obj,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        value = value + -1;
        KBAJGAHMEAF = KBAJGAHMEAF + HFBFLHCIGNB;
      } while (value != 0);
    }
  }
  return;
}


// ===== public int IDKLPIGHDGI(string BCPAFBNLBDE)  [RVA 0x32EA204]
// ModelShiftTable$$IDKLPIGHDGI @ RVA 0x32EA204

int32_t ModelShiftTable__IDKLPIGHDGI
                  (ModelShiftTable_o *__this,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  InfoAnimation_o *pEVar5;
  int index;
  
  if ((DAT_04567634 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_18747/*"heel {0} not found in shift table for {1}"*/);
    DAT_04567634 = 1;
  }
  __this_00 = (__this->fields).KBPGCNCNJAG;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        if ((__this->fields).OAKOFJJIOFF == (InfoAnimation_o *)0x0) {
          return -1;
        }
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (args == (System_Object_array *)0x0) break;
        if ((BCPAFBNLBDE != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(BCPAFBNLBDE,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
LAB_033ea398:
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)BCPAFBNLBDE;
          thunk_FUN_01c20e04(args->m_Items,BCPAFBNLBDE);
          pEVar5 = (__this->fields).OAKOFJJIOFF;
          if (pEVar5 == (InfoAnimation_o *)0x0) break;
          pSVar2 = (pEVar5->fields).JIJLBFGKNJK;
          if ((pSVar2 != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0
             )) goto LAB_033ea398;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)pSVar2;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar2);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_18747/*"heel {0} not found in shift table for {1}"*/,args,(MethodInfo *)0x0);
            return -1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      bVar1 = System_String__op_Equality(BCPAFBNLBDE,pSVar2,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      __this_00 = (__this->fields).KBPGCNCNJAG;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<string> DJMMGHCKAOC()  [RVA 0x32EA890]
// ModelShiftTable$$DJMMGHCKAOC @ RVA 0x32EA890

System_Collections_Generic_List_string__o *
ModelShiftTable__DJMMGHCKAOC(ModelShiftTable_o *__this,MethodInfo *method)

{
  return (__this->fields).KBPGCNCNJAG;
}


// ===== public void ICNKLIDJEBG(InfoAnimation NLEBDPHNIDI, BinaryReader NLKOFFFAFHM)  [RVA 0x32EA898]
// ModelShiftTable$$ICNKLIDJEBG @ RVA 0x32EA898

void ModelShiftTable__ICNKLIDJEBG
               (ModelShiftTable_o *__this,InfoAnimation_o *NLEBDPHNIDI,
               System_IO_BinaryReader_o *NLKOFFFAFHM,MethodInfo *method)

{
  int32_t PGFAIJMMOHJ;
  
  (__this->fields).OAKOFJJIOFF = NLEBDPHNIDI;
  thunk_FUN_01c20e04();
  if (NLKOFFFAFHM != (System_IO_BinaryReader_o *)0x0) {
    PGFAIJMMOHJ = (*(NLKOFFFAFHM->klass->vtable)._16_ReadUInt32.methodPtr)
                            (NLKOFFFAFHM,(NLKOFFFAFHM->klass->vtable)._16_ReadUInt32.method);
    ModelShiftTable__ICNKLIDJEBG(__this,NLKOFFFAFHM,PGFAIJMMOHJ,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

