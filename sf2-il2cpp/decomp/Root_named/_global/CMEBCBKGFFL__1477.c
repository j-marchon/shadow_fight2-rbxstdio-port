// TypeDefIndex 1477
// Namespace: 
// public static class CMEBCBKGFFL
// Fields:

// ===== public static string LMCHNOGAEHE(string EIJDDKJONFO)  [RVA 0x3195A84]
// CMEBCBKGFFL$$LMCHNOGAEHE @ RVA 0x3195A84

System_String_o * CMEBCBKGFFL__LMCHNOGAEHE(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566a6d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566a6d = 1;
    method = extraout_x1;
  }
  pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(EIJDDKJONFO,method);
  pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
  exists = (UnityEngine_Object_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    if (exists != (UnityEngine_Object_o *)0x0) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)exists,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}


// ===== public static string IKCJLINAPOA(string EIJDDKJONFO)  [RVA 0x3195B6C]
// CMEBCBKGFFL$$IKCJLINAPOA @ RVA 0x3195B6C

System_String_o * CMEBCBKGFFL__IKCJLINAPOA(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *newValue;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a6e & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_04566a6e = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar2 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  if (EIJDDKJONFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__StartsWith(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
    newValue = SF2Paths__ANDNJCLBPGJ((MethodInfo *)0x0);
    pSVar2 = System_String__Replace(EIJDDKJONFO,pSVar2,newValue,(MethodInfo *)0x0);
    bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03295c34;
  }
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(EIJDDKJONFO,(MethodInfo *)0x0);
  pSVar2 = EIJDDKJONFO;
  if (!bVar1) {
    return (System_String_o *)0x0;
  }
LAB_03295c34:
  pSVar2 = NEHNBJKKABI__EPMKDIAJEOI(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public static byte[] JKGGKELPNKJ(string JAFADHFFBPK)  [RVA 0x3195C58]
// CMEBCBKGFFL$$JKGGKELPNKJ @ RVA 0x3195C58

System_Byte_array * CMEBCBKGFFL__JKGGKELPNKJ(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  System_Byte_array *pSVar3;
  System_IO_FileStream_o *__this;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a6f & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_CMEBCBKGFFL_JKGGKELPNKJ__);
    FUN_01bab630(&System_IO_FileStream_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    DAT_04566a6f = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (SF2Paths_TypeInfo->static_fields->ACGDPPPMKBM == false) {
    __this = (System_IO_FileStream_o *)thunk_FUN_01bda818(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor(__this,JAFADHFFBPK,3,1,(MethodInfo *)0x0);
    if (__this == (System_IO_FileStream_o *)0x0) goto LAB_03295e04;
    uVar4 = (*(__this->klass->vtable)._11_get_Length.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_Length.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,uVar4);
    uVar4 = (*(__this->klass->vtable)._11_get_Length.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_Length.method);
    (*(__this->klass->vtable)._33_Read.methodPtr)
              (__this,pSVar3,0,uVar4,(__this->klass->vtable)._33_Read.method);
    (*(__this->klass->vtable)._19_Close.methodPtr)(__this,(__this->klass->vtable)._19_Close.method);
  }
  else {
    pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(JAFADHFFBPK,method);
    pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
    x = (UnityEngine_Object_o *)
        UnityEngine_ResourcesAndBundles__Load<object>
                  (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        pSVar3 = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
        return pSVar3;
      }
LAB_03295e04:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_Byte_array *)0x0;
  }
  return pSVar3;
}


// ===== public static AudioClip GEIPHOGLKAG(string JAFADHFFBPK)  [RVA 0x3195E08]
// CMEBCBKGFFL$$GEIPHOGLKAG @ RVA 0x3195E08

UnityEngine_AudioClip_o * CMEBCBKGFFL__GEIPHOGLKAG(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_AudioClip_o *pUVar3;
  UnityEngine_Networking_UnityWebRequest_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a70 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<AudioClip>__);
    FUN_01bab630(&StringLiteral_18247/*"file:///{0}"*/);
    DAT_04566a70 = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (SF2Paths_TypeInfo->static_fields->ACGDPPPMKBM != false) {
    pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(JAFADHFFBPK,method);
    pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
    pUVar3 = (UnityEngine_AudioClip_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<AudioClip>__);
    return pUVar3;
  }
  pSVar2 = System_String__Format(StringLiteral_18247/*"file:///{0}"*/,(Il2CppObject *)JAFADHFFBPK,(MethodInfo *)0x0);
  __this = UnityEngine_Networking_UnityWebRequest__Get(pSVar2,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_Networking_UnityWebRequest__SendWebRequest(__this,(MethodInfo *)0x0);
  do {
    bVar1 = UnityEngine_Networking_UnityWebRequest__get_isDone(__this,(MethodInfo *)0x0);
    if (bVar1) break;
    pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  } while (bVar1);
  pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Networking_DownloadHandlerAudioClip__GetContent(__this,(MethodInfo *)0x0);
    return pUVar3;
  }
  return (UnityEngine_AudioClip_o *)0x0;
}


// ===== public static VideoClip OCMBGOIHFOD(string JAFADHFFBPK)  [RVA 0x3195F30]
// CMEBCBKGFFL$$OCMBGOIHFOD @ RVA 0x3195F30

UnityEngine_Video_VideoClip_o *
CMEBCBKGFFL__OCMBGOIHFOD(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Video_VideoClip_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566a71 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<VideoClip>__);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04566a71 = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar1 = SF2Paths__FEEOPEBHPJI((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1492/*"/"*/,JAFADHFFBPK,(MethodInfo *)0x0);
  pSVar1 = CMEBCBKGFFL__BPMILMCCBEI(pSVar1,method_00);
  pSVar1 = CMEBCBKGFFL__OLJOOCGKALN(pSVar1,method_01);
  pUVar2 = (UnityEngine_Video_VideoClip_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (pSVar1,Method_UnityEngine_ResourcesAndBundles_Load<VideoClip>__);
  return pUVar2;
}


// ===== private static string BPMILMCCBEI(string EIJDDKJONFO)  [RVA 0x3195FCC]
// CMEBCBKGFFL$$BPMILMCCBEI @ RVA 0x3195FCC

System_String_o * CMEBCBKGFFL__BPMILMCCBEI(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  int iVar1;
  System_Char_array *trimChars;
  System_String_o *pSVar2;
  
  if ((DAT_04566a72 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    DAT_04566a72 = 1;
  }
  trimChars = (System_Char_array *)FUN_01bab718(char___TypeInfo,2);
  if (trimChars != (System_Char_array *)0x0) {
    iVar1 = (int)trimChars->max_length;
    if ((iVar1 == 0) || (trimChars->m_Items[0] = 0x5c, iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    trimChars->m_Items[1] = 0x2f;
    if (EIJDDKJONFO != (System_String_o *)0x0) {
      pSVar2 = System_String__TrimStart(EIJDDKJONFO,trimChars,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string KGDAINKJCGG(string EIJDDKJONFO, bool ILDOEIOKKNO = False)  [RVA 0x3196054]
// CMEBCBKGFFL$$KGDAINKJCGG @ RVA 0x3196054

System_String_o *
CMEBCBKGFFL__KGDAINKJCGG(System_String_o *EIJDDKJONFO,bool ILDOEIOKKNO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)ILDOEIOKKNO;
  if ((DAT_04566a73 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_04566a73 = 1;
    method_00 = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  if ((SF2Paths_TypeInfo->static_fields->ACGDPPPMKBM != false) && (!ILDOEIOKKNO)) {
    pSVar1 = CMEBCBKGFFL__LMCHNOGAEHE(EIJDDKJONFO,method_00);
    return pSVar1;
  }
  pSVar1 = CMEBCBKGFFL__IKCJLINAPOA(EIJDDKJONFO,method_00);
  return pSVar1;
}


// ===== private static string OLJOOCGKALN(string EIJDDKJONFO)  [RVA 0x31960DC]
// CMEBCBKGFFL$$OLJOOCGKALN @ RVA 0x31960DC

System_String_o * CMEBCBKGFFL__OLJOOCGKALN(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a74 & 1) == 0) {
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04566a74 = 1;
    method = extraout_x1;
  }
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo,method);
  }
  bVar1 = System_IO_Path__HasExtension(EIJDDKJONFO,(MethodInfo *)0x0);
  if (bVar1) {
    if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_IO_Path__ChangeExtension(EIJDDKJONFO,(System_String_o *)0x0,(MethodInfo *)0x0);
    return pSVar2;
  }
  return EIJDDKJONFO;
}


// ===== public static string PMNIOGKDGFD(string EIJDDKJONFO)  [RVA 0x3196168]
// CMEBCBKGFFL$$PMNIOGKDGFD @ RVA 0x3196168

System_String_o * CMEBCBKGFFL__PMNIOGKDGFD(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566a6d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566a6d = 1;
    method = extraout_x1;
  }
  pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(EIJDDKJONFO,method);
  pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
  exists = (UnityEngine_Object_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    if (exists != (UnityEngine_Object_o *)0x0) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)exists,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}


// ===== public static string NFBODKMCAMM(string EIJDDKJONFO)  [RVA 0x3195B5C]
// CMEBCBKGFFL$$NFBODKMCAMM @ RVA 0x3195B5C

System_String_o * CMEBCBKGFFL__NFBODKMCAMM(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  pSVar1 = CMEBCBKGFFL__BPMILMCCBEI(EIJDDKJONFO,method);
  pSVar1 = CMEBCBKGFFL__OLJOOCGKALN(pSVar1,method_00);
  return pSVar1;
}


// ===== public static Texture2D PHNDFNPDOLA(string JAFADHFFBPK)  [RVA 0x319616C]
// CMEBCBKGFFL$$PHNDFNPDOLA @ RVA 0x319616C

/* WARNING: Removing unreachable block (ram,0x03296300) */

UnityEngine_Texture2D_o * CMEBCBKGFFL__PHNDFNPDOLA(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  ushort uVar1;
  System_IO_FileStream_o *__this;
  undefined8 uVar2;
  System_Byte_array *data;
  VirtualInvokeData *pVVar3;
  UnityEngine_Texture2D_o *__this_00;
  MethodInfo *extraout_x1;
  System_IO_FileStream_c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04566a75 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_CMEBCBKGFFL_PHNDFNPDOLA__);
    FUN_01bab630(&System_IO_FileStream_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&UnityEngine_Texture2D_TypeInfo);
    DAT_04566a75 = 1;
    method = extraout_x1;
  }
  __this = (System_IO_FileStream_o *)thunk_FUN_01bda818(System_IO_FileStream_TypeInfo,method);
  System_IO_FileStream___ctor(__this,JAFADHFFBPK,3,1,(MethodInfo *)0x0);
  if (__this == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (*(__this->klass->vtable)._11_get_Length.methodPtr)
                    (__this,(__this->klass->vtable)._11_get_Length.method);
  data = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,uVar2);
  if (data == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this->klass->vtable)._33_Read.methodPtr)
            (__this,data,0,(ulong)(uint)data->max_length,(__this->klass->vtable)._33_Read.method);
  pSVar4 = __this->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar3 = &(pSVar4->vtable)._0_Equals + *piVar6;
        goto LAB_0329629c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_0329629c:
  (*pVVar3->methodPtr)(__this,pVVar3->method);
  __this_00 = (UnityEngine_Texture2D_o *)thunk_FUN_01bda818(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor(__this_00,2,2,5,false,(MethodInfo *)0x0);
  UnityEngine_ImageConversion__LoadImage(__this_00,data,(MethodInfo *)0x0);
  return __this_00;
}

