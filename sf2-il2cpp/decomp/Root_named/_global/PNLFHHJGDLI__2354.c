// TypeDefIndex 2354
// Namespace: 
// public static class PNLFHHJGDLI
// Fields:
//   private static int EEFDLAHNJHL; // 0x0
//   private static int CPOAGJAKIDL; // 0x4
//   private static int PLGCMDGLNEL; // 0x8
//   private static string NOGIEJFCDNM; // 0x10
//   private static string FHAAJJAKNEJ; // 0x18
//   private static string JBHIKFIKHHG; // 0x20
//   private static string CAFEPKICHPK; // 0x28
//   private static float EHPFFCGFFOO; // 0x30
//   private static float AGBNCFPOLOE; // 0x34
//   private static bool MJGOIJNGHKE; // 0x38
//   private static bool GBBBAEHFPLH; // 0x39
//   private static bool MGFLMNJLJLK; // 0x3A
//   private static bool <AJNAEHPIEAJ>k__BackingField; // 0x3B
//   private static List<KeyValuePair<string, uint>> CPHHBNFBJGP; // 0x40
//   private static List<KeyValuePair<string, uint>> CMDACPPJJEF; // 0x48
//   public static uint BLMPLPPHAGO; // 0x50
//   private static string <PFPBHKJDPJG>k__BackingField; // 0x58

// ===== private static void JCMBFGCBBAK(string CJNHFNHJHPE)  [RVA 0x3324DEC]
// PNLFHHJGDLI$$JCMBFGCBBAK @ RVA 0x3324DEC

void PNLFHHJGDLI__JCMBFGCBBAK(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456786b & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786b = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  return;
}


// ===== public static bool MHIOBGPHINH()  [RVA 0x3324E4C]
// PNLFHHJGDLI$$MHIOBGPHINH @ RVA 0x3324E4C

bool PNLFHHJGDLI__MHIOBGPHINH(MethodInfo *method)

{
  if ((DAT_0456786c & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786c = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->MJGOIJNGHKE;
}


// ===== public static void DHPLNPMCBCA(List<string> NFIPEKECAFG)  [RVA 0x3324EA4]
// PNLFHHJGDLI$$DHPLNPMCBCA @ RVA 0x3324EA4

void PNLFHHJGDLI__DHPLNPMCBCA
               (System_Collections_Generic_List_string__o *NFIPEKECAFG,MethodInfo *method)

{
  Il2CppObject *BNCJPLDMJMH;
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = NFIPEKECAFG;
  if ((DAT_0456786d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    auVar2 = FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786d = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (NFIPEKECAFG != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)NFIPEKECAFG,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          BNCJPLDMJMH = local_48.fields._current, bVar1) {
      method_00 = extraout_x1;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      PNLFHHJGDLI__PPMOLPPCNFC((System_String_o *)BNCJPLDMJMH,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static void JOHLHNEIMAC(bool CJNHFNHJHPE)  [RVA 0x33250DC]
// PNLFHHJGDLI$$JOHLHNEIMAC @ RVA 0x33250DC

void PNLFHHJGDLI__JOHLHNEIMAC(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_0456786e & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786e = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  PNLFHHJGDLI_TypeInfo->static_fields->MJGOIJNGHKE = CJNHFNHJHPE;
  PNLFHHJGDLI__NEKJIEEEPFO(CJNHFNHJHPE,method);
  PNLFHHJGDLI__FDOGCCOEHPL(CJNHFNHJHPE,method_00);
  return;
}


// ===== public static bool FPPAOOIPKEO()  [RVA 0x332526C]
// PNLFHHJGDLI$$FPPAOOIPKEO @ RVA 0x332526C

bool PNLFHHJGDLI__FPPAOOIPKEO(MethodInfo *method)

{
  int32_t BJMMLGEBJDK;
  bool bVar1;
  
  if ((DAT_0456786f & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786f = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  bVar1 = Nekki_Audio_AudioManager__IsPlaying(BJMMLGEBJDK,(MethodInfo *)0x0);
  return bVar1;
}


// ===== private static void EOHAEHCEKDG(string AAIHDEKMIJG, uint OGPGLGPMEPD)  [RVA 0x33252F4]
// PNLFHHJGDLI$$EOHAEHCEKDG @ RVA 0x33252F4

void PNLFHHJGDLI__EOHAEHCEKDG(System_String_o *AAIHDEKMIJG,uint32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__uint__o item;
  long lVar2;
  MethodInfo_263A6EC *in_x4;
  System_Collections_Generic_KeyValuePair_string__uint__array *pSVar3;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar4;
  System_Collections_Generic_KeyValuePair_object__uint__o SVar5;
  Il2CppObject local_40;
  
  if ((DAT_04567870 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_get_Item__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567870 = 1;
  }
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  SVar5.fields._8_8_ = AAIHDEKMIJG;
  SVar5.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_uint>___ctor
            (SVar5,(Il2CppObject *)(ulong)OGPGLGPMEPD,
             (uint32_t)Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__,in_x4);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
  if (pSVar4 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    if ((long)(pSVar4->fields)._size == (ulong)PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO) {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar4 = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
        if (pSVar4 == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0)
        goto LAB_034254b4;
      }
      SVar5 = System_Collections_Generic_List<KeyValuePair<object,_uint>>__get_Item
                        ((System_Collections_Generic_List_T__o *)pSVar4,0,
                         Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_get_Item__
                        );
      System_Collections_Generic_List<KeyValuePair<object,_uint>>__Remove
                ((System_Collections_Generic_List_T__o *)pSVar4,SVar5,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Add__;
    pSVar4 = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
    if (pSVar4 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
      item.fields._8_8_ = local_40.monitor;
      item.fields.key = (Il2CppObject *)local_40.klass;
      pSVar3 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pSVar3 != (System_Collections_Generic_KeyValuePair_string__uint__array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
          *(void **)&pSVar3->m_Items[(int)uVar1].fields.value = local_40.monitor;
          thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,0);
        }
        else {
          System_Collections_Generic_List<KeyValuePair<object,_uint>>__AddWithResize
                    ((System_Collections_Generic_List_T__o *)pSVar4,item,
                     *(MethodInfo_2672960 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
LAB_034254b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PMDMCNDHNKF(string FHIBEDMHPHL, string LLJBBFNJMFB)  [RVA 0x33254B8]
// PNLFHHJGDLI$$PMDMCNDHNKF @ RVA 0x33254B8

void PNLFHHJGDLI__PMDMCNDHNKF
               (System_String_o *FHIBEDMHPHL,System_String_o *LLJBBFNJMFB,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)LLJBBFNJMFB;
  if ((DAT_04567871 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567871 = 1;
    method_00 = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  PNLFHHJGDLI__ICJJLOKMFAL(FHIBEDMHPHL,method_00);
  PNLFHHJGDLI__OINCNNMIDEB(LLJBBFNJMFB,method_01);
  return;
}


// ===== public static string HEEALALHAOB()  [RVA 0x3325600]
// PNLFHHJGDLI$$HEEALALHAOB @ RVA 0x3325600

System_String_o * PNLFHHJGDLI__HEEALALHAOB(MethodInfo *method)

{
  if ((DAT_04567872 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567872 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK;
}


// ===== private static void MJMLKEHNHEB(string AAIHDEKMIJG, uint OGPGLGPMEPD)  [RVA 0x3325658]
// PNLFHHJGDLI$$MJMLKEHNHEB @ RVA 0x3325658

void PNLFHHJGDLI__MJMLKEHNHEB(System_String_o *AAIHDEKMIJG,uint32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__uint__o item;
  long lVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *__this;
  MethodInfo_263A6EC *in_x4;
  System_Collections_Generic_KeyValuePair_string__uint__array *pSVar3;
  System_Collections_Generic_KeyValuePair_object__uint__o __this_00;
  Il2CppObject local_40;
  
  if ((DAT_04567873 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Add__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567873 = 1;
  }
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  __this_00.fields._8_8_ = AAIHDEKMIJG;
  __this_00.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_uint>___ctor
            (__this_00,(Il2CppObject *)(ulong)OGPGLGPMEPD,
             (uint32_t)Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__,in_x4);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Add__;
  __this = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (__this != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    item.fields._8_8_ = local_40.monitor;
    item.fields.key = (Il2CppObject *)local_40.klass;
    pSVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar3 != (System_Collections_Generic_KeyValuePair_string__uint__array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
        *(void **)&pSVar3->m_Items[(int)uVar1].fields.value = local_40.monitor;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_uint>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this,item,
                   *(MethodInfo_2672960 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void ODFHMBHFNJB(string HHMEIAPHDCI, bool LPDDIIOAIOO = True)  [RVA 0x3325770]
// PNLFHHJGDLI$$ODFHMBHFNJB @ RVA 0x3325770

void PNLFHHJGDLI__ODFHMBHFNJB(System_String_o *HHMEIAPHDCI,bool LPDDIIOAIOO,MethodInfo *method)

{
  bool bVar1;
  PNLFHHJGDLI_c *method_00;
  System_String_o *pSVar2;
  UnityEngine_AudioClip_o *NCALFHMFKLE;
  System_Object_array *args;
  long lVar3;
  System_String_o **ppSVar4;
  undefined8 uVar5;
  MethodInfo *in_x4;
  System_String_o *str0;
  
  if ((DAT_04567874 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9260/*"Music: "{0}" doesn't exist"*/);
    FUN_01bab630(&StringLiteral_19980/*"ogg"*/);
    DAT_04567874 = 1;
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)method_00);
  if (HHMEIAPHDCI == (System_String_o *)0x0) goto LAB_03425a50;
  str0 = PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ;
  pSVar2 = System_String__Substring
                     (HHMEIAPHDCI,(HHMEIAPHDCI->fields)._stringLength + -3,3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19980/*"ogg"*/,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03425888:
    pSVar2 = System_String__Concat(str0,HHMEIAPHDCI,(MethodInfo *)0x0);
  }
  else {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (SF2Paths_TypeInfo->static_fields->ACGDPPPMKBM != false) goto LAB_03425888;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_String__Concat
                       (str0,HHMEIAPHDCI,PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK,
                        (MethodInfo *)0x0);
  }
  NCALFHMFKLE = CMEBCBKGFFL__GEIPHOGLKAG(pSVar2,(MethodInfo *)0x0);
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  Nekki_Audio_AudioManager__AddAudio(NCALFHMFKLE,HHMEIAPHDCI,1.0,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__MEHGLNCEAAG
            (PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL,HHMEIAPHDCI,LPDDIIOAIOO,
             PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK,1.0,1.0,in_x4);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)NCALFHMFKLE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045678de == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678de = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar4 = &PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
    *ppSVar4 = HHMEIAPHDCI;
    thunk_FUN_01c20e04(ppSVar4,HHMEIAPHDCI);
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items,pSVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9260/*"Music: "{0}" doesn't exist"*/,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03425a50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NLKIBPNJDJL()  [RVA 0x3325CC4]
// PNLFHHJGDLI$$NLKIBPNJDJL @ RVA 0x3325CC4

void PNLFHHJGDLI__NLKIBPNJDJL(MethodInfo *method)

{
  int NKENMPPEILF;
  
  if ((DAT_04567875 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567875 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NKENMPPEILF = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL <= NKENMPPEILF) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Audio_AudioManager__Pause(true,NKENMPPEILF,(MethodInfo *)0x0);
    NKENMPPEILF = NKENMPPEILF + 1;
  }
  return;
}


// ===== public static void IMFBLHDOHFL(float CJNHFNHJHPE)  [RVA 0x3325D7C]
// PNLFHHJGDLI$$IMFBLHDOHFL @ RVA 0x3325D7C

/* WARNING: Removing unreachable block (ram,0x03425dbc) */

void PNLFHHJGDLI__IMFBLHDOHFL(float CJNHFNHJHPE,MethodInfo *method)

{
  PNLFHHJGDLI_c *method_00;
  
  if ((DAT_04567876 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567876 = 1;
  }
  if (CJNHFNHJHPE < 0.0) {
    CJNHFNHJHPE = 0.0;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  PNLFHHJGDLI_TypeInfo->static_fields->EHPFFCGFFOO = CJNHFNHJHPE;
  PNLFHHJGDLI__GIEMFDDIIFF(CJNHFNHJHPE,(MethodInfo *)method_00);
  return;
}


// ===== public static AudioClip GEIPHOGLKAG(string BNCJPLDMJMH)  [RVA 0x3325EAC]
// PNLFHHJGDLI$$GEIPHOGLKAG @ RVA 0x3325EAC

UnityEngine_AudioClip_o * PNLFHHJGDLI__GEIPHOGLKAG(System_String_o *BNCJPLDMJMH,MethodInfo *method)

{
  System_String_o *str0;
  UnityEngine_AudioClip_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04567877 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567877 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045678df == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045678df = '\x01';
    method = extraout_x1_01;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  str0 = System_String__Concat
                   (PNLFHHJGDLI_TypeInfo->static_fields->NOGIEJFCDNM,BNCJPLDMJMH,(MethodInfo *)0x0);
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo);
  }
  if (SF2Paths_TypeInfo->static_fields->ACGDPPPMKBM == false) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045678e0 == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678e0 = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_String__Concat(str0,PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_AudioClip_o *)
           FUN_03f93a18((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished);
  return pUVar1;
}


// ===== public static void NOGDGGCICFM(string IMPCOPLFIFP, string GMOONKDAEEK)  [RVA 0x3326070]
// PNLFHHJGDLI$$NOGDGGCICFM @ RVA 0x3326070

void PNLFHHJGDLI__NOGDGGCICFM
               (System_String_o *IMPCOPLFIFP,System_String_o *GMOONKDAEEK,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)GMOONKDAEEK;
  if ((DAT_04567878 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567878 = 1;
    method_00 = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  PNLFHHJGDLI__OAJGDIIIPPO(IMPCOPLFIFP,method_00);
  PNLFHHJGDLI__FMFOLKCKFKN(GMOONKDAEEK,method_01);
  return;
}


// ===== private static void OAJGDIIIPPO(string CJNHFNHJHPE)  [RVA 0x33260D8]
// PNLFHHJGDLI$$OAJGDIIIPPO @ RVA 0x33260D8

void PNLFHHJGDLI__OAJGDIIIPPO(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567879 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567879 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  PNLFHHJGDLI__NAGFLIBNEFO(&PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG,method_00);
  return;
}


// ===== public static void EAKDFHBCLHC()  [RVA 0x33197F0]
// PNLFHHJGDLI$$EAKDFHBCLHC @ RVA 0x33197F0

void PNLFHHJGDLI__EAKDFHBCLHC(MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  
  if ((DAT_0456787a & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787a = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  bVar2 = Nekki_Audio_AudioManager__IsPlaying(iVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
    }
    Nekki_Audio_AudioManager__Pause(true,iVar1,(MethodInfo *)0x0);
    if (DAT_045678e1 == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678e1 = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField = true;
  }
  return;
}


// ===== public static float DDLOFHKBLKO()  [RVA 0x3326244]
// PNLFHHJGDLI$$DDLOFHKBLKO @ RVA 0x3326244

float PNLFHHJGDLI__DDLOFHKBLKO(MethodInfo *method)

{
  if ((DAT_0456787b & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787b = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->AGBNCFPOLOE;
}


// ===== public static void NEKJIEEEPFO(bool CJNHFNHJHPE)  [RVA 0x3325148]
// PNLFHHJGDLI$$NEKJIEEEPFO @ RVA 0x3325148

void PNLFHHJGDLI__NEKJIEEEPFO(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  PNLFHHJGDLI_StaticFields *pPVar1;
  
  if ((DAT_0456787c & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787c = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  if (pPVar1->GBBBAEHFPLH == CJNHFNHJHPE) {
    return;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
    method = extraout_x1_01;
  }
  pPVar1->GBBBAEHFPLH = CJNHFNHJHPE;
  PNLFHHJGDLI__HNLKJHFIJIN(CJNHFNHJHPE,method);
  return;
}


// ===== public static void GJBPODCHLNP(float CJNHFNHJHPE)  [RVA 0x3326340]
// PNLFHHJGDLI$$GJBPODCHLNP @ RVA 0x3326340

/* WARNING: Removing unreachable block (ram,0x034263a4) */

void PNLFHHJGDLI__GJBPODCHLNP(float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x2;
  PNLFHHJGDLI_StaticFields *pPVar1;
  float fVar2;
  
  if ((DAT_0456787d & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787d = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  fVar2 = CJNHFNHJHPE;
  if (CJNHFNHJHPE < 0.0) {
    fVar2 = 0.0;
  }
  pPVar1->AGBNCFPOLOE = fVar2;
  PNLFHHJGDLI__LOGILMBEJCI(pPVar1->EEFDLAHNJHL,CJNHFNHJHPE,pPVar1->MGFLMNJLJLK,in_x2);
  return;
}


// ===== private static void HNLKJHFIJIN(bool MLNDMELNGIK)  [RVA 0x332629C]
// PNLFHHJGDLI$$HNLKJHFIJIN @ RVA 0x332629C

void PNLFHHJGDLI__HNLKJHFIJIN(bool MLNDMELNGIK,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  int NKENMPPEILF;
  
  if ((DAT_0456787e & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787e = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  NKENMPPEILF = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL <= NKENMPPEILF) break;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__KKHMJPANHCI(NKENMPPEILF,MLNDMELNGIK,in_x2);
    NKENMPPEILF = NKENMPPEILF + 1;
  }
  return;
}


// ===== public static void OECHILBBMLF()  [RVA 0x3319900]
// PNLFHHJGDLI$$OECHILBBMLF @ RVA 0x3319900

void PNLFHHJGDLI__OECHILBBMLF(MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  
  if ((DAT_0456787f & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787f = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  bVar2 = Nekki_Audio_AudioManager__IsPlaying(iVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
    }
    Nekki_Audio_AudioManager__Pause(false,iVar1,(MethodInfo *)0x0);
    if (DAT_045678e1 == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678e1 = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField = false;
  }
  return;
}


// ===== private static void ADEMCPBEKPK(bool CJNHFNHJHPE)  [RVA 0x33264E0]
// PNLFHHJGDLI$$ADEMCPBEKPK @ RVA 0x33264E0

void PNLFHHJGDLI__ADEMCPBEKPK(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567880 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567880 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static KeyValuePair<string, uint> BKDNCPEANFN(string AAIHDEKMIJG)  [RVA 0x3326540]
// PNLFHHJGDLI$$BKDNCPEANFN @ RVA 0x3326540

System_Collections_Generic_KeyValuePair_string__uint__o
PNLFHHJGDLI__BKDNCPEANFN(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__uint__Fields SVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  bool bVar4;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *__this;
  MethodInfo_263A6EC *in_x4;
  System_Collections_Generic_KeyValuePair_object__uint__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  void *pvStack_48;
  Il2CppObject local_40;
  
  if ((DAT_04567881 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567881 = 1;
  }
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pvStack_48 = (void *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00.fields._8_8_ = StringLiteral_1/*""*/;
  __this_00.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_uint>___ctor
            (__this_00,(Il2CppObject *)0x0,
             (uint32_t)Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__,in_x4);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (__this == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
  do {
    bVar4 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                      );
    pvVar3 = pvStack_48;
    pIVar2 = local_60.fields._current;
    if (!bVar4) goto LAB_03426670;
    bVar4 = System_String__op_Equality
                      ((System_String_o *)local_60.fields._current,AAIHDEKMIJG,(MethodInfo *)0x0);
  } while (!bVar4);
  local_40.klass = (Il2CppClass *)pIVar2;
  local_40.monitor = pvVar3;
LAB_03426670:
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
            );
  SVar1._8_8_ = local_40.monitor;
  SVar1.key = (System_String_o *)local_40.klass;
  return (System_Collections_Generic_KeyValuePair_string__uint__o)SVar1;
}


// ===== private static void CMELEMCIOPP(int LPINEGEIINJ)  [RVA 0x3326700]
// PNLFHHJGDLI$$CMELEMCIOPP @ RVA 0x3326700

void PNLFHHJGDLI__CMELEMCIOPP(int32_t LPINEGEIINJ,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567882 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    DAT_04567882 = 1;
    method = extraout_x1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo,method);
  }
  Nekki_Audio_AudioManager__Stop(LPINEGEIINJ,false,(MethodInfo *)0x0);
  return;
}


// ===== private static void ICJJLOKMFAL(string CJNHFNHJHPE)  [RVA 0x3325520]
// PNLFHHJGDLI$$ICJJLOKMFAL @ RVA 0x3325520

void PNLFHHJGDLI__ICJJLOKMFAL(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567883 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567883 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->NOGIEJFCDNM;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  PNLFHHJGDLI__DHFILBENKMM(&PNLFHHJGDLI_TypeInfo->static_fields->NOGIEJFCDNM,method_00);
  return;
}


// ===== public static int CJKCKACIIHK(string EELDDPEAGGA, float EPNNOIDBNDC, float JLBFGCCBGBC = 1)  [RVA 0x33267EC]
// PNLFHHJGDLI$$CJKCKACIIHK @ RVA 0x33267EC

int32_t PNLFHHJGDLI__CJKCKACIIHK
                  (System_String_o *EELDDPEAGGA,float EPNNOIDBNDC,float JLBFGCCBGBC,
                  MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567884 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567884 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  iVar1 = PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,false,EPNNOIDBNDC,JLBFGCCBGBC,in_x2);
  return iVar1;
}


// ===== public static float JGAMDPGLJHH()  [RVA 0x3326A2C]
// PNLFHHJGDLI$$JGAMDPGLJHH @ RVA 0x3326A2C

float PNLFHHJGDLI__JGAMDPGLJHH(MethodInfo *method)

{
  if ((DAT_04567885 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567885 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->EHPFFCGFFOO;
}


// ===== public static void KNKFGKIPPBM()  [RVA 0x3326A84]
// PNLFHHJGDLI$$KNKFGKIPPBM @ RVA 0x3326A84

void PNLFHHJGDLI__KNKFGKIPPBM(MethodInfo *method)

{
  int NKENMPPEILF;
  
  if ((DAT_04567886 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567886 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NKENMPPEILF = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL <= NKENMPPEILF) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Audio_AudioManager__Pause(false,NKENMPPEILF,(MethodInfo *)0x0);
    NKENMPPEILF = NKENMPPEILF + 1;
  }
  return;
}


// ===== public static string OMAMHCJCLPJ()  [RVA 0x3326B3C]
// PNLFHHJGDLI$$OMAMHCJCLPJ @ RVA 0x3326B3C

System_String_o * PNLFHHJGDLI__OMAMHCJCLPJ(MethodInfo *method)

{
  if ((DAT_04567887 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567887 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
}


// ===== private static void KKHMJPANHCI(int NKENMPPEILF, bool MLNDMELNGIK)  [RVA 0x3326468]
// PNLFHHJGDLI$$KKHMJPANHCI @ RVA 0x3326468

void PNLFHHJGDLI__KKHMJPANHCI(int32_t NKENMPPEILF,bool MLNDMELNGIK,MethodInfo *method)

{
  if ((DAT_04567888 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    DAT_04567888 = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (MLNDMELNGIK) {
    Nekki_Audio_AudioManager__Mute(NKENMPPEILF,(MethodInfo *)0x0);
    return;
  }
  Nekki_Audio_AudioManager__UnMute(NKENMPPEILF,(MethodInfo *)0x0);
  return;
}


// ===== public static void KHLBONNDFGB()  [RVA 0x3326B94]
// PNLFHHJGDLI$$KHLBONNDFGB @ RVA 0x3326B94

void PNLFHHJGDLI__KHLBONNDFGB(MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 local_38;
  
  if ((DAT_04567889 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567889 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)pSVar3,
               Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
    while (bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                             ), bVar2) {
      iVar1 = (int32_t)local_38;
      method_00 = extraout_x1;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      PNLFHHJGDLI__CMELEMCIOPP(iVar1,method_00);
    }
    System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
              );
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
    if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NAGFLIBNEFO(ref string DIHAKADKIKM)  [RVA 0x33261B8]
// PNLFHHJGDLI$$NAGFLIBNEFO @ RVA 0x33261B8

void PNLFHHJGDLI__NAGFLIBNEFO(System_String_o **DIHAKADKIKM,MethodInfo *method)

{
  uint16_t uVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456788a & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_0456788a = 1;
    method = extraout_x1;
  }
  if (*DIHAKADKIKM != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars(*DIHAKADKIKM,0,(MethodInfo *)0x0);
    if (uVar1 == 0x2e) {
      return;
    }
    pSVar2 = System_String__Concat(StringLiteral_1377/*"."*/,*DIHAKADKIKM,(MethodInfo *)0x0);
    *DIHAKADKIKM = pSVar2;
    thunk_FUN_01c20e04(DIHAKADKIKM,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public static void CMELEMCIOPP(string AAIHDEKMIJG)  [RVA 0x3326D60]
// PNLFHHJGDLI$$CMELEMCIOPP @ RVA 0x3326D60

void PNLFHHJGDLI__CMELEMCIOPP(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar2;
  System_Collections_Generic_KeyValuePair_string__uint__o SVar3;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 uStack_38;
  
  if ((DAT_0456788b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456788b = 1;
    method = extraout_x1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  SVar3 = PNLFHHJGDLI__BKDNCPEANFN(AAIHDEKMIJG,method);
  bVar1 = System_String__op_Inequality(SVar3.fields.key,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pMVar2 = extraout_x1_01;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
    pMVar2 = extraout_x1_02;
  }
  if (bVar1) {
    PNLFHHJGDLI__KIFAFGCJCEJ(AAIHDEKMIJG,pMVar2);
    PNLFHHJGDLI__CMELEMCIOPP(SVar3.fields.value,method_00);
  }
  else {
    __this = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
    if (__this == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)__this,
               Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                             ), bVar1) {
      bVar1 = System_String__op_Equality(SVar3.fields.key,AAIHDEKMIJG,(MethodInfo *)0x0);
      if (bVar1) {
        pMVar2 = extraout_x1_03;
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar2 = extraout_x1_04;
        }
        PNLFHHJGDLI__CMELEMCIOPP(SVar3.fields.value,pMVar2);
      }
    }
    System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
              );
  }
  return;
}


// ===== private static void FMFOLKCKFKN(string CJNHFNHJHPE)  [RVA 0x3326148]
// PNLFHHJGDLI$$FMFOLKCKFKN @ RVA 0x3326148

void PNLFHHJGDLI__FMFOLKCKFKN(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456788c & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456788c = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  PNLFHHJGDLI__NAGFLIBNEFO(&PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK,method_00);
  return;
}


// ===== public static bool ABBMFBECIPL()  [RVA 0x332714C]
// PNLFHHJGDLI$$ABBMFBECIPL @ RVA 0x332714C

bool PNLFHHJGDLI__ABBMFBECIPL(MethodInfo *method)

{
  if ((DAT_0456788d & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456788d = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField;
}


// ===== public static void FDOGCCOEHPL(bool CJNHFNHJHPE)  [RVA 0x33251D8]
// PNLFHHJGDLI$$FDOGCCOEHPL @ RVA 0x33251D8

void PNLFHHJGDLI__FDOGCCOEHPL(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  PNLFHHJGDLI_StaticFields *pPVar1;
  
  if ((DAT_0456788e & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456788e = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  if (pPVar1->MGFLMNJLJLK == CJNHFNHJHPE) {
    return;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  }
  pPVar1->MGFLMNJLJLK = CJNHFNHJHPE;
  PNLFHHJGDLI__KKHMJPANHCI(pPVar1->EEFDLAHNJHL,CJNHFNHJHPE,in_x2);
  return;
}


// ===== private static void GIEMFDDIIFF(float EEHANOOKDMP)  [RVA 0x3325DF8]
// PNLFHHJGDLI$$GIEMFDDIIFF @ RVA 0x3325DF8

void PNLFHHJGDLI__GIEMFDDIIFF(float EEHANOOKDMP,MethodInfo *method)

{
  MethodInfo *in_x2;
  PNLFHHJGDLI_StaticFields *pPVar1;
  int LPINEGEIINJ;
  
  if ((DAT_0456788f & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456788f = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LPINEGEIINJ = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
    if (pPVar1->PLGCMDGLNEL <= LPINEGEIINJ) break;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
    }
    PNLFHHJGDLI__LOGILMBEJCI(LPINEGEIINJ,EEHANOOKDMP,pPVar1->GBBBAEHFPLH,in_x2);
    LPINEGEIINJ = LPINEGEIINJ + 1;
  }
  return;
}


// ===== public static string NLJOABBMBCC()  [RVA 0x33271A4]
// PNLFHHJGDLI$$NLJOABBMBCC @ RVA 0x33271A4

System_String_o * PNLFHHJGDLI__NLJOABBMBCC(MethodInfo *method)

{
  if ((DAT_04567890 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567890 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->NOGIEJFCDNM;
}


// ===== public static bool PPGIBBCLJMO()  [RVA 0x33271FC]
// PNLFHHJGDLI$$PPGIBBCLJMO @ RVA 0x33271FC

bool PNLFHHJGDLI__PPGIBBCLJMO(MethodInfo *method)

{
  if ((DAT_04567891 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567891 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH;
}


// ===== public static void IBGHAKIGFFK(float EEHANOOKDMP, float JFGCKCNIKJA)  [RVA 0x3327254]
// PNLFHHJGDLI$$IBGHAKIGFFK @ RVA 0x3327254

void PNLFHHJGDLI__IBGHAKIGFFK(float EEHANOOKDMP,float JFGCKCNIKJA,MethodInfo *method)

{
  PNLFHHJGDLI_c *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567892 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567892 = 1;
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__IMFBLHDOHFL(EEHANOOKDMP,(MethodInfo *)method_00);
  PNLFHHJGDLI__GJBPODCHLNP(JFGCKCNIKJA,method_01);
  return;
}


// ===== private static void KIFAFGCJCEJ(string AAIHDEKMIJG)  [RVA 0x3326F78]
// PNLFHHJGDLI$$KIFAFGCJCEJ @ RVA 0x3326F78

void PNLFHHJGDLI__KIFAFGCJCEJ(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_object__uint__o item;
  bool bVar1;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  undefined8 uStack_48;
  
  if ((DAT_04567893 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567893 = 1;
    method = extraout_x1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_48 = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  pSVar2 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (pSVar2 == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                      );
    if (!bVar1) goto LAB_034270ac;
    item.fields._8_8_ = uStack_48;
    item.fields.key = local_60.fields._current;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_60.fields._current,AAIHDEKMIJG,(MethodInfo *)0x0);
  } while (!bVar1);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (pSVar2 == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_uint>>__Remove
            ((System_Collections_Generic_List_T__o *)pSVar2,item,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
LAB_034270ac:
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
            );
  return;
}


// ===== private static void DHFILBENKMM(ref string DIHAKADKIKM)  [RVA 0x332675C]
// PNLFHHJGDLI$$DHFILBENKMM @ RVA 0x332675C

void PNLFHHJGDLI__DHFILBENKMM(System_String_o **DIHAKADKIKM,MethodInfo *method)

{
  uint16_t uVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567894 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04567894 = 1;
    method = extraout_x1;
  }
  pSVar2 = *DIHAKADKIKM;
  if (pSVar2 != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars(pSVar2,(pSVar2->fields)._stringLength + -1,(MethodInfo *)0x0);
    if (uVar1 == 0x2f) {
      return;
    }
    pSVar2 = System_String__Concat(*DIHAKADKIKM,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
    *DIHAKADKIKM = pSVar2;
    thunk_FUN_01c20e04(DIHAKADKIKM,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private static void LOGILMBEJCI(int LPINEGEIINJ, float CLGDGFKHOBD, bool NGOMHBBMIAD)  [RVA 0x33263C4]
// PNLFHHJGDLI$$LOGILMBEJCI @ RVA 0x33263C4

void PNLFHHJGDLI__LOGILMBEJCI
               (int32_t LPINEGEIINJ,float CLGDGFKHOBD,bool NGOMHBBMIAD,MethodInfo *method)

{
  if ((DAT_04567895 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567895 = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Audio_AudioManager__SetVolume(CLGDGFKHOBD,LPINEGEIINJ,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__KKHMJPANHCI(LPINEGEIINJ,NGOMHBBMIAD,method);
  return;
}


// ===== private static void OINCNNMIDEB(string CJNHFNHJHPE)  [RVA 0x3325590]
// PNLFHHJGDLI$$OINCNNMIDEB @ RVA 0x3325590

void PNLFHHJGDLI__OINCNNMIDEB(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567896 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567896 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  PNLFHHJGDLI__DHFILBENKMM(&PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ,method_00);
  return;
}


// ===== private static void .cctor()  [RVA 0x33272BC]
// PNLFHHJGDLI$$.cctor @ RVA 0x33272BC

void PNLFHHJGDLI___cctor(MethodInfo *method)

{
  PNLFHHJGDLI_StaticFields *pPVar1;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o **ppSVar3;
  undefined8 uVar4;
  
  if ((DAT_04567897 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_uint>>_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19777/*"music/"*/);
    FUN_01bab630(&StringLiteral_1489/*".wav"*/);
    FUN_01bab630(&StringLiteral_21131/*"sounds/"*/);
    FUN_01bab630(&StringLiteral_1479/*".ogg"*/);
    DAT_04567897 = 1;
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  pPVar1->EEFDLAHNJHL = 0;
  pPVar1->CPOAGJAKIDL = 1;
  pPVar1->PLGCMDGLNEL = 10;
  pPVar1->NOGIEJFCDNM = StringLiteral_21131/*"sounds/"*/;
  thunk_FUN_01c20e04();
  PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ = StringLiteral_19777/*"music/"*/;
  thunk_FUN_01c20e04();
  PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG = StringLiteral_1489/*".wav"*/;
  thunk_FUN_01c20e04();
  PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK = StringLiteral_1479/*".ogg"*/;
  thunk_FUN_01c20e04();
  uVar4 = NEON_fmov(0x3f800000,4);
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  pPVar1->EHPFFCGFFOO = (float)(int)uVar4;
  pPVar1->AGBNCFPOLOE = (float)(int)((ulong)uVar4 >> 0x20);
  pPVar1->MJGOIJNGHKE = false;
  pPVar1->GBBBAEHFPLH = false;
  pPVar1->MGFLMNJLJLK = false;
  pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__uint___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_uint>>_TypeInfo);
  System_Collections_Generic_List<KeyValuePair<object,_uint>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>__ctor__);
  ppSVar3 = &PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__uint___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_uint>>_TypeInfo);
  System_Collections_Generic_List<KeyValuePair<object,_uint>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>__ctor__);
  ppSVar3 = &PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO = 10;
  return;
}


// ===== public static bool OAIKLELIHCD()  [RVA 0x3327460]
// PNLFHHJGDLI$$OAIKLELIHCD @ RVA 0x3327460

bool PNLFHHJGDLI__OAIKLELIHCD(MethodInfo *method)

{
  if ((DAT_04567898 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567898 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK;
}


// ===== public static void MEHGLNCEAAG(int NKENMPPEILF, string BNCJPLDMJMH, bool LPDDIIOAIOO, bool BBHKNEKAKMI, float EPNNOIDBNDC = 1, float JLBFGCCBGBC = 1)  [RVA 0x3325BFC]
// PNLFHHJGDLI$$MEHGLNCEAAG @ RVA 0x3325BFC

void PNLFHHJGDLI__MEHGLNCEAAG
               (int32_t NKENMPPEILF,System_String_o *BNCJPLDMJMH,bool LPDDIIOAIOO,bool BBHKNEKAKMI,
               float EPNNOIDBNDC,float JLBFGCCBGBC,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)LPDDIIOAIOO;
  if ((DAT_04567899 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567899 = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Audio_AudioManager__Play
            (NKENMPPEILF,BNCJPLDMJMH,LPDDIIOAIOO,true,EPNNOIDBNDC,JLBFGCCBGBC,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__KKHMJPANHCI(NKENMPPEILF,BBHKNEKAKMI,method_00);
  return;
}


// ===== public static void KBEJCDBMEBA()  [RVA 0x3325A64]
// PNLFHHJGDLI$$KBEJCDBMEBA @ RVA 0x3325A64

void PNLFHHJGDLI__KBEJCDBMEBA(MethodInfo *method)

{
  int32_t BJMMLGEBJDK;
  bool bVar1;
  PNLFHHJGDLI_c *method_00;
  System_String_o **ppSVar2;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_0456789a & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789a = 1;
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)method_00);
  if (bVar1) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
    }
    Nekki_Audio_AudioManager__Stop(BJMMLGEBJDK,false,(MethodInfo *)0x0);
    if (DAT_0456647a == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_0456647a = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField != (System_String_o *)0x0)
    {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456647a == '\0') {
        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
        DAT_0456647a = '\x01';
      }
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      KGLJICLJHEL = PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
      if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
      }
      Nekki_Audio_AudioManager__UnloadAudio(KGLJICLJHEL,(MethodInfo *)0x0);
      if (DAT_045678de == '\0') {
        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
        DAT_045678de = '\x01';
      }
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppSVar2 = &PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
      *ppSVar2 = (System_String_o *)0x0;
      thunk_FUN_01c20e04(ppSVar2,0);
      return;
    }
  }
  return;
}


// ===== public static int DAKPBFCAKPB()  [RVA 0x33274B8]
// PNLFHHJGDLI$$DAKPBFCAKPB @ RVA 0x33274B8

int32_t PNLFHHJGDLI__DAKPBFCAKPB(MethodInfo *method)

{
  int BJMMLGEBJDK;
  bool bVar1;
  int iVar2;
  
  if ((DAT_0456789b & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789b = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL;
    if (iVar2 <= BJMMLGEBJDK) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Nekki_Audio_AudioManager__IsPlaying(BJMMLGEBJDK,(MethodInfo *)0x0);
    if (!bVar1) {
      return BJMMLGEBJDK;
    }
    BJMMLGEBJDK = BJMMLGEBJDK + 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    iVar2 = PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL;
  }
  return iVar2;
}


// ===== public static string CLOKKCEEBBP()  [RVA 0x3327590]
// PNLFHHJGDLI$$CLOKKCEEBBP @ RVA 0x3327590

System_String_o * PNLFHHJGDLI__CLOKKCEEBBP(MethodInfo *method)

{
  if ((DAT_0456789c & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789c = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ;
}


// ===== public static int CJKCKACIIHK(string EELDDPEAGGA, bool GLHEIHKMJHG = False, float EPNNOIDBNDC = 1, float JLBFGCCBGBC = 1)  [RVA 0x332685C]
// PNLFHHJGDLI$$CJKCKACIIHK @ RVA 0x332685C

int32_t PNLFHHJGDLI__CJKCKACIIHK
                  (System_String_o *EELDDPEAGGA,bool GLHEIHKMJHG,float EPNNOIDBNDC,float JLBFGCCBGBC
                  ,MethodInfo *method)

{
  bool bVar1;
  uint32_t OGPGLGPMEPD;
  PNLFHHJGDLI_c *method_00;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_02;
  MethodInfo *in_x4;
  
  method_01 = (MethodInfo *)(ulong)GLHEIHKMJHG;
  if ((DAT_0456789d & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_5596/*"ERROR: playSound - no file "{0}" found"*/);
    DAT_0456789d = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_Audio_AudioManager__CheckAudioLoaded(EELDDPEAGGA,(MethodInfo *)0x0);
  if (!bVar1) {
    method_02 = extraout_x1;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_02 = extraout_x1_00;
    }
    bVar1 = PNLFHHJGDLI__PPMOLPPCNFC(EELDDPEAGGA,method_02);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((EELDDPEAGGA != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(EELDDPEAGGA,(((args->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)EELDDPEAGGA;
        thunk_FUN_01c20e04(args->m_Items,EELDDPEAGGA);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_5596/*"ERROR: playSound - no file "{0}" found"*/,args,(MethodInfo *)0x0);
        return -1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  OGPGLGPMEPD = PNLFHHJGDLI__DAKPBFCAKPB((MethodInfo *)method_00);
  PNLFHHJGDLI__MEHGLNCEAAG
            (OGPGLGPMEPD,EELDDPEAGGA,GLHEIHKMJHG,PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH,
             EPNNOIDBNDC,JLBFGCCBGBC,in_x4);
  PNLFHHJGDLI__EOHAEHCEKDG(EELDDPEAGGA,OGPGLGPMEPD,method_01);
  if (GLHEIHKMJHG) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__MJMLKEHNHEB(EELDDPEAGGA,OGPGLGPMEPD,method_01);
  }
  return OGPGLGPMEPD;
}


// ===== public static void GIENGNEGHPJ()  [RVA 0x33275E8]
// PNLFHHJGDLI$$GIENGNEGHPJ @ RVA 0x33275E8

void PNLFHHJGDLI__GIENGNEGHPJ(MethodInfo *method)

{
  int iVar1;
  int32_t NFNLDCNBBIF;
  uint uVar2;
  System_Int32_array *KGHJJGDIOON;
  PNLFHHJGDLI_c *pPVar3;
  PNLFHHJGDLI_StaticFields *pPVar4;
  int iVar5;
  
  if ((DAT_0456789e & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789e = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KGHJJGDIOON = (System_Int32_array *)
                FUN_01bab718(int___TypeInfo,
                             (PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL -
                             PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL) + 1);
  iVar5 = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  pPVar3 = PNLFHHJGDLI_TypeInfo;
  while( true ) {
    if ((pPVar3->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pPVar3);
      iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
      }
      pPVar4 = PNLFHHJGDLI_TypeInfo->static_fields;
      pPVar3 = PNLFHHJGDLI_TypeInfo;
    }
    else {
      pPVar4 = pPVar3->static_fields;
      iVar1 = pPVar4->PLGCMDGLNEL;
    }
    if (iVar1 <= iVar5) {
      NFNLDCNBBIF = pPVar4->EEFDLAHNJHL;
      if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Audio_AudioManager__Init
                ((System_String_o *)0x0,NFNLDCNBBIF,KGHJJGDIOON,(MethodInfo *)0x0);
      return;
    }
    if (KGHJJGDIOON == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = iVar5 - pPVar4->CPOAGJAKIDL;
    if ((uint)KGHJJGDIOON->max_length <= uVar2) break;
    KGHJJGDIOON->m_Items[(int)uVar2] = iVar5;
    iVar5 = iVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static bool PPMOLPPCNFC(string BNCJPLDMJMH)  [RVA 0x3325014]
// PNLFHHJGDLI$$PPMOLPPCNFC @ RVA 0x3325014

bool PNLFHHJGDLI__PPMOLPPCNFC(System_String_o *BNCJPLDMJMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AudioClip_o *NCALFHMFKLE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_0456789f & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789f = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  NCALFHMFKLE = PNLFHHJGDLI__GEIPHOGLKAG(BNCJPLDMJMH,method);
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  Nekki_Audio_AudioManager__AddAudio(NCALFHMFKLE,BNCJPLDMJMH,1.0,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)NCALFHMFKLE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  return bVar1;
}


// ===== public static string AMDFJBIGKLG()  [RVA 0x3327734]
// PNLFHHJGDLI$$AMDFJBIGKLG @ RVA 0x3327734

System_String_o * PNLFHHJGDLI__AMDFJBIGKLG(MethodInfo *method)

{
  if ((DAT_045678a0 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045678a0 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG;
}


// ===== public static void KOBIMCGMHLJ()  [RVA 0x332778C]
// PNLFHHJGDLI$$KOBIMCGMHLJ @ RVA 0x332778C

void PNLFHHJGDLI__KOBIMCGMHLJ(MethodInfo *method)

{
  int32_t iVar1;
  PNLFHHJGDLI_StaticFields *pPVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar3;
  int BJMMLGEBJDK;
  
  if ((DAT_045678a1 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Clear__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045678a1 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar2 = PNLFHHJGDLI_TypeInfo->static_fields;
    if (pPVar2->PLGCMDGLNEL <= BJMMLGEBJDK) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Audio_AudioManager__Stop(BJMMLGEBJDK,false,(MethodInfo *)0x0);
    BJMMLGEBJDK = BJMMLGEBJDK + 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pPVar2 = PNLFHHJGDLI_TypeInfo->static_fields;
  }
  pSVar3 = pPVar2->CMDACPPJJEF;
  if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pPVar2 = PNLFHHJGDLI_TypeInfo->static_fields;
    }
    pSVar3 = pPVar2->CPHHBNFBJGP;
    if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

