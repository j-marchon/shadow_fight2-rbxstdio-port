// TypeDefIndex 2656
// Namespace: Nekki.SF2.GUI
// public class TimerLabel : LabelAlias
// Fields:
//   public bool IsSeconds; // 0x1E9
//   public bool IsMinutes; // 0x1EA
//   public bool IsHours; // 0x1EB
//   public bool IsDays; // 0x1EC
//   public bool IsSecondsZero; // 0x1ED
//   public bool IsMinutesZero; // 0x1EE
//   public bool IsHoursZero; // 0x1EF
//   public bool IsDaysZero; // 0x1F0
//   public bool UseDaysDelimiter; // 0x1F1
//   public int SegmentsDate; // 0x1F4
//   public bool ShowZeroDays; // 0x1F8
//   public bool ShowZeroHours; // 0x1F9
//   public string Delimiter; // 0x200
//   private string FFNCOGLLCND; // 0x208
//   public string DaysString; // 0x210
//   private string ILHPJGKPFAP; // 0x218
//   public string HoursString; // 0x220
//   private string MJKJEFPDBCK; // 0x228
//   public string MinutesString; // 0x230
//   private string IGNOECHEJCJ; // 0x238
//   public string SecondsString; // 0x240
//   private string LIDEBLNOCAL; // 0x248
//   private long _currentTime; // 0x250

// ===== public long get_CurrentTime()  [RVA 0x33BA964]
// Nekki.SF2.GUI.TimerLabel$$get_CurrentTime @ RVA 0x33BA964

int64_t Nekki_SF2_GUI_TimerLabel__get_CurrentTime
                  (Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  return (int64_t)(__this->fields).SecondsString;
}


// ===== public string get_SecondsStringAlias()  [RVA 0x33BA96C]
// Nekki.SF2.GUI.TimerLabel$$get_SecondsStringAlias @ RVA 0x33BA96C

System_String_o *
Nekki_SF2_GUI_TimerLabel__get_SecondsStringAlias
          (Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  return (__this->fields).IGNOECHEJCJ;
}


// ===== public static string GetTimeString(long NFBEBOIDJLL, bool FCCHAOBFMLN = True, bool AMKBKDCAFLI = True, bool DDIEKBDNKOJ = True, bool MFIBLKCPALL = False, bool NBIPBICFIHP = False, bool KMPEMOELBMP = False, string FJDJFJNEEJI = ":", string PFCGLNFFKFG = "", bool LMOANJOPDGM = True, bool BMNAFCNAEII = True, bool LDGOECJACBJ = True, bool PMCFDOFEBAA = True, bool MCGOEEBPEIJ = True, string JONDDIMGADB = "", string FCLHIDDAHIJ = "", string EFIHACGLMNA = "", int BCDLHKNFNDA = 3)  [RVA 0x33BA974]
// Nekki.SF2.GUI.TimerLabel$$GetTimeString @ RVA 0x33BA974

System_String_o *
Nekki_SF2_GUI_TimerLabel__GetTimeString
          (int64_t NFBEBOIDJLL,bool FCCHAOBFMLN,bool AMKBKDCAFLI,bool DDIEKBDNKOJ,bool MFIBLKCPALL,
          bool NBIPBICFIHP,bool KMPEMOELBMP,System_String_o *FJDJFJNEEJI,
          System_String_o *PFCGLNFFKFG,bool LMOANJOPDGM,bool BMNAFCNAEII,bool LDGOECJACBJ,
          bool PMCFDOFEBAA,bool MCGOEEBPEIJ,System_String_o *JONDDIMGADB,
          System_String_o *FCLHIDDAHIJ,System_String_o *EFIHACGLMNA,int32_t BCDLHKNFNDA,
          MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *__this;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_Object_array *pSVar9;
  int value;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  int32_t local_6c;
  System_TimeSpan_Fields local_68;
  
  if ((DAT_04567d9f & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<object>_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_13820/*"TimerLabel::GetTimeString duplicates LocalizationManager::GetTimeString"*/);
    FUN_01bab630(&StringLiteral_2106/*":D2}"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_2107/*":D}"*/);
    DAT_04567d9f = 1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_13820/*"TimerLabel::GetTimeString duplicates LocalizationManager::GetTimeString"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_68._ticks = (int64_t)System_TimeSpan__FromSeconds((double)NFBEBOIDJLL,(MethodInfo *)0x0);
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<object>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<object>__ctor__);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (MFIBLKCPALL) {
    if (!NBIPBICFIHP) {
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar13 = System_TimeSpan__get_TotalDays((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
      if (dVar13 < 1.0) {
        uVar11 = 0;
        goto LAB_034bab4c;
      }
    }
    uVar11 = (uint)(0 < BCDLHKNFNDA);
  }
  else {
    uVar11 = 0;
  }
LAB_034bab4c:
  uVar12 = uVar11;
  if (DDIEKBDNKOJ) {
    if (!KMPEMOELBMP) {
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar13 = System_TimeSpan__get_TotalHours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
      if (dVar13 < 1.0) {
        bVar5 = false;
        bVar1 = true;
        goto LAB_034babcc;
      }
    }
    bVar1 = BCDLHKNFNDA <= (int)uVar11;
    if (!bVar1) {
      uVar12 = uVar11 + 1;
    }
    bVar5 = !bVar1;
  }
  else {
    bVar5 = false;
    bVar1 = true;
  }
LAB_034babcc:
  uVar3 = (uint)((int)uVar12 < BCDLHKNFNDA && AMKBKDCAFLI);
  bVar2 = (int)(uVar12 + uVar3) < BCDLHKNFNDA;
  if (uVar11 == 0) {
    iVar10 = 0;
    if (bVar1) goto LAB_034badb8;
LAB_034bac94:
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    lVar6 = Method_System_Collections_Generic_List<object>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
    pSVar9 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
    uVar11 = (__this->fields)._size;
    if (uVar11 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar11 + 1;
      pSVar9->m_Items[(int)uVar11] = pIVar7;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,pIVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
    System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
    value = iVar10 + 1;
    System_Text_StringBuilder__Append(__this_00,iVar10,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_2106/*":D2}"*/;
    if (!PMCFDOFEBAA) {
      puVar4 = &StringLiteral_2107/*":D}"*/;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,JONDDIMGADB,(MethodInfo *)0x0);
    iVar10 = value;
    if (((uVar3 != 0) || (bVar2 && FCCHAOBFMLN)) &&
       (System_Text_StringBuilder__Append(__this_00,FJDJFJNEEJI,(MethodInfo *)0x0), uVar3 != 0))
    goto LAB_034bae44;
LAB_034baee0:
    if (bVar2 && FCCHAOBFMLN) {
LAB_034baf74:
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_6c = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
      pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
      lVar6 = Method_System_Collections_Generic_List<object>_Add__;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
      pSVar9 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
      uVar11 = (__this->fields)._size;
      if (uVar11 < (uint)pSVar9->max_length) {
        (__this->fields)._size = uVar11 + 1;
        pSVar9->m_Items[(int)uVar11] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
      System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this_00,iVar10,(MethodInfo *)0x0);
      puVar4 = &StringLiteral_2106/*":D2}"*/;
      if (!BMNAFCNAEII) {
        puVar4 = &StringLiteral_2107/*":D}"*/;
      }
      System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this_00,EFIHACGLMNA,(MethodInfo *)0x0);
    }
    else if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
  }
  else {
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Days((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    lVar6 = Method_System_Collections_Generic_List<object>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
    pSVar9 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
    uVar11 = (__this->fields)._size;
    if (uVar11 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar11 + 1;
      pSVar9->m_Items[(int)uVar11] = pIVar7;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,pIVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
    System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,0,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_2106/*":D2}"*/;
    if (!MCGOEEBPEIJ) {
      puVar4 = &StringLiteral_2107/*":D}"*/;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,PFCGLNFFKFG,(MethodInfo *)0x0);
    if ((LMOANJOPDGM) && ((bVar5 || uVar3 != 0) || bVar2 && FCCHAOBFMLN)) {
      System_Text_StringBuilder__Append(__this_00,FJDJFJNEEJI,(MethodInfo *)0x0);
    }
    iVar10 = 1;
    if (!bVar1) goto LAB_034bac94;
LAB_034badb8:
    value = iVar10;
    if (uVar3 == 0) goto LAB_034baee0;
LAB_034bae44:
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    lVar6 = Method_System_Collections_Generic_List<object>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
    pSVar9 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
    uVar11 = (__this->fields)._size;
    if (uVar11 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar11 + 1;
      pSVar9->m_Items[(int)uVar11] = pIVar7;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,pIVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
    System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_2106/*":D2}"*/;
    if (!LDGOECJACBJ) {
      puVar4 = &StringLiteral_2107/*":D}"*/;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,FCLHIDDAHIJ,(MethodInfo *)0x0);
    if (bVar2 && FCCHAOBFMLN) {
      iVar10 = value + 1;
      System_Text_StringBuilder__Append(__this_00,FJDJFJNEEJI,(MethodInfo *)0x0);
      goto LAB_034baf74;
    }
  }
  pSVar8 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar9 = System_Collections_Generic_List<object>__ToArray
                       (__this,Method_System_Collections_Generic_List<object>_ToArray__);
    pSVar8 = System_String__Format(pSVar8,pSVar9,(MethodInfo *)0x0);
    return pSVar8;
  }
LAB_034bb0c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33BB0CC]
// Nekki.SF2.GUI.TimerLabel$$.ctor @ RVA 0x33BB0CC

void Nekki_SF2_GUI_TimerLabel___ctor(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  undefined3 uVar1;
  undefined4 uVar2;
  
  if ((DAT_04567da0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    DAT_04567da0 = 1;
  }
  *(undefined2 *)((long)&(__this->fields).super._Alias + 1) = 0x101;
  *(undefined1 *)((long)&(__this->fields).super._Alias + 3) = 1;
  *(undefined4 *)((long)&(__this->fields).super._Alias + 5) = 0x1010101;
  (__this->fields).super.field_0x1e1 = 1;
  *(undefined4 *)&(__this->fields).super.field_0x1e4 = 0xffffffff;
  uVar1 = StringLiteral_2086/*":"*/._1_3_;
  uVar2 = StringLiteral_2086/*":"*/._4_4_;
  (__this->fields).UseDaysDelimiter = (bool_conflict)(undefined1)StringLiteral_2086/*":"*/;
  *(undefined3 *)&(__this->fields).field_0x1f1 = uVar1;
  (__this->fields).SegmentsDate = uVar2;
  thunk_FUN_01c20e04(&(__this->fields).UseDaysDelimiter);
  Nekki_SF2_GUI_LabelAlias___ctor((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string get_DaysStringAlias()  [RVA 0x33BB150]
// Nekki.SF2.GUI.TimerLabel$$get_DaysStringAlias @ RVA 0x33BB150

System_String_o *
Nekki_SF2_GUI_TimerLabel__get_DaysStringAlias(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  return (__this->fields).FFNCOGLLCND;
}


// ===== public string get_HoursStringAlias()  [RVA 0x33BB158]
// Nekki.SF2.GUI.TimerLabel$$get_HoursStringAlias @ RVA 0x33BB158

System_String_o *
Nekki_SF2_GUI_TimerLabel__get_HoursStringAlias
          (Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  return (__this->fields).ILHPJGKPFAP;
}


// ===== public void set_DelimiterAlias(string CJNHFNHJHPE)  [RVA 0x33BB160]
// Nekki.SF2.GUI.TimerLabel$$set_DelimiterAlias @ RVA 0x33BB160

void Nekki_SF2_GUI_TimerLabel__set_DelimiterAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da1 = 1;
  }
  *(System_String_o **)&(__this->fields).ShowZeroDays = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).ShowZeroDays,CJNHFNHJHPE);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
  uVar5._0_1_ = (__this->fields).ShowZeroDays;
  uVar5._1_1_ = (__this->fields).ShowZeroHours;
  uVar5._2_6_ = *(undefined6 *)&(__this->fields).field_0x1fa;
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar3 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar4 = pIVar7->vtable + (*piVar9 + 0xc);
        goto LAB_034bb288;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bb288:
  uVar5 = (*pVVar4->methodPtr)(pIVar2,uVar5,uVar10,pVVar4->method);
  (__this->fields).UseDaysDelimiter = (bool_conflict)(char)uVar5;
  *(int3 *)&(__this->fields).field_0x1f1 = (int3)((ulong)uVar5 >> 8);
  (__this->fields).SegmentsDate = (int)((ulong)uVar5 >> 0x20);
  thunk_FUN_01c20e04(&(__this->fields).UseDaysDelimiter);
  return;
}


// ===== public string get_MinutesStringAlias()  [RVA 0x33BB2BC]
// Nekki.SF2.GUI.TimerLabel$$get_MinutesStringAlias @ RVA 0x33BB2BC

System_String_o *
Nekki_SF2_GUI_TimerLabel__get_MinutesStringAlias
          (Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  return (__this->fields).MJKJEFPDBCK;
}


// ===== public string get_DelimiterAlias()  [RVA 0x33BB2C4]
// Nekki.SF2.GUI.TimerLabel$$get_DelimiterAlias @ RVA 0x33BB2C4

System_String_o *
Nekki_SF2_GUI_TimerLabel__get_DelimiterAlias(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  return *(System_String_o **)&(__this->fields).ShowZeroDays;
}


// ===== private void CPMHIEJENLD()  [RVA 0x33BB2CC]
// Nekki.SF2.GUI.TimerLabel$$CPMHIEJENLD @ RVA 0x33BB2CC

void Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  pSVar1 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                     ((int64_t)(__this->fields).SecondsString,
                      *(bool *)((long)&(__this->fields).super._Alias + 1),
                      *(bool *)((long)&(__this->fields).super._Alias + 2),
                      *(bool *)((long)&(__this->fields).super._Alias + 3),
                      *(bool *)((long)&(__this->fields).super._Alias + 4),(__this->fields).IsSeconds
                      ,(__this->fields).IsMinutes,
                      *(System_String_o **)&(__this->fields).UseDaysDelimiter,
                      (__this->fields).Delimiter,(bool)(__this->fields).super.field_0x1e1,
                      *(bool *)((long)&(__this->fields).super._Alias + 5),
                      *(bool *)((long)&(__this->fields).super._Alias + 6),
                      *(bool *)((long)&(__this->fields).super._Alias + 7),
                      (__this->fields).super._ToUpperCase,(__this->fields).DaysString,
                      (__this->fields).HoursString,(__this->fields).MinutesString,
                      *(int32_t *)&(__this->fields).super.field_0x1e4,in_stack_ffffffffffffffe0);
                    /* WARNING: Could not recover jumptable at 0x034bb364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._75_set_text.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._75_set_text.method);
  return;
}


// ===== public void set_CurrentTime(long CJNHFNHJHPE)  [RVA 0x33BB368]
// Nekki.SF2.GUI.TimerLabel$$set_CurrentTime @ RVA 0x33BB368

void Nekki_SF2_GUI_TimerLabel__set_CurrentTime
               (Nekki_SF2_GUI_TimerLabel_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 034bb368 to 035bb5cf has its CatchHandler @ 034bb368
                       catch() { ... } // from try @ 034bb368 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb62c with catch @ 034bb368
                       catch() { ... } // from try @ 034bb6d4 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb704 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb81c with catch @ 034bb368
                       catch() { ... } // from try @ 034bb8ac with catch @ 034bb368
                       catch() { ... } // from try @ 034bb8c0 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb8fc with catch @ 034bb368 */
  if ((__this->fields).SecondsString == (System_String_o *)CJNHFNHJHPE) {
    return;
  }
  (__this->fields).SecondsString = (System_String_o *)CJNHFNHJHPE;
  Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(__this,(MethodInfo *)CJNHFNHJHPE);
  return;
}


// ===== public void set_MinutesStringAlias(string CJNHFNHJHPE)  [RVA 0x33BB380]
// Nekki.SF2.GUI.TimerLabel$$set_MinutesStringAlias @ RVA 0x33BB380

void Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da2 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da2 = 1;
  }
  (__this->fields).MJKJEFPDBCK = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).MJKJEFPDBCK,CJNHFNHJHPE);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
  pSVar9 = (__this->fields).MJKJEFPDBCK;
  lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar5 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar6 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar6->_2).rank;
  uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar4 = pIVar6->vtable + (*piVar8 + 0xc);
        goto LAB_034bb4a8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bb4a8:
  pSVar9 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,pSVar9,uVar10,pVVar4->method);
  (__this->fields).HoursString = pSVar9;
  thunk_FUN_01c20e04(&(__this->fields).HoursString);
  return;
}


// ===== protected override void Awake()  [RVA 0x33BB4DC]
// Nekki.SF2.GUI.TimerLabel$$Awake @ RVA 0x33BB4DC

void Nekki_SF2_GUI_TimerLabel__Awake(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  System_Action_Action__o **ppSVar1;
  System_IObservable_Unit__o *pSVar2;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  
  if ((DAT_04567da3 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_GAAKFAMKBPN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_NAHNHOFPIDO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_<>c_EJKHLPNIKMG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_<>c_ENCIMBGBOKN__);
    FUN_01bab630(&Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo);
    DAT_04567da3 = 1;
  }
  Nekki_SF2_GUI_LabelAlias__Awake((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  addHandler = Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_0;
  if (addHandler == (System_Action_Action__o *)0x0) {
    if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034bb5d0 to 035bb5d7 has its CatchHandler @ 034bb6f0 */
                    /* try { // try from 034bb5e4 to 035bb5ef has its CatchHandler @ 034bb6e4 */
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 034bb600 to 035bb60f has its CatchHandler @ 034bb6e0 */
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_0;
    *ppSVar1 = addHandler;
    thunk_FUN_01c20e04(ppSVar1,addHandler);
  }
                    /* try { // try from 034bb620 to 035bb62b has its CatchHandler @ 034bb6d8 */
  if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034bb62c to 035bb6bf has its CatchHandler @ 034bb368 */
  removeHandler = Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_1;
  if (removeHandler == (System_Action_Action__o *)0x0) {
    if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_1;
    *ppSVar1 = removeHandler;
    thunk_FUN_01c20e04(ppSVar1,removeHandler);
  }
                    /* try { // try from 034bb6c0 to 035bb6c3 has its CatchHandler @ 034bb6ec */
                    /* try { // try from 034bb6c8 to 035bb6cb has its CatchHandler @ 034bb6e8 */
                    /* try { // try from 034bb6d0 to 035bb6d3 has its CatchHandler @ 034bb6dc */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034bb6d4 to 035bb6ff has its CatchHandler @ 034bb368 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034bb620 with catch @ 034bb6d8 */
                    /* catch() { ... } // from try @ 034bb6d0 with catch @ 034bb6dc */
                    /* catch() { ... } // from try @ 034bb600 with catch @ 034bb6e0 */
                    /* catch() { ... } // from try @ 034bb5e4 with catch @ 034bb6e4 */
  pSVar2 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034bb6c8 with catch @ 034bb6e8 */
                    /* catch() { ... } // from try @ 034bb6c0 with catch @ 034bb6ec */
                    /* catch() { ... } // from try @ 034bb5d0 with catch @ 034bb6f0 */
  pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 034bb700 to 035bb703 has its CatchHandler @ 034bb89c */
                    /* try { // try from 034bb704 to 035bb777 has its CatchHandler @ 034bb368 */
  System_Action<Unit>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)pSVar2,pSVar3,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar2 = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar4,(MethodInfo *)0x0);
  pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)pSVar2,pSVar3,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
                    /* try { // try from 034bb778 to 035bb77f has its CatchHandler @ 034bb8e0 */
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== private void KLELDGNFOKF()  [RVA 0x33BB78C]
// Nekki.SF2.GUI.TimerLabel$$KLELDGNFOKF @ RVA 0x33BB78C

void Nekki_SF2_GUI_TimerLabel__KLELDGNFOKF(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  
                    /* try { // try from 034bb78c to 035bb793 has its CatchHandler @ 034bb8dc */
  bVar1 = System_String__IsNullOrEmpty((__this->fields).FFNCOGLLCND,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(__this,(__this->fields).FFNCOGLLCND,in_x2);
  }
                    /* try { // try from 034bb7b0 to 035bb7bf has its CatchHandler @ 034bb8c0 */
  bVar1 = System_String__IsNullOrEmpty((__this->fields).ILHPJGKPFAP,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 034bb7c4 to 035bb7eb has its CatchHandler @ 034bb8d8 */
    Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias(__this,(__this->fields).ILHPJGKPFAP,in_x2);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).MJKJEFPDBCK,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias(__this,(__this->fields).MJKJEFPDBCK,in_x2);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).IGNOECHEJCJ,(MethodInfo *)0x0);
                    /* try { // try from 034bb7f4 to 035bb7fb has its CatchHandler @ 034bb8c8 */
  if (!bVar1) {
                    /* try { // try from 034bb800 to 035bb80b has its CatchHandler @ 034bb8cc */
    Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias(__this,(__this->fields).IGNOECHEJCJ,in_x2);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(__this->fields).ShowZeroDays,(MethodInfo *)0x0);
                    /* try { // try from 034bb810 to 035bb81b has its CatchHandler @ 034bb8c4 */
  if (bVar1) {
    return;
  }
                    /* try { // try from 034bb81c to 035bb887 has its CatchHandler @ 034bb368 */
  Nekki_SF2_GUI_TimerLabel__set_DelimiterAlias
            (__this,*(System_String_o **)&(__this->fields).ShowZeroDays,in_x2);
  return;
}


// ===== public void set_SecondsStringAlias(string CJNHFNHJHPE)  [RVA 0x33BBAE4]
// Nekki.SF2.GUI.TimerLabel$$set_SecondsStringAlias @ RVA 0x33BBAE4

void Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da4 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da4 = 1;
  }
  (__this->fields).IGNOECHEJCJ = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).IGNOECHEJCJ,CJNHFNHJHPE);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
  pSVar9 = (__this->fields).IGNOECHEJCJ;
  lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar5 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar6 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar6->_2).rank;
  uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar4 = pIVar6->vtable + (*piVar8 + 0xc);
        goto LAB_034bbc0c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bbc0c:
  pSVar9 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,pSVar9,uVar10,pVVar4->method);
  (__this->fields).MinutesString = pSVar9;
  thunk_FUN_01c20e04(&(__this->fields).MinutesString);
  return;
}


// ===== private void NAHNHOFPIDO(Unit HOKBHLPPCAH)  [RVA 0x33BBC40]
// Nekki.SF2.GUI.TimerLabel$$NAHNHOFPIDO @ RVA 0x33BBC40

void Nekki_SF2_GUI_TimerLabel__NAHNHOFPIDO(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *param_2)

{
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).SecondsString;
  if (0 < (long)pSVar1) {
    (__this->fields).SecondsString = (System_String_o *)&pSVar1[-1].fields.field_0x7;
    Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(__this,param_2);
    return;
  }
  return;
}


// ===== public void set_HoursStringAlias(string CJNHFNHJHPE)  [RVA 0x33BB988]
// Nekki.SF2.GUI.TimerLabel$$set_HoursStringAlias @ RVA 0x33BB988

void Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da5 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da5 = 1;
  }
  (__this->fields).ILHPJGKPFAP = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).ILHPJGKPFAP,CJNHFNHJHPE);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
  pSVar9 = (__this->fields).ILHPJGKPFAP;
  lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar5 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar6 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar6->_2).rank;
  uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar4 = pIVar6->vtable + (*piVar8 + 0xc);
        goto LAB_034bbab0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bbab0:
  pSVar9 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,pSVar9,uVar10,pVVar4->method);
  (__this->fields).DaysString = pSVar9;
  thunk_FUN_01c20e04(&(__this->fields).DaysString);
  return;
}


// ===== public void set_DaysStringAlias(string CJNHFNHJHPE)  [RVA 0x33BB82C]
// Nekki.SF2.GUI.TimerLabel$$set_DaysStringAlias @ RVA 0x33BB82C

void Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da6 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da6 = 1;
  }
                    /* try { // try from 034bb888 to 035bb88b has its CatchHandler @ 034bb8d4 */
                    /* try { // try from 034bb88c to 035bb88f has its CatchHandler @ 034bb8d0 */
  (__this->fields).FFNCOGLLCND = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).FFNCOGLLCND,CJNHFNHJHPE);
                    /* catch() { ... } // from try @ 034bb700 with catch @ 034bb89c */
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
                    /* try { // try from 034bb8a4 to 035bb8ab has its CatchHandler @ 034bb948 */
  pSVar9 = (__this->fields).FFNCOGLLCND;
                    /* try { // try from 034bb8ac to 035bb8b7 has its CatchHandler @ 034bb368 */
  lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar5 == 0) {
                    /* try { // try from 034bb8b8 to 035bb8bf has its CatchHandler @ 034bb948 */
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
                    /* catch() { ... } // from try @ 034bb7b0 with catch @ 034bb8c0
                       try { // try from 034bb8c0 to 035bb8f7 has its CatchHandler @ 034bb368 */
  lVar5 = *(long *)(lVar5 + 0x10);
                    /* catch() { ... } // from try @ 034bb810 with catch @ 034bb8c4 */
                    /* catch() { ... } // from try @ 034bb7f4 with catch @ 034bb8c8 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 034bb800 with catch @ 034bb8cc */
    lVar5 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 034bb88c with catch @ 034bb8d0 */
                    /* catch() { ... } // from try @ 034bb888 with catch @ 034bb8d4 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 034bb7c4 with catch @ 034bb8d8 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034bb78c with catch @ 034bb8dc */
                    /* catch() { ... } // from try @ 034bb778 with catch @ 034bb8e0 */
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034bb8f8 to 035bb8fb has its CatchHandler @ 034bb924 */
                    /* try { // try from 034bb8fc to 035bb933 has its CatchHandler @ 034bb368 */
  pIVar6 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar6->_2).rank;
  uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 034bb8f8 with catch @ 034bb924 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* catch() { ... } // from try @ 034bb8a4 with catch @ 034bb948
                       catch() { ... } // from try @ 034bb8b8 with catch @ 034bb948
                       catch() { ... } // from try @ 034bb934 with catch @ 034bb948 */
        pVVar4 = pIVar6->vtable + (*piVar8 + 0xc);
        goto LAB_034bb954;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 034bb934 to 035bb947 has its CatchHandler @ 034bb948 */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bb954:
  pSVar9 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,pSVar9,uVar10,pVVar4->method);
  (__this->fields).Delimiter = pSVar9;
  thunk_FUN_01c20e04(&(__this->fields).Delimiter);
  return;
}


// ===== public void OnTimerTick()  [RVA 0x33BBC58]
// Nekki.SF2.GUI.TimerLabel$$OnTimerTick @ RVA 0x33BBC58

void Nekki_SF2_GUI_TimerLabel__OnTimerTick(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).SecondsString;
  if (0 < (long)pSVar1) {
    (__this->fields).SecondsString = (System_String_o *)&pSVar1[-1].fields.field_0x7;
    Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(__this,method);
    return;
  }
  return;
}


// ===== private void GAAKFAMKBPN(Unit HOKBHLPPCAH)  [RVA 0x33BBC70]
// Nekki.SF2.GUI.TimerLabel$$GAAKFAMKBPN @ RVA 0x33BBC70

void Nekki_SF2_GUI_TimerLabel__GAAKFAMKBPN
               (Nekki_SF2_GUI_TimerLabel_o *__this,undefined8 param_2,MethodInfo *param_3)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).FFNCOGLLCND,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(__this,(__this->fields).FFNCOGLLCND,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).ILHPJGKPFAP,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias(__this,(__this->fields).ILHPJGKPFAP,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).MJKJEFPDBCK,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias(__this,(__this->fields).MJKJEFPDBCK,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).IGNOECHEJCJ,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias(__this,(__this->fields).IGNOECHEJCJ,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(__this->fields).ShowZeroDays,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_TimerLabel__set_DelimiterAlias
            (__this,*(System_String_o **)&(__this->fields).ShowZeroDays,param_3);
  return;
}

