// TypeDefIndex 3416
// Namespace: 
// public class KJFHBENFBBO
// Fields:
//   private int COMHMGPAIHH; // 0x10
//   private int DEIHDDMJOFG; // 0x14
//   private int BLONJALILMO; // 0x18
//   private int MOALNGPLPIK; // 0x1C
//   private List<KJFHBENFBBO.KBBLCCJJCDK> AMICGDOJEOL; // 0x20
//   private int ENNIKHIELLN; // 0x28
//   private string GEFBEFOLNKO; // 0x30
//   private static int[] POPNFBLCLLO; // 0x0
//   public static float[] JFDJCGGDGEC; // 0x8
//   private static LLGIDMGDNPG[] NNBICIJIDNK; // 0x10
//   private static IHNJJHJKJCL[] KINFPCDMBII; // 0x18
//   private static PCNNBADGEGD[] FLOMHJNMHHB; // 0x20
//   private static LFBHPHJFCPO[] LJFIAIFFAAH; // 0x28

// ===== public void IELLPMCIHBD()  [RVA 0x35575BC]
// KJFHBENFBBO$$IELLPMCIHBD @ RVA 0x35575BC

void KJFHBENFBBO__IELLPMCIHBD(KJFHBENFBBO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *__this_00;
  System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MGNDHCBAPEN_T1__T2__o *__this_03;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *JGGJNLLANAE;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568b76 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_get_Item__
                );
    FUN_01bab630(&Method_MGNDHCBAPEN<LFBHPHJFCPO[],_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<LFBHPHJFCPO[],_string>_TypeInfo);
    DAT_04568b76 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AMICGDOJEOL;
  if (__this_00 == (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                      );
    pIVar5 = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                );
      return;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_80.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ECENNHNBAME__JAEKFDOJKGP
                          ((ECENNHNBAME_o *)local_80.fields._current[1].klass,(MethodInfo *)0x0);
    if (__this_01 ==
        (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)0x0) break;
    __this_02 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (__this->fields).ENNIKHIELLN,
                           Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_get_Item__
                          );
    pIVar5 = pIVar5[1].monitor;
    JGGJNLLANAE = (__this->fields).GEFBEFOLNKO;
    __this_03 = (MGNDHCBAPEN_T1__T2__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<LFBHPHJFCPO[],_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              (__this_03,pIVar5,(Il2CppObject *)JGGJNLLANAE,
               Method_MGNDHCBAPEN<LFBHPHJFCPO[],_string>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>_Add__;
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = (__this_02->fields)._items;
    (__this_02->fields)._version = (__this_02->fields)._version + 1;
    if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_02->fields)._size;
    if (uVar1 < (uint)pSVar4->max_length) {
      (__this_02->fields)._size = uVar1 + 1;
      pSVar4->m_Items[(int)uVar1] = (Il2CppObject *)__this_03;
      thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,__this_03);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_02,(Il2CppObject *)__this_03,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void LFEHAPCICEA(BinaryReader GJMMPLCCOAO, List<string> KJIFJFDCBOH)  [RVA 0x355783C]
// KJFHBENFBBO$$LFEHAPCICEA @ RVA 0x355783C

void KJFHBENFBBO__LFEHAPCICEA
               (System_IO_BinaryReader_o *GJMMPLCCOAO,
               System_Collections_Generic_List_string__o *KJIFJFDCBOH,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  System_Char_array *val;
  System_String_o *item;
  System_String_array *pSVar6;
  ulong uVar7;
  
  if ((DAT_04568b77 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    DAT_04568b77 = 1;
  }
  if (GJMMPLCCOAO != (System_IO_BinaryReader_o *)0x0) {
    sVar4 = (*(GJMMPLCCOAO->klass->vtable)._13_ReadInt16.methodPtr)
                      (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._13_ReadInt16.method);
    uVar2 = (uint)sVar4;
    lVar5 = (*(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.methodPtr)
                      (GJMMPLCCOAO,(ulong)uVar2,(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.method);
    if (0 < (int)uVar2) {
      if (lVar5 == 0) goto LAB_0365797c;
      uVar7 = 0;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        val = (System_Char_array *)
              (*(GJMMPLCCOAO->klass->vtable)._23_ReadChars.methodPtr)
                        (GJMMPLCCOAO,(ulong)*(byte *)(lVar5 + 0x20 + uVar7),
                         (GJMMPLCCOAO->klass->vtable)._23_ReadChars.method);
        item = System_String__CreateString((System_String_o *)0x0,val,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<string>_Add__;
        if (KJIFJFDCBOH == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0365797c;
        pSVar6 = (KJIFJFDCBOH->fields)._items;
        (KJIFJFDCBOH->fields)._version = (KJIFJFDCBOH->fields)._version + 1;
        if (pSVar6 == (System_String_array *)0x0) goto LAB_0365797c;
        uVar1 = (KJIFJFDCBOH->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (KJIFJFDCBOH->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KJIFJFDCBOH,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    return;
  }
LAB_0365797c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3557984]
// KJFHBENFBBO$$.ctor @ RVA 0x3557984

void KJFHBENFBBO___ctor(KJFHBENFBBO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static string IIADICPGOMI(BinaryReader GJMMPLCCOAO)  [RVA 0x355798C]
// KJFHBENFBBO$$IIADICPGOMI @ RVA 0x355798C

System_String_o * KJFHBENFBBO__IIADICPGOMI(System_IO_BinaryReader_o *GJMMPLCCOAO,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *str0;
  undefined1 auVar1 [16];
  ushort local_24 [2];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = GJMMPLCCOAO;
  if ((DAT_04568b78 & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    auVar1 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b78 = 1;
  }
  str0 = StringLiteral_1/*""*/;
  if (GJMMPLCCOAO != (System_IO_BinaryReader_o *)0x0) {
    local_24[0] = (*(GJMMPLCCOAO->klass->vtable)._12_ReadChar.methodPtr)
                            (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._12_ReadChar.method);
    while (local_24[0] != 0) {
      if ((char_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      str1 = System_Char__ToString((uint16_t)local_24,(MethodInfo *)0x0);
      str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      local_24[0] = (*(GJMMPLCCOAO->klass->vtable)._12_ReadChar.methodPtr)
                              (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._12_ReadChar.method);
    }
    return str0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}


// ===== private static void KBOKKKALJIN(BinaryReader GJMMPLCCOAO, List<ECENNHNBAME> ELAGKBMJCOD)  [RVA 0x3557A60]
// KJFHBENFBBO$$KBOKKKALJIN @ RVA 0x3557A60

void KJFHBENFBBO__KBOKKKALJIN
               (System_IO_BinaryReader_o *GJMMPLCCOAO,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  System_Char_array *val;
  System_String_o *KGLJICLJHEL;
  ECENNHNBAME_o *item;
  ECENNHNBAME_array *pEVar6;
  ulong uVar7;
  
  if ((DAT_04568b79 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_set_Capacity__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568b79 = 1;
  }
  if (GJMMPLCCOAO != (System_IO_BinaryReader_o *)0x0) {
    uVar4 = (*(GJMMPLCCOAO->klass->vtable)._14_ReadUInt16.methodPtr)
                      (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._14_ReadUInt16.method);
    if (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      value = (uint)uVar4;
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,value,
                 Method_System_Collections_Generic_List<ECENNHNBAME>_set_Capacity__);
      lVar5 = (*(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.methodPtr)
                        (GJMMPLCCOAO,(ulong)value,(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.method)
      ;
      if (uVar4 != 0) {
        if (lVar5 == 0) goto LAB_03657c70;
        uVar7 = 0;
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          val = (System_Char_array *)
                (*(GJMMPLCCOAO->klass->vtable)._23_ReadChars.methodPtr)
                          (GJMMPLCCOAO,(ulong)*(byte *)(lVar5 + 0x20 + uVar7),
                           (GJMMPLCCOAO->klass->vtable)._23_ReadChars.method);
          KGLJICLJHEL = System_String__CreateString((System_String_o *)0x0,val,(MethodInfo *)0x0);
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo);
          }
          if (DAT_04568c0e == '\0') {
            FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
            DAT_04568c0e = '\x01';
          }
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = OCMLPCKBHPN_TypeInfo->static_fields->KEMBBOLADAP;
          if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
          }
          item = LDHBHPILNMA__CCBEONOLBID(KGLJICLJHEL,bVar1 != false,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
          pEVar6 = (ELAGKBMJCOD->fields)._items;
          (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
          if (pEVar6 == (ECENNHNBAME_array *)0x0) goto LAB_03657c70;
          uVar2 = (ELAGKBMJCOD->fields)._size;
          if (uVar2 < (uint)pEVar6->max_length) {
            (ELAGKBMJCOD->fields)._size = uVar2 + 1;
            pEVar6->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
        } while (value != uVar7);
      }
      return;
    }
  }
LAB_03657c70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool OBECCOPBADO()  [RVA 0x3557C78]
// KJFHBENFBBO$$OBECCOPBADO @ RVA 0x3557C78

bool KJFHBENFBBO__OBECCOPBADO(KJFHBENFBBO_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b7a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5690/*"Empty tables detected!"*/);
    DAT_04568b7a = 1;
    method = extraout_x1;
  }
  if (((((__this->fields).COMHMGPAIHH == 0) || ((__this->fields).DEIHDDMJOFG == 0)) ||
      ((__this->fields).BLONJALILMO == 0)) || ((__this->fields).MOALNGPLPIK == 0)) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__Log(StringLiteral_5690/*"Empty tables detected!"*/,(MethodInfo *)0x0);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x3557D14]
// KJFHBENFBBO$$NDNPGAKJLHM @ RVA 0x3557D14

void KJFHBENFBBO__NDNPGAKJLHM(KJFHBENFBBO_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568b7b & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_Clear__);
    DAT_04568b7b = 1;
  }
  pSVar1 = (__this->fields).AMICGDOJEOL;
  if (pSVar1 != (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void BKCFPHNEONL(byte[] NLKOFFFAFHM, int MLHLNOPOCDG, string IELJFIKHNIE)  [RVA 0x3557D84]
// KJFHBENFBBO$$BKCFPHNEONL @ RVA 0x3557D84

/* WARNING: Removing unreachable block (ram,0x036580a0) */
/* WARNING: Removing unreachable block (ram,0x036580b0) */

void KJFHBENFBBO__BKCFPHNEONL
               (KJFHBENFBBO_o *__this,System_Byte_array *NLKOFFFAFHM,int32_t MLHLNOPOCDG,
               System_String_o *IELJFIKHNIE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  System_Collections_Generic_List_string__o *KJIFJFDCBOH;
  System_IO_MemoryStream_o *__this_00;
  System_IO_BinaryReader_o *__this_01;
  long *plVar3;
  long lVar4;
  long lVar5;
  System_String_o *message;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  System_IO_BinaryReader_c *pSVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04568b7c & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&StringLiteral_20240/*"pointer != buffer.end() for "*/);
    DAT_04568b7c = 1;
  }
  if (NLKOFFFAFHM == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)NLKOFFFAFHM->max_length) {
    ELAGKBMJCOD = (System_Collections_Generic_List_ECENNHNBAME__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
               Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    KJIFJFDCBOH = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)KJIFJFDCBOH,
               Method_System_Collections_Generic_List<string>__ctor__);
    __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(__this_00,NLKOFFFAFHM,(MethodInfo *)0x0);
    __this_01 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    System_IO_BinaryReader___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
    if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KJFHBENFBBO__KBOKKKALJIN(__this_01,ELAGKBMJCOD,method_00);
    KJFHBENFBBO__LFEHAPCICEA(__this_01,KJIFJFDCBOH,method_00);
    KJFHBENFBBO__JDIHDLBGDPP(__this,__this_01,ELAGKBMJCOD,KJIFJFDCBOH,MLHLNOPOCDG,IELJFIKHNIE,in_x6)
    ;
    if (__this_01 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(*(__this_01->klass->vtable)._5_get_BaseStream.methodPtr)
                               (__this_01,(__this_01->klass->vtable)._5_get_BaseStream.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
    plVar3 = (long *)(*(__this_01->klass->vtable)._5_get_BaseStream.methodPtr)
                               (__this_01,(__this_01->klass->vtable)._5_get_BaseStream.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar5 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
    if (lVar4 != lVar5) {
      message = System_String__Concat(StringLiteral_20240/*"pointer != buffer.end() for "*/,IELJFIKHNIE,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    pSVar7 = __this_01->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar6 = &(pSVar7->vtable)._0_Equals + *piVar10;
          goto LAB_0365800c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_0365800c:
    (*pVVar6->methodPtr)(__this_01,pVVar6->method);
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
      pSVar8 = __this_00->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
            goto LAB_03658070;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_03658070:
      (*pVVar6->methodPtr)(__this_00,pVVar6->method);
    }
  }
  return;
}


// ===== private void JDIHDLBGDPP(BinaryReader PHGLAFJIFJF, List<ECENNHNBAME> PDODIEJCIDA, List<string> LPHGLEDOOGI, int FKEDAGDLEPE, string NDEODCGNNJJ)  [RVA 0x3558228]
// KJFHBENFBBO$$JDIHDLBGDPP @ RVA 0x3558228

/* WARNING: Removing unreachable block (ram,0x03659768) */
/* WARNING: Removing unreachable block (ram,0x0365976c) */
/* WARNING: Removing unreachable block (ram,0x03659938) */
/* WARNING: Type propagation algorithm not settling */

void KJFHBENFBBO__JDIHDLBGDPP
               (KJFHBENFBBO_o *__this,System_IO_BinaryReader_o *PHGLAFJIFJF,
               System_Collections_Generic_List_ECENNHNBAME__o *PDODIEJCIDA,
               System_Collections_Generic_List_string__o *LPHGLEDOOGI,int32_t FKEDAGDLEPE,
               System_String_o *NDEODCGNNJJ,MethodInfo *method)

{
  void **ppvVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int32_t iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  System_String_o **ppSVar12;
  System_Object_array *pSVar13;
  LFBHPHJFCPO_o *__this_00;
  long lVar14;
  System_Object_array *JGHIJMJNJLE;
  PCNNBADGEGD_o *__this_01;
  System_Object_array *JGHIJMJNJLE_00;
  LLGIDMGDNPG_o *__this_02;
  System_Object_array *JGHIJMJNJLE_01;
  IHNJJHJKJCL_o *__this_03;
  System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *pSVar15;
  System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o **ppSVar16;
  KJFHBENFBBO_KBBLCCJJCDK_o *__this_04;
  ECENNHNBAME_o *pEVar17;
  System_Single_array *JGHIJMJNJLE_02;
  System_Int32_array *JGHIJMJNJLE_03;
  System_Collections_Generic_List_object__o *pSVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_o *pSVar20;
  System_Single_array *pSVar21;
  System_Int32_array *pSVar22;
  undefined8 uVar23;
  Il2CppObject *pIVar24;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  System_IO_BinaryReader_c *pSVar25;
  KJFHBENFBBO_KBBLCCJJCDK_array *pKVar26;
  System_Object_array *pSVar27;
  void *pvVar28;
  long lVar29;
  Il2CppObject **ppIVar30;
  uint uVar31;
  int KBAJGAHMEAF;
  ulong uVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  undefined8 *puVar36;
  uint uVar37;
  int local_154;
  int local_150;
  int iStack_14c;
  int local_12c;
  int32_t local_11c;
  int local_100;
  int local_d4;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03658234 to 0375823b has its CatchHandler @ 03658284 */
                    /* try { // try from 0365823c to 03758277 has its CatchHandler @ 0365819c */
  if ((DAT_04568b7d & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Resize<LLGIDMGDNPG>__);
                    /* try { // try from 03658278 to 0375827b has its CatchHandler @ 03658280 */
                    /* try { // try from 0365827c to 0375829b has its CatchHandler @ 0365819c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03658278 with catch @ 03658280
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03658234 with catch @ 03658284
                        */
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
                    /* try { // try from 0365829c to 0375829f has its CatchHandler @ 036582c0 */
                    /* try { // try from 036582a0 to 037582c7 has its CatchHandler @ 0365819c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                );
                    /* catch() { ... } // from try @ 0365829c with catch @ 036582c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
                    /* try { // try from 036582c8 to 037582cf has its CatchHandler @ 036582e4 */
                    /* try { // try from 036582d0 to 037582db has its CatchHandler @ 0365819c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_get_Current__
                );
                    /* try { // try from 036582dc to 037582e3 has its CatchHandler @ 036582e4 */
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036582c8 with catch @ 036582e4
                       catch(type#2 @ 00000000) { ... } // from try @ 036582dc with catch @ 036582e4
                        */
                    /* try { // try from 036582e8 to 03758413 has its CatchHandler @ 036582e8
                       catch() { ... } // from try @ 036582e8 with catch @ 036582e8
                       catch() { ... } // from try @ 03658434 with catch @ 036582e8
                       catch() { ... } // from try @ 03658480 with catch @ 036582e8
                       catch() { ... } // from try @ 036584b0 with catch @ 036582e8 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&IHNJJHJKJCL___TypeInfo);
    FUN_01bab630(&IHNJJHJKJCL_TypeInfo);
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&KJFHBENFBBO_KBBLCCJJCDK_TypeInfo);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<IHNJJHJKJCL>__);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<int>__);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<LFBHPHJFCPO>__);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<LLGIDMGDNPG>__);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<PCNNBADGEGD>__);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<float>__);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&LFBHPHJFCPO___TypeInfo);
    FUN_01bab630(&LFBHPHJFCPO_TypeInfo);
    FUN_01bab630(&LLGIDMGDNPG___TypeInfo);
    FUN_01bab630(&LLGIDMGDNPG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
                    /* try { // try from 03658414 to 0375841b has its CatchHandler @ 03658464 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
                    /* try { // try from 03658424 to 03758433 has its CatchHandler @ 03658460 */
    FUN_01bab630(&System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_TypeInfo);
                    /* try { // try from 03658434 to 0375847b has its CatchHandler @ 036582e8 */
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&PCNNBADGEGD___TypeInfo);
    FUN_01bab630(&PCNNBADGEGD_TypeInfo);
    FUN_01bab630(&float___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03658424 with catch @ 03658460
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03658414 with catch @ 03658464
                        */
    FUN_01bab630(&StringLiteral_20109/*"pFrames != _intervals.end()"*/);
    FUN_01bab630(&StringLiteral_20107/*"pAnimations != _animations.end()"*/);
                    /* try { // try from 0365847c to 0375847f has its CatchHandler @ 036584a0 */
                    /* try { // try from 03658480 to 037584a7 has its CatchHandler @ 036582e8 */
    FUN_01bab630(&StringLiteral_20106/*"pAnimIntervals != _animationsWithIntervals.end()"*/);
    FUN_01bab630(&StringLiteral_20118/*"pInterframes != _interframes.end()"*/);
    FUN_01bab630(&StringLiteral_2981/*"AnimationTablesForAnimation remove for {0}"*/);
                    /* catch() { ... } // from try @ 0365847c with catch @ 036584a0 */
    FUN_01bab630(&StringLiteral_20108/*"pDistances != _distances.end()"*/);
                    /* try { // try from 036584a8 to 037584af has its CatchHandler @ 036584c4 */
                    /* try { // try from 036584b0 to 037584bb has its CatchHandler @ 036582e8 */
    FUN_01bab630(&StringLiteral_20119/*"pTables != _tables.end()"*/);
                    /* try { // try from 036584bc to 037584c3 has its CatchHandler @ 036584c4 */
    FUN_01bab630(&StringLiteral_20110/*"pGroups != _groups.end()"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036584a8 with catch @ 036584c4
                       catch(type#2 @ 00000000) { ... } // from try @ 036584bc with catch @ 036584c4
                        */
    DAT_04568b7d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  ppSVar12 = &(__this->fields).GEFBEFOLNKO;
  *ppSVar12 = NDEODCGNNJJ;
  (__this->fields).ENNIKHIELLN = FKEDAGDLEPE;
  thunk_FUN_01c20e04(ppSVar12,NDEODCGNNJJ);
  if (PHGLAFJIFJF != (System_IO_BinaryReader_o *)0x0) {
    iVar6 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    iVar7 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    (__this->fields).COMHMGPAIHH = iVar7;
    pSVar13 = (System_Object_array *)FUN_01bab718(LFBHPHJFCPO___TypeInfo,iVar7);
    if (0 < (__this->fields).COMHMGPAIHH) {
      uVar32 = 0;
      ppIVar30 = pSVar13->m_Items;
      do {
        __this_00 = (LFBHPHJFCPO_o *)thunk_FUN_01bda818(LFBHPHJFCPO_TypeInfo);
        LFBHPHJFCPO___ctor(__this_00,(MethodInfo *)0x0);
        if (pSVar13 == (System_Object_array *)0x0) goto LAB_0365990c;
        if ((__this_00 != (LFBHPHJFCPO_o *)0x0) &&
           (lVar14 = thunk_FUN_01bda71c(__this_00,(((pSVar13->obj).klass)->_1).element_class),
           lVar14 == 0)) goto LAB_03659304;
        if ((uint)pSVar13->max_length <= uVar32) goto LAB_036592fc;
        *ppIVar30 = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(ppIVar30,__this_00);
        uVar32 = uVar32 + 1;
        ppIVar30 = ppIVar30 + 1;
      } while ((long)uVar32 < (long)(__this->fields).COMHMGPAIHH);
    }
    iVar7 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    (__this->fields).DEIHDDMJOFG = iVar7;
    JGHIJMJNJLE = (System_Object_array *)FUN_01bab718(PCNNBADGEGD___TypeInfo,iVar7);
    if (0 < (__this->fields).DEIHDDMJOFG) {
      uVar32 = 0;
      ppIVar30 = JGHIJMJNJLE->m_Items;
      do {
        __this_01 = (PCNNBADGEGD_o *)thunk_FUN_01bda818(PCNNBADGEGD_TypeInfo);
        PCNNBADGEGD___ctor(__this_01,(MethodInfo *)0x0);
        if (JGHIJMJNJLE == (System_Object_array *)0x0) goto LAB_0365990c;
        if ((__this_01 != (PCNNBADGEGD_o *)0x0) &&
           (lVar14 = thunk_FUN_01bda71c(__this_01,(((JGHIJMJNJLE->obj).klass)->_1).element_class),
           lVar14 == 0)) goto LAB_03659304;
        if ((uint)JGHIJMJNJLE->max_length <= uVar32) goto LAB_036592fc;
        *ppIVar30 = (Il2CppObject *)__this_01;
        thunk_FUN_01c20e04(ppIVar30,__this_01);
        uVar32 = uVar32 + 1;
        ppIVar30 = ppIVar30 + 1;
      } while ((long)uVar32 < (long)(__this->fields).DEIHDDMJOFG);
    }
    iVar7 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    (__this->fields).BLONJALILMO = iVar7;
    JGHIJMJNJLE_00 = (System_Object_array *)FUN_01bab718(LLGIDMGDNPG___TypeInfo,iVar7);
    if (0 < (__this->fields).BLONJALILMO) {
      uVar32 = 0;
      ppIVar30 = JGHIJMJNJLE_00->m_Items;
      do {
        __this_02 = (LLGIDMGDNPG_o *)thunk_FUN_01bda818(LLGIDMGDNPG_TypeInfo);
        LLGIDMGDNPG___ctor(__this_02,(MethodInfo *)0x0);
        if (JGHIJMJNJLE_00 == (System_Object_array *)0x0) goto LAB_0365990c;
        if ((__this_02 != (LLGIDMGDNPG_o *)0x0) &&
           (lVar14 = thunk_FUN_01bda71c(__this_02,(((JGHIJMJNJLE_00->obj).klass)->_1).element_class)
           , lVar14 == 0)) goto LAB_03659304;
        if ((uint)JGHIJMJNJLE_00->max_length <= uVar32) goto LAB_036592fc;
        *ppIVar30 = (Il2CppObject *)__this_02;
        thunk_FUN_01c20e04(ppIVar30,__this_02);
        uVar32 = uVar32 + 1;
        ppIVar30 = ppIVar30 + 1;
      } while ((long)uVar32 < (long)(__this->fields).BLONJALILMO);
    }
    uVar8 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    JGHIJMJNJLE_01 = (System_Object_array *)FUN_01bab718(IHNJJHJKJCL___TypeInfo,uVar8);
    if (0 < (int)uVar8) {
      uVar32 = 0;
      ppIVar30 = JGHIJMJNJLE_01->m_Items;
      do {
        __this_03 = (IHNJJHJKJCL_o *)thunk_FUN_01bda818(IHNJJHJKJCL_TypeInfo);
        IHNJJHJKJCL___ctor(__this_03,(MethodInfo *)0x0);
        if (JGHIJMJNJLE_01 == (System_Object_array *)0x0) goto LAB_0365990c;
        if ((__this_03 != (IHNJJHJKJCL_o *)0x0) &&
           (lVar14 = thunk_FUN_01bda71c(__this_03,(((JGHIJMJNJLE_01->obj).klass)->_1).element_class)
           , lVar14 == 0)) {
LAB_03659304:
          uVar23 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar23,0);
        }
        if ((uint)JGHIJMJNJLE_01->max_length <= uVar32) goto LAB_036592fc;
        *ppIVar30 = (Il2CppObject *)__this_03;
        thunk_FUN_01c20e04(ppIVar30,__this_03);
        uVar32 = uVar32 + 1;
        ppIVar30 = ppIVar30 + 1;
      } while (uVar8 != uVar32);
    }
    iVar7 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    (__this->fields).MOALNGPLPIK = iVar7;
    uVar9 = (*(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.methodPtr)
                      (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._16_ReadUInt32.method);
    pSVar15 = (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar15,iVar6,
               Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>__ctor__);
    ppSVar16 = &(__this->fields).AMICGDOJEOL;
    *ppSVar16 = pSVar15;
    thunk_FUN_01c20e04(ppSVar16,pSVar15);
    pSVar25 = PHGLAFJIFJF->klass;
    if (0 < iVar6) {
      do {
        uVar10 = (*(pSVar25->vtable)._14_ReadUInt16.methodPtr)
                           (PHGLAFJIFJF,(pSVar25->vtable)._14_ReadUInt16.method);
        if (PDODIEJCIDA == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) goto LAB_0365990c;
        if ((int)(uVar10 & 0xffff) < (PDODIEJCIDA->fields)._size) {
          __this_04 = (KJFHBENFBBO_KBBLCCJJCDK_o *)
                      thunk_FUN_01bda818(KJFHBENFBBO_KBBLCCJJCDK_TypeInfo);
          System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
          pEVar17 = (ECENNHNBAME_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)PDODIEJCIDA,
                               uVar10 & 0xffff,
                               Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
          if (__this_04 == (KJFHBENFBBO_KBBLCCJJCDK_o *)0x0) goto LAB_0365990c;
          (__this_04->fields).BNGDONJEHMH = pEVar17;
          thunk_FUN_01c20e04();
        }
        else {
          __this_04 = (KJFHBENFBBO_KBBLCCJJCDK_o *)0x0;
        }
        lVar14 = Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_Add__;
        pSVar15 = *ppSVar16;
        if (pSVar15 == (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0)
        goto LAB_0365990c;
        pKVar26 = (pSVar15->fields)._items;
        (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
        if (pKVar26 == (KJFHBENFBBO_KBBLCCJJCDK_array *)0x0) goto LAB_0365990c;
        uVar10 = (pSVar15->fields)._size;
        if (uVar10 < (uint)pKVar26->max_length) {
          (pSVar15->fields)._size = uVar10 + 1;
          pKVar26->m_Items[(int)uVar10] = __this_04;
          thunk_FUN_01c20e04(pKVar26->m_Items + (int)uVar10,__this_04);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar15,(Il2CppObject *)__this_04,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        pSVar25 = PHGLAFJIFJF->klass;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    sVar3 = (*(pSVar25->vtable)._13_ReadInt16.methodPtr)
                      (PHGLAFJIFJF,(pSVar25->vtable)._13_ReadInt16.method);
    JGHIJMJNJLE_02 =
         (System_Single_array *)FUN_01bab718(float___TypeInfo,(__this->fields).MOALNGPLPIK);
    if (0 < (__this->fields).MOALNGPLPIK) {
      if (sVar3 == 0) {
        sVar3 = 1;
      }
      uVar32 = 0;
      do {
        sVar4 = (*(PHGLAFJIFJF->klass->vtable)._13_ReadInt16.methodPtr)
                          (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._13_ReadInt16.method);
        if (JGHIJMJNJLE_02 == (System_Single_array *)0x0) goto LAB_0365990c;
        if ((uint)JGHIJMJNJLE_02->max_length <= uVar32) goto LAB_036592fc;
        JGHIJMJNJLE_02->m_Items[uVar32] = (float)((int)sVar4 * (int)sVar3);
        uVar32 = uVar32 + 1;
      } while ((long)uVar32 < (long)(__this->fields).MOALNGPLPIK);
    }
    JGHIJMJNJLE_03 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,(ulong)uVar9);
    if (0 < (int)uVar9) {
      uVar32 = 0;
      do {
        iVar7 = (*(PHGLAFJIFJF->klass->vtable)._15_ReadInt32.methodPtr)
                          (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._15_ReadInt32.method);
        if (JGHIJMJNJLE_03 == (System_Int32_array *)0x0) goto LAB_0365990c;
        if ((uint)JGHIJMJNJLE_03->max_length <= uVar32) {
LAB_036592fc:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        JGHIJMJNJLE_03->m_Items[uVar32] = iVar7;
        uVar32 = uVar32 + 1;
      } while (uVar9 != uVar32);
    }
    pSVar18 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (pSVar18,uVar8,Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    if ((int)uVar8 < 1) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      uVar9 = 0;
      do {
        uVar10 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                           (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
        if ((PDODIEJCIDA == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)PDODIEJCIDA,
                                 uVar10 & 0xffff,
                                 Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__),
           lVar14 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__,
           pSVar18 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0365990c;
        pSVar27 = (pSVar18->fields)._items;
        (pSVar18->fields)._version = (pSVar18->fields)._version + 1;
        if (pSVar27 == (System_Object_array *)0x0) goto LAB_0365990c;
        uVar10 = (pSVar18->fields)._size;
        if (uVar10 < (uint)pSVar27->max_length) {
          (pSVar18->fields)._size = uVar10 + 1;
          pSVar27->m_Items[(int)uVar10] = pIVar19;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar18,pIVar19,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        pIVar19 = System_Collections_Generic_List<object>__get_Item
                            (pSVar18,uVar9,
                             Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        uVar9 = uVar9 + 1;
        if (pIVar19 == (Il2CppObject *)0x0) {
          iVar6 = iVar6 + 1;
        }
      } while (uVar8 != uVar9);
    }
    __this_05 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_05,iVar6,Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    if (0 < iVar6) {
      do {
        pEVar17 = (ECENNHNBAME_o *)thunk_FUN_01bda818(ECENNHNBAME_TypeInfo);
        ECENNHNBAME___ctor(pEVar17,(MethodInfo *)0x0);
        lVar14 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
        if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0365990c;
        pSVar27 = (__this_05->fields)._items;
        (__this_05->fields)._version = (__this_05->fields)._version + 1;
        if (pSVar27 == (System_Object_array *)0x0) goto LAB_0365990c;
        uVar8 = (__this_05->fields)._size;
        if (uVar8 < (uint)pSVar27->max_length) {
          (__this_05->fields)._size = uVar8 + 1;
          pSVar27->m_Items[(int)uVar8] = (Il2CppObject *)pEVar17;
          thunk_FUN_01c20e04(pSVar27->m_Items + (int)uVar8,pEVar17);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_05,(Il2CppObject *)pEVar17,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*ppSVar16 != (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)*ppSVar16,
                 Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__);
      local_d4 = 0;
      KBAJGAHMEAF = 0;
      iVar6 = 0;
      local_150 = 0;
      iStack_14c = 0;
      local_154 = 0;
      local_11c = 0;
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                               ), pIVar19 = local_80.fields._current, bVar2) {
        uVar8 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                          (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
        if (pIVar19 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar24 = pIVar19 + 1;
        if (pIVar24->klass == (Il2CppClass *)0x0) {
          pEVar17 = (ECENNHNBAME_o *)thunk_FUN_01bda818(ECENNHNBAME_TypeInfo);
          ECENNHNBAME___ctor(pEVar17,(MethodInfo *)0x0);
          pIVar24->klass = (Il2CppClass *)pEVar17;
          thunk_FUN_01c20e04(pIVar24,pEVar17);
          lVar14 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
          if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar24 = (Il2CppObject *)pIVar24->klass;
          pSVar27 = (__this_05->fields)._items;
          (__this_05->fields)._version = (__this_05->fields)._version + 1;
          if (pSVar27 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar9 = (__this_05->fields)._size;
          if (uVar9 < (uint)pSVar27->max_length) {
            (__this_05->fields)._size = uVar9 + 1;
            pSVar27->m_Items[(int)uVar9] = pIVar24;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_05,pIVar24,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar27 = KJFHBENFBBO__IANJLAEPPBH<object>
                            (pSVar13,local_11c,uVar8 & 0xffff,
                             (System_Object_array *)KJFHBENFBBO_TypeInfo->static_fields->LJFIAIFFAAH
                             ,Method_KJFHBENFBBO_IANJLAEPPBH<LFBHPHJFCPO>__);
        ppvVar1 = &pIVar19[1].monitor;
        *ppvVar1 = pSVar27;
        thunk_FUN_01c20e04(ppvVar1);
        pvVar28 = *ppvVar1;
        local_11c = local_11c + (uVar8 & 0xffff);
        if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar32 = *(ulong *)((long)pvVar28 + 0x18);
        if (0 < (int)uVar32) {
          local_100 = local_150;
          uVar8 = 0;
          local_12c = local_154;
          do {
            if ((uint)uVar32 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            lVar14 = *(long *)((long)pvVar28 + (long)(int)uVar8 * 8 + 0x20);
            uVar9 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                              (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
            if (LPHGLEDOOGI == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar19 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)LPHGLEDOOGI,
                                 uVar9 & 0xffff,
                                 Method_System_Collections_Generic_List<string>_get_Item__);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            *(Il2CppObject **)(lVar14 + 0x10) = pIVar19;
            thunk_FUN_01c20e04();
            uVar9 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                              (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
            if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar27 = KJFHBENFBBO__IANJLAEPPBH<object>
                                (JGHIJMJNJLE,local_12c,uVar9 & 0xffff,
                                 (System_Object_array *)
                                 KJFHBENFBBO_TypeInfo->static_fields->FLOMHJNMHHB,
                                 Method_KJFHBENFBBO_IANJLAEPPBH<PCNNBADGEGD>__);
            plVar34 = (long *)(lVar14 + 0x18);
            *plVar34 = (long)pSVar27;
            thunk_FUN_01c20e04(plVar34);
            lVar14 = *plVar34;
            local_154 = local_12c + (uVar9 & 0xffff);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar9 = *(uint *)(lVar14 + 0x18);
            if (0 < (int)uVar9) {
              uVar10 = 0;
              method_00 = extraout_x1;
              do {
                if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                lVar29 = *(long *)(lVar14 + (long)(int)uVar10 * 8 + 0x20);
                if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  method_00 = extraout_x1_00;
                }
                pSVar20 = KJFHBENFBBO__IIADICPGOMI(PHGLAFJIFJF,method_00);
                if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                *(System_String_o **)(lVar29 + 0x18) = pSVar20;
                thunk_FUN_01c20e04();
                uVar5 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                                  (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
                if (uVar5 == 0) {
                  System_Array__Resize<object>
                            ((System_Object_array **)(lVar29 + 0x10),0,
                             Method_System_Array_Resize<LLGIDMGDNPG>__);
                  *(undefined4 *)(lVar29 + 0x20) = 0;
                  method_00 = extraout_x1_06;
                }
                else {
                  if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar27 = KJFHBENFBBO__IANJLAEPPBH<object>
                                      (JGHIJMJNJLE_00,local_100,(uint)uVar5,
                                       (System_Object_array *)
                                       KJFHBENFBBO_TypeInfo->static_fields->NNBICIJIDNK,
                                       Method_KJFHBENFBBO_IANJLAEPPBH<LLGIDMGDNPG>__);
                  *(System_Object_array **)(lVar29 + 0x10) = pSVar27;
                  thunk_FUN_01c20e04();
                  local_100 = local_100 + (uint)uVar5;
                  sVar3 = (*(PHGLAFJIFJF->klass->vtable)._13_ReadInt16.methodPtr)
                                    (PHGLAFJIFJF,(PHGLAFJIFJF->klass->vtable)._13_ReadInt16.method);
                  lVar33 = *(long *)(lVar29 + 0x10);
                  *(int *)(lVar29 + 0x20) = (int)sVar3;
                  if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar9 = *(uint *)(lVar33 + 0x18);
                  method_00 = extraout_x1_01;
                  if (0 < (int)uVar9) {
                    uVar31 = 0;
                    do {
                      if (uVar9 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8d0();
                      }
                      lVar29 = *(long *)(lVar33 + (long)(int)uVar31 * 8 + 0x20);
                      uVar5 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                                        (PHGLAFJIFJF,
                                         (PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
                      if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pSVar27 = KJFHBENFBBO__IANJLAEPPBH<object>
                                          (JGHIJMJNJLE_01,iVar6,(uint)uVar5,
                                           (System_Object_array *)
                                           KJFHBENFBBO_TypeInfo->static_fields->KINFPCDMBII,
                                           Method_KJFHBENFBBO_IANJLAEPPBH<IHNJJHJKJCL>__);
                      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      plVar34 = (long *)(lVar29 + 0x10);
                      *plVar34 = (long)pSVar27;
                      thunk_FUN_01c20e04(plVar34);
                      local_d4 = local_d4 + (uint)uVar5;
                      method_00 = extraout_x1_02;
                      if (uVar5 != 0) {
                        lVar29 = *plVar34;
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        uVar9 = *(uint *)(lVar29 + 0x18);
                        if (0 < (int)uVar9) {
                          uVar37 = 0;
                          do {
                            if (uVar9 <= uVar37) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8d0();
                            }
                            if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            lVar35 = *(long *)(lVar29 + (long)(int)uVar37 * 8 + 0x20);
                            pIVar19 = System_Collections_Generic_List<object>__get_Item
                                                (pSVar18,iVar6 + uVar37,
                                                 Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__
                                                );
                            if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            puVar36 = (undefined8 *)(lVar35 + 0x10);
                            *puVar36 = pIVar19;
                            thunk_FUN_01c20e04(puVar36);
                            uVar9 = *(uint *)(lVar29 + 0x18);
                            uVar37 = uVar37 + 1;
                          } while ((int)uVar37 < (int)uVar9);
                          iVar6 = iVar6 + uVar37;
                          method_00 = extraout_x1_03;
                        }
                        lVar29 = *plVar34;
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        uVar9 = *(uint *)(lVar29 + 0x18);
                        if (0 < (int)uVar9) {
                          uVar37 = 0;
                          do {
                            if (uVar9 <= uVar37) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8d0();
                            }
                            lVar35 = *(long *)(lVar29 + (long)(int)uVar37 * 8 + 0x20);
                            uVar11 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                                               (PHGLAFJIFJF,
                                                (PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
                            if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            pSVar21 = KJFHBENFBBO__IANJLAEPPBH<float>
                                                (JGHIJMJNJLE_02,iStack_14c,uVar11 & 0xffff,
                                                 KJFHBENFBBO_TypeInfo->static_fields->JFDJCGGDGEC,
                                                 Method_KJFHBENFBBO_IANJLAEPPBH<float>__);
                            if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            puVar36 = (undefined8 *)(lVar35 + 0x18);
                            *puVar36 = pSVar21;
                            thunk_FUN_01c20e04(puVar36);
                            uVar9 = *(uint *)(lVar29 + 0x18);
                            uVar37 = uVar37 + 1;
                            iStack_14c = iStack_14c + (uVar11 & 0xffff);
                            method_00 = extraout_x1_04;
                          } while ((int)uVar37 < (int)uVar9);
                        }
                        lVar29 = *plVar34;
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        uVar9 = *(uint *)(lVar29 + 0x18);
                        if (0 < (int)uVar9) {
                          uVar37 = 0;
                          do {
                            if (uVar9 <= uVar37) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8d0();
                            }
                            lVar35 = *(long *)(lVar29 + (long)(int)uVar37 * 8 + 0x20);
                            uVar11 = (*(PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.methodPtr)
                                               (PHGLAFJIFJF,
                                                (PHGLAFJIFJF->klass->vtable)._14_ReadUInt16.method);
                            if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            pSVar22 = KJFHBENFBBO__IANJLAEPPBH<int>
                                                (JGHIJMJNJLE_03,KBAJGAHMEAF,uVar11 & 0xffff,
                                                 KJFHBENFBBO_TypeInfo->static_fields->POPNFBLCLLO,
                                                 Method_KJFHBENFBBO_IANJLAEPPBH<int>__);
                            if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            puVar36 = (undefined8 *)(lVar35 + 0x20);
                            *puVar36 = pSVar22;
                            thunk_FUN_01c20e04(puVar36);
                            uVar9 = *(uint *)(lVar29 + 0x18);
                            uVar37 = uVar37 + 1;
                            KBAJGAHMEAF = KBAJGAHMEAF + (uVar11 & 0xffff);
                            method_00 = extraout_x1_05;
                          } while ((int)uVar37 < (int)uVar9);
                        }
                      }
                      uVar9 = *(uint *)(lVar33 + 0x18);
                      uVar31 = uVar31 + 1;
                    } while ((int)uVar31 < (int)uVar9);
                  }
                }
                uVar9 = *(uint *)(lVar14 + 0x18);
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)uVar9);
            }
            uVar8 = uVar8 + 1;
            uVar32 = (ulong)*(uint *)((long)pvVar28 + 0x18);
            local_12c = local_154;
          } while ((int)uVar8 < (int)*(uint *)((long)pvVar28 + 0x18));
          local_150 = local_100;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                );
      if (local_11c != (__this->fields).COMHMGPAIHH) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_20110/*"pGroups != _groups.end()"*/,(MethodInfo *)0x0);
      }
      if (local_154 != (__this->fields).DEIHDDMJOFG) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_20119/*"pTables != _tables.end()"*/,(MethodInfo *)0x0);
      }
      if (local_150 != (__this->fields).BLONJALILMO) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_20109/*"pFrames != _intervals.end()"*/,(MethodInfo *)0x0);
      }
      if (iStack_14c != (__this->fields).MOALNGPLPIK) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_20108/*"pDistances != _distances.end()"*/,(MethodInfo *)0x0);
      }
      if (pSVar18 != (System_Collections_Generic_List_object__o *)0x0) {
        if (iVar6 != (pSVar18->fields)._size) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_20107/*"pAnimations != _animations.end()"*/,(MethodInfo *)0x0);
        }
        if (JGHIJMJNJLE_03 != (System_Int32_array *)0x0) {
          if (KBAJGAHMEAF != (int)JGHIJMJNJLE_03->max_length) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_20118/*"pInterframes != _interframes.end()"*/,(MethodInfo *)0x0);
          }
          if (JGHIJMJNJLE_01 != (System_Object_array *)0x0) {
            if (local_d4 != (int)JGHIJMJNJLE_01->max_length) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_20106/*"pAnimIntervals != _animationsWithIntervals.end()"*/,(MethodInfo *)0x0);
            }
            pSVar18 = (System_Collections_Generic_List_object__o *)
                      thunk_FUN_01bda818(
                                        System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_TypeInfo
                                        );
            System_Collections_Generic_List<object>___ctor
                      (pSVar18,
                       Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>__ctor__);
            if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_b8,__this_05,
                         Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
              local_a0.fields._index = local_b8.fields._index;
              local_a0.fields._version = local_b8.fields._version;
              local_a0.fields._list = local_b8.fields._list;
              local_a0.fields._current = local_b8.fields._current;
              while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_a0,
                                        Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                       ), pIVar19 = local_a0.fields._current, bVar2) {
                if (*ppSVar16 == (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_b8,(System_Collections_Generic_List_object__o *)*ppSVar16,
                           Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__
                          );
                local_80.fields._index = local_b8.fields._index;
                local_80.fields._version = local_b8.fields._version;
                local_80.fields._list = local_b8.fields._list;
                local_80.fields._current = local_b8.fields._current;
                do {
                  bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (&local_80,
                                     Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                                    );
                  lVar14 = Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_Add__;
                  if (!bVar2) goto LAB_03659740;
                  if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                } while ((Il2CppObject *)local_80.fields._current[1].klass != pIVar19);
                if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar13 = (pSVar18->fields)._items;
                (pSVar18->fields)._version = (pSVar18->fields)._version + 1;
                if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar8 = (pSVar18->fields)._size;
                if (uVar8 < (uint)pSVar13->max_length) {
                  (pSVar18->fields)._size = uVar8 + 1;
                  pSVar13->m_Items[(int)uVar8] = local_80.fields._current;
                  thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar8,local_80.fields._current);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar18,local_80.fields._current,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
LAB_03659740:
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                          );
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
              if (pSVar18 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_b8,pSVar18,
                           Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__
                          );
                local_80.fields._index = local_b8.fields._index;
                local_80.fields._version = local_b8.fields._version;
                local_80.fields._list = local_b8.fields._list;
                local_80.fields._current = local_b8.fields._current;
                while( true ) {
                  bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (&local_80,
                                     Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                                    );
                  pIVar19 = local_80.fields._current;
                  if (!bVar2) {
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                              );
                    return;
                  }
                  if (*ppSVar16 == (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0
                     ) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  System_Collections_Generic_List<object>__Remove
                            ((System_Collections_Generic_List_object__o *)*ppSVar16,
                             local_80.fields._current,
                             Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_Remove__
                            );
                  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pIVar24 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                      (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                  if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  if (pIVar24[9].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pvVar28 = ((pIVar24[9].klass)->_1).this_arg.data;
                  if (pvVar28 == (void *)0x0) break;
                  if (*(char *)((long)pvVar28 + 0x10) != '\0') {
                    if (pIVar19 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    lVar14 = (long)pIVar19[1].klass;
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar20 = System_String__Format
                                        (StringLiteral_2981/*"AnimationTablesForAnimation remove for {0}"*/,*(Il2CppObject **)(lVar14 + 0x68),
                                         (MethodInfo *)0x0);
                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            }
          }
        }
      }
    }
  }
LAB_0365990c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3559AA8]
// KJFHBENFBBO$$.cctor @ RVA 0x3559AA8

void KJFHBENFBBO___cctor(MethodInfo *method)

{
  System_Int32_array *pSVar1;
  System_Single_array *pSVar2;
  LLGIDMGDNPG_array *pLVar3;
  IHNJJHJKJCL_array *pIVar4;
  PCNNBADGEGD_array *pPVar5;
  LFBHPHJFCPO_array *pLVar6;
  System_Single_array **ppSVar7;
  LLGIDMGDNPG_array **ppLVar8;
  IHNJJHJKJCL_array **ppIVar9;
  PCNNBADGEGD_array **ppPVar10;
  LFBHPHJFCPO_array **ppLVar11;
  
  if ((DAT_04568b7e & 1) == 0) {
    FUN_01bab630(&IHNJJHJKJCL___TypeInfo);
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&LFBHPHJFCPO___TypeInfo);
    FUN_01bab630(&LLGIDMGDNPG___TypeInfo);
    FUN_01bab630(&PCNNBADGEGD___TypeInfo);
    FUN_01bab630(&float___TypeInfo);
    DAT_04568b7e = 1;
  }
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,0);
  KJFHBENFBBO_TypeInfo->static_fields->POPNFBLCLLO = pSVar1;
  thunk_FUN_01c20e04(KJFHBENFBBO_TypeInfo->static_fields,pSVar1);
  pSVar2 = (System_Single_array *)FUN_01bab718(float___TypeInfo,0);
  ppSVar7 = &KJFHBENFBBO_TypeInfo->static_fields->JFDJCGGDGEC;
  *ppSVar7 = pSVar2;
  thunk_FUN_01c20e04(ppSVar7,pSVar2);
  pLVar3 = (LLGIDMGDNPG_array *)FUN_01bab718(LLGIDMGDNPG___TypeInfo,0);
  ppLVar8 = &KJFHBENFBBO_TypeInfo->static_fields->NNBICIJIDNK;
  *ppLVar8 = pLVar3;
  thunk_FUN_01c20e04(ppLVar8,pLVar3);
  pIVar4 = (IHNJJHJKJCL_array *)FUN_01bab718(IHNJJHJKJCL___TypeInfo,0);
  ppIVar9 = &KJFHBENFBBO_TypeInfo->static_fields->KINFPCDMBII;
  *ppIVar9 = pIVar4;
  thunk_FUN_01c20e04(ppIVar9,pIVar4);
  pPVar5 = (PCNNBADGEGD_array *)FUN_01bab718(PCNNBADGEGD___TypeInfo,0);
  ppPVar10 = &KJFHBENFBBO_TypeInfo->static_fields->FLOMHJNMHHB;
  *ppPVar10 = pPVar5;
  thunk_FUN_01c20e04(ppPVar10,pPVar5);
  pLVar6 = (LFBHPHJFCPO_array *)FUN_01bab718(LFBHPHJFCPO___TypeInfo,0);
  ppLVar11 = &KJFHBENFBBO_TypeInfo->static_fields->LJFIAIFFAAH;
  *ppLVar11 = pLVar6;
  thunk_FUN_01c20e04(ppLVar11,pLVar6);
  return;
}

