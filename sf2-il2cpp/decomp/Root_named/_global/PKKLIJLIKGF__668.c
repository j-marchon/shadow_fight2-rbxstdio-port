// TypeDefIndex 668
// Namespace: 
// public class PKKLIJLIKGF
// Fields:
//   private string DEKCPPOJFEH; // 0x10
//   private List<string> IIBDCLHFNCD; // 0x18
//   private List<KeyValuePair<string, string>> NAPHDEGHDNP; // 0x20
//   private XmlNode <OOKODJOMEKE>k__BackingField; // 0x28

// ===== public void .ctor(PKKLIJLIKGF IBKIPBJJCPG)  [RVA 0x30256AC]
// PKKLIJLIKGF$$.ctor @ RVA 0x30256AC

void PKKLIJLIKGF___ctor(PKKLIJLIKGF_o *__this,PKKLIJLIKGF_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar2;
  System_String_o *pSVar3;
  System_Action_T__o *pSVar4;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar5;
  PKKLIJLIKGF_Fields *pPVar6;
  System_Collections_Generic_List_string__o **ppSVar7;
  
  if ((DAT_04565c8c & 1) == 0) {
    FUN_01bab630(&System_Action<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_PKKLIJLIKGF_CJHLLKHEEHH__);
    FUN_01bab630(&Method_PKKLIJLIKGF_LCCHBPEFMJN__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c8c = 1;
  }
  pPVar6 = &__this->fields;
  pPVar6->DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pPVar6);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar7 = &(__this->fields).IIBDCLHFNCD;
  *ppSVar7 = pSVar1;
  thunk_FUN_01c20e04(ppSVar7,pSVar1);
  pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                             );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  ppSVar5 = &(__this->fields).NAPHDEGHDNP;
  *ppSVar5 = pSVar2;
  thunk_FUN_01c20e04(ppSVar5,pSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (PKKLIJLIKGF_o *)0x0) {
    (__this->fields)._OOKODJOMEKE_k__BackingField =
         (IBKIPBJJCPG->fields)._OOKODJOMEKE_k__BackingField;
    thunk_FUN_01c20e04();
    pSVar3 = System_String__Copy((IBKIPBJJCPG->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    (__this->fields).DEKCPPOJFEH = pSVar3;
    thunk_FUN_01c20e04(pPVar6,pSVar3);
    pSVar1 = (System_Collections_Generic_List_string__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar1,
               Method_System_Collections_Generic_List<string>__ctor__);
    (__this->fields).IIBDCLHFNCD = pSVar1;
    thunk_FUN_01c20e04(ppSVar7,pSVar1);
    pSVar1 = (IBKIPBJJCPG->fields).IIBDCLHFNCD;
    pSVar4 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar1,pSVar4,
                 Method_System_Collections_Generic_List<string>_ForEach__);
      pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                                 );
      System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
                ((System_Collections_Generic_List_T__o *)pSVar2,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
      (__this->fields).NAPHDEGHDNP = pSVar2;
      thunk_FUN_01c20e04(ppSVar5,pSVar2);
      pSVar2 = (IBKIPBJJCPG->fields).NAPHDEGHDNP;
      pSVar4 = (System_Action_T__o *)
               thunk_FUN_01bda818(System_Action<KeyValuePair<string,_string>>_TypeInfo);
      System_Action<KeyValuePair<object,_object>>___ctor();
      if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__ForEach
                  ((System_Collections_Generic_List_T__o *)pSVar2,pSVar4,
                   Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<string> KLLBMNMEPBF()  [RVA 0x3025928]
// PKKLIJLIKGF$$KLLBMNMEPBF @ RVA 0x3025928

System_Collections_Generic_List_string__o *
PKKLIJLIKGF__KLLBMNMEPBF(PKKLIJLIKGF_o *__this,MethodInfo *method)

{
  return (__this->fields).IIBDCLHFNCD;
}


// ===== public void JNPGCELEPGH()  [RVA 0x3025930]
// PKKLIJLIKGF$$JNPGCELEPGH @ RVA 0x3025930

void PKKLIJLIKGF__JNPGCELEPGH(PKKLIJLIKGF_o *__this,MethodInfo *method)

{
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o **ppSVar1;
  uint uVar2;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  NILLKLHKLHG_o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  PerkInfoItem_o *pHVar6;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this_02;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar7;
  MMFIDKMDADC_o *pMVar8;
  MethodInfo *extraout_x1;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar9;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar10;
  System_Collections_Generic_KeyValuePair_object__object__o __this_03;
  undefined1 local_a0 [8];
  System_String_o *pSStack_98;
  Il2CppObject *pIStack_90;
  System_String_o *pSStack_88;
  undefined1 local_80 [8];
  undefined8 uStack_78;
  Il2CppObject *local_70;
  System_String_o *pSStack_68;
  
  if ((DAT_04565c8d & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_get_Current__
                );
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    DAT_04565c8d = 1;
    method = extraout_x1;
  }
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_80 = (undefined1  [8])0x0;
  pSStack_68 = (System_String_o *)0x0;
  local_70 = (Il2CppObject *)0x0;
  __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo,method);
  NILLKLHKLHG___ctor(__this_00,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_01 != (FOKJBDHLIMG_o *)0x0) {
    pHVar6 = FOKJBDHLIMG__JMMDGEOBMOC(__this_01,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (pHVar6 != (PerkInfoItem_o *)0x0) {
      __this_02 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                                    );
      System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
                ((System_Collections_Generic_List_T__o *)__this_02,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
      ppSVar10 = &(__this->fields).NAPHDEGHDNP;
      if (*ppSVar10 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0)
      goto LAB_03125c64;
      System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                 (System_Collections_Generic_List_T__o *)*ppSVar10,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__
                );
      ppSVar1 = &(__this_00->fields)._KFMEPBBGDFG_k__BackingField;
      uStack_78 = pSStack_98;
      local_80 = local_a0;
      pSStack_68 = pSStack_88;
      local_70 = pIStack_90;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                           Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                          );
        pIVar4 = local_70;
        if (!bVar5) break;
        if (__this_00 == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        NILLKLHKLHG__HNIHOIAMDPC(__this_00,pSStack_68,(MethodInfo *)0x0);
        pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        *ppSVar1 = pSVar7;
        thunk_FUN_01c20e04(ppSVar1,pSVar7);
        pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        (__this_00->fields)._PGFJLBODEHE_k__BackingField = pSVar7;
        thunk_FUN_01c20e04(&__this_00->fields,pSVar7);
        pMVar8 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
        if (pMVar8 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        local_a0 = (undefined1  [8])0x0;
        pSStack_98 = (System_String_o *)0x0;
        __this_03.fields.value = pIVar4;
        __this_03.fields.key = (Il2CppObject *)local_a0;
        System_Collections_Generic_KeyValuePair<object,_object>___ctor
                  (__this_03,(Il2CppObject *)(pMVar8->fields).HPACPFLKHPK,
                   Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
        lVar3 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
        if (__this_02 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item.fields.value = (Il2CppObject *)pSStack_98;
        item.fields.key = (Il2CppObject *)local_a0;
        pSVar9 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pSVar9 == (System_Collections_Generic_KeyValuePair_string__string__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_02->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this_02->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2].fields.key = (System_String_o *)local_a0;
          pSVar9->m_Items[(int)uVar2].fields.value = pSStack_98;
          thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar2,0);
        }
        else {
          System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                    ((System_Collections_Generic_List_T__o *)__this_02,item,
                     *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
                );
      *ppSVar10 = __this_02;
      thunk_FUN_01c20e04(ppSVar10,__this_02);
    }
    return;
  }
LAB_03125c64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LCCHBPEFMJN(KeyValuePair<string, string> KEFILECBPMF)  [RVA 0x3025D00]
// PKKLIJLIKGF$$LCCHBPEFMJN @ RVA 0x3025D00

void PKKLIJLIKGF__LCCHBPEFMJN
               (PKKLIJLIKGF_o *__this,
               System_Collections_Generic_KeyValuePair_string__string__o KEFILECBPMF,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *key;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar4;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this_00;
  System_Collections_Generic_KeyValuePair_object__object__o __this_01;
  Il2CppObject local_40;
  
  if ((DAT_04565c8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
    DAT_04565c8e = 1;
  }
  pSVar3 = System_String__Copy(KEFILECBPMF.fields.key,(MethodInfo *)0x0);
  key = System_String__Copy(KEFILECBPMF.fields.value,(MethodInfo *)0x0);
  __this_00 = (__this->fields).NAPHDEGHDNP;
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (System_String_o *)0x0;
  __this_01.fields.value = (Il2CppObject *)pSVar3;
  __this_01.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_01,(Il2CppObject *)key,
             Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
  if (__this_00 != (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
    item.fields.value = local_40.monitor;
    item.fields.key = (Il2CppObject *)local_40.klass;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_string__string__array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
        pSVar4->m_Items[(int)uVar1].fields.value = local_40.monitor;
        thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_00,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<KeyValuePair<string, string>> PBCICEFGBJG()  [RVA 0x3025E24]
// PKKLIJLIKGF$$PBCICEFGBJG @ RVA 0x3025E24

System_Collections_Generic_List_KeyValuePair_string__string___o *
PKKLIJLIKGF__PBCICEFGBJG(PKKLIJLIKGF_o *__this,MethodInfo *method)

{
  return (__this->fields).NAPHDEGHDNP;
}


// ===== private void CJHLLKHEEHH(string KEFILECBPMF)  [RVA 0x3025E2C]
// PKKLIJLIKGF$$CJHLLKHEEHH @ RVA 0x3025E2C

void PKKLIJLIKGF__CJHLLKHEEHH(PKKLIJLIKGF_o *__this,System_String_o *KEFILECBPMF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_String_array *pSVar3;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04565c8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    DAT_04565c8f = 1;
  }
  __this_00 = (__this->fields).IIBDCLHFNCD;
  item = System_String__Copy(KEFILECBPMF,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04();
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LDHMKNOOPCI(XmlNode CJNHFNHJHPE)  [RVA 0x3025EE0]
// PKKLIJLIKGF$$LDHMKNOOPCI @ RVA 0x3025EE0

void PKKLIJLIKGF__LDHMKNOOPCI
               (PKKLIJLIKGF_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OOKODJOMEKE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(string LMPMHKIABOM)  [RVA 0x3025EE8]
// PKKLIJLIKGF$$.ctor @ RVA 0x3025EE8

void PKKLIJLIKGF___ctor(PKKLIJLIKGF_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this_01;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar2;
  PKKLIJLIKGF_Fields *pPVar3;
  
  if ((DAT_04565c90 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c90 = 1;
  }
  pPVar3 = &__this->fields;
  pPVar3->DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pPVar3);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).IIBDCLHFNCD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_01,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  ppSVar2 = &(__this->fields).NAPHDEGHDNP;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pPVar3->DEKCPPOJFEH = LMPMHKIABOM;
  thunk_FUN_01c20e04(pPVar3,LMPMHKIABOM);
  return;
}


// ===== public XmlNode GGFCPCGHPNH()  [RVA 0x3026008]
// PKKLIJLIKGF$$GGFCPCGHPNH @ RVA 0x3026008

System_Xml_XmlNode_o * PKKLIJLIKGF__GGFCPCGHPNH(PKKLIJLIKGF_o *__this,MethodInfo *method)

{
  return (__this->fields)._OOKODJOMEKE_k__BackingField;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3026010]
// PKKLIJLIKGF$$KCHJCGEMCGE @ RVA 0x3026010

System_String_o * PKKLIJLIKGF__KCHJCGEMCGE(PKKLIJLIKGF_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3026018]
// PKKLIJLIKGF$$.ctor @ RVA 0x3026018

/* WARNING: Removing unreachable block (ram,0x03126510) */

void PKKLIJLIKGF___ctor(PKKLIJLIKGF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *collection;
  long *plVar7;
  undefined8 *puVar8;
  Il2CppObject *pIVar9;
  MethodInfo_2639E28 *in_x4;
  long lVar10;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar11;
  ulong uVar12;
  int *piVar13;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar14;
  System_Xml_XmlNode_o **ppSVar15;
  System_Collections_Generic_List_string__o **ppSVar16;
  PKKLIJLIKGF_Fields *pPVar17;
  System_Collections_Generic_KeyValuePair_object__object__o __this_01;
  Il2CppObject local_70;
  
  if ((DAT_04565c91 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_8115/*"ItemType"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c91 = 1;
  }
  local_70.klass = (Il2CppClass *)0x0;
  local_70.monitor = (System_String_o *)0x0;
  pPVar17 = &__this->fields;
  pPVar17->DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pPVar17);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar16 = &(__this->fields).IIBDCLHFNCD;
  *ppSVar16 = __this_00;
  thunk_FUN_01c20e04(ppSVar16,__this_00);
  pSVar3 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                             );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar3,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  ppSVar14 = &(__this->fields).NAPHDEGHDNP;
  *ppSVar14 = pSVar3;
  thunk_FUN_01c20e04(ppSVar14,pSVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar15 = &(__this->fields)._OOKODJOMEKE_k__BackingField;
  *ppSVar15 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar15,AHDGNOJPPIB);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pPVar17->DEKCPPOJFEH = pSVar6;
    thunk_FUN_01c20e04(pPVar17,pSVar6);
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_8115/*"ItemType"*/,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        collection = System_String__Split(pSVar6,0x7c,0,(MethodInfo *)0x0);
        if (*ppSVar16 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03126508;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)*ppSVar16,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<string>_AddRange__);
      }
      plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                 (AHDGNOJPPIB,StringLiteral_11876/*"Set"*/,
                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0312631c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0312631c:
          uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar12 & 1) == 0) {
            plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
            if (plVar7 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_031264a8;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_03126490;
          }
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_0312637c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0312637c:
          pSVar5 = (System_Xml_XmlAttribute_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
          if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
             ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar5);
          }
          pIVar9 = (Il2CppObject *)
                   (*(pSVar5->klass->vtable)._8_get_Name.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._8_get_Name.method);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          __this_01.fields.value = pIVar9;
          __this_01.fields.key = &local_70;
          System_Collections_Generic_KeyValuePair<object,_object>___ctor
                    (__this_01,(Il2CppObject *)pSVar6,
                     Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
          lVar10 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
          pSVar3 = *ppSVar14;
          if (pSVar3 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item.fields.value = local_70.monitor;
          item.fields.key = (Il2CppObject *)local_70.klass;
          pSVar11 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pSVar11 == (System_Collections_Generic_KeyValuePair_string__string__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar11->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar11->m_Items[(int)uVar2].fields.key = (System_String_o *)local_70.klass;
            pSVar11->m_Items[(int)uVar2].fields.value = local_70.monitor;
            thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,0);
          }
          else {
            System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)pSVar3,item,
                       *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
LAB_03126508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03126490:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_031264c4;
    }
  }
LAB_031264a8:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_031264c4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


// ===== private bool BFJOBKFPMPF(string EBOHIPKPFDJ)  [RVA 0x30265E4]
// PKKLIJLIKGF$$BFJOBKFPMPF @ RVA 0x30265E4

bool PKKLIJLIKGF__BFJOBKFPMPF(PKKLIJLIKGF_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565c92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565c92 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IIBDCLHFNCD;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_031266a8;
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current,EBOHIPKPFDJ,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_031266a8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return bVar1 && iVar3 == 4;
}

