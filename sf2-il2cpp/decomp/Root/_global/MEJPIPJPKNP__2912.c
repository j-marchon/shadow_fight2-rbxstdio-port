// TypeDefIndex 2912
// Namespace: 
// [Extension]
// public static class MEJPIPJPKNP
// Fields:

// ===== public static bool CAMOIKJFFNC(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344B130]
// MEJPIPJPKNP$$CAMOIKJFFNC @ RVA 0x344B130

bool MEJPIPJPKNP__CAMOIKJFFNC(int32_t NFOBCFADDHA,MethodInfo *method)

{
  return NFOBCFADDHA - 3U < 7;
}


// ===== public static string NABCOFEDBGM(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344B140]
// MEJPIPJPKNP$$NABCOFEDBGM @ RVA 0x344B140

System_String_o * MEJPIPJPKNP__NABCOFEDBGM(int32_t NFOBCFADDHA,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568272 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8955/*"MenuButtons.Exit_active"*/);
    FUN_01bab630(&StringLiteral_8961/*"MenuButtons.Profile_active"*/);
    FUN_01bab630(&StringLiteral_8966/*"MenuButtons.Shop_active"*/);
    FUN_01bab630(&StringLiteral_8951/*"MenuButtons.Dojo_active"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_8958/*"MenuButtons.Map_active"*/);
    DAT_04568272 = 1;
  }
  if (NFOBCFADDHA - 3U < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_8951/*"MenuButtons.Dojo_active"*/_03fc67c8)[(int)(NFOBCFADDHA - 3U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static string BELOCFNPIAN(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344A374]
// MEJPIPJPKNP$$BELOCFNPIAN @ RVA 0x344A374

System_String_o * MEJPIPJPKNP__BELOCFNPIAN(int32_t NFOBCFADDHA,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int32_t local_14;
  
  if ((DAT_04568273 & 1) == 0) {
    FUN_01bab630(&DBMPKPJGIPI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8569/*"Loader"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_5455/*"Dojo"*/);
    FUN_01bab630(&StringLiteral_11736/*"ScreenTypeExtension.ToSceneName: unknown screen '{0}'!"*/);
    FUN_01bab630(&StringLiteral_10427/*"Preloader"*/);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    FUN_01bab630(&StringLiteral_8819/*"Map"*/);
    FUN_01bab630(&StringLiteral_6729/*"GeneralMenu"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_12000/*"Shop"*/);
    FUN_01bab630(&StringLiteral_10599/*"Pvp"*/);
    DAT_04568273 = 1;
  }
  switch(NFOBCFADDHA) {
  case 0:
    puVar4 = &StringLiteral_10427/*"Preloader"*/;
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_14 = NFOBCFADDHA;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(DBMPKPJGIPI_TypeInfo,&local_14);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_11736/*"ScreenTypeExtension.ToSceneName: unknown screen '{0}'!"*/,args,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_1/*""*/;
    break;
  case 2:
    puVar4 = &StringLiteral_8569/*"Loader"*/;
    break;
  case 3:
    puVar4 = &StringLiteral_5455/*"Dojo"*/;
    break;
  case 4:
    puVar4 = &StringLiteral_12000/*"Shop"*/;
    break;
  case 5:
    puVar4 = &StringLiteral_8819/*"Map"*/;
    break;
  case 6:
    puVar4 = &StringLiteral_6310/*"Fight"*/;
    break;
  case 7:
    puVar4 = &StringLiteral_10491/*"Profile"*/;
    break;
  case 8:
    puVar4 = &StringLiteral_6729/*"GeneralMenu"*/;
    break;
  case 9:
    puVar4 = &StringLiteral_10599/*"Pvp"*/;
  }
  return (System_String_o *)*puVar4;
}


// ===== public static string HLKGHMBHAEF(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344B1DC]
// MEJPIPJPKNP$$HLKGHMBHAEF @ RVA 0x344B1DC

System_String_o * MEJPIPJPKNP__HLKGHMBHAEF(int32_t NFOBCFADDHA,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568274 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8963/*"MenuButtons.Profile_pushed"*/);
    FUN_01bab630(&StringLiteral_8960/*"MenuButtons.Map_pushed"*/);
    FUN_01bab630(&StringLiteral_8968/*"MenuButtons.Shop_pushed"*/);
    FUN_01bab630(&StringLiteral_8953/*"MenuButtons.Dojo_pushed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_8954/*"MenuButtons.Exit"*/);
    DAT_04568274 = 1;
  }
  if (NFOBCFADDHA - 3U < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_8953/*"MenuButtons.Dojo_pushed"*/_03fc67f8)[(int)(NFOBCFADDHA - 3U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static DBMPKPJGIPI GDDGNMOMMCE(string LIBJOIJMLDO)  [RVA 0x344B278]
// MEJPIPJPKNP$$GDDGNMOMMCE @ RVA 0x344B278

int32_t MEJPIPJPKNP__GDDGNMOMMCE(System_String_o *LIBJOIJMLDO,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04568275 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8569/*"Loader"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_5455/*"Dojo"*/);
    FUN_01bab630(&StringLiteral_10427/*"Preloader"*/);
    FUN_01bab630(&StringLiteral_11737/*"ScreenTypeExtension.ToSceneType: unknown screen '{0}'!"*/);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    FUN_01bab630(&StringLiteral_8819/*"Map"*/);
    FUN_01bab630(&StringLiteral_6729/*"GeneralMenu"*/);
    FUN_01bab630(&StringLiteral_12000/*"Shop"*/);
    FUN_01bab630(&StringLiteral_10599/*"Pvp"*/);
    DAT_04568275 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(LIBJOIJMLDO,(MethodInfo *)0x0);
  if (uVar2 < 0x5e57a19d) {
    if (uVar2 < 0x4473ced2) {
      if (uVar2 == 0x28742cc9) {
        bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_12000/*"Shop"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 4;
        }
      }
      else if ((uVar2 == 0x4473ced1) &&
              (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_10427/*"Preloader"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 0;
      }
    }
    else if (uVar2 == 0x44a7f051) {
      bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_8819/*"Map"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 5;
      }
    }
    else if ((uVar2 == 0x5e57a19c) &&
            (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_6729/*"GeneralMenu"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 8;
    }
  }
  else if (uVar2 < 0xa3dc3490) {
    if (uVar2 == 0xa3dc348f) {
      bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_5455/*"Dojo"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 3;
      }
    }
    else if ((uVar2 == 0x6249c9c2) &&
            (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_8569/*"Loader"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 2;
    }
  }
  else if (uVar2 == 0xcc7558d1) {
    bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_10599/*"Pvp"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return 9;
    }
  }
  else if (uVar2 == 0xcd17328e) {
    bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_10491/*"Profile"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return 7;
    }
  }
  else if ((uVar2 == 0xcd184169) &&
          (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0),
          bVar1)) {
    return 6;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((LIBJOIJMLDO != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(LIBJOIJMLDO,(((args->obj).klass)->_1).element_class), lVar3 == 0))
  {
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)LIBJOIJMLDO;
    thunk_FUN_01c20e04(args->m_Items,LIBJOIJMLDO);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_11737/*"ScreenTypeExtension.ToSceneType: unknown screen '{0}'!"*/,args,(MethodInfo *)0x0);
    return 0xb;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static bool FCEPPBHEFLH(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344B5D4]
// MEJPIPJPKNP$$FCEPPBHEFLH @ RVA 0x344B5D4

bool MEJPIPJPKNP__FCEPPBHEFLH(int32_t NFOBCFADDHA,MethodInfo *method)

{
  return NFOBCFADDHA - 3U < 5;
}


// ===== public static string GDFIHPLOOGM(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344B5E4]
// MEJPIPJPKNP$$GDFIHPLOOGM @ RVA 0x344B5E4

System_String_o * MEJPIPJPKNP__GDFIHPLOOGM(int32_t NFOBCFADDHA,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568276 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8967/*"MenuButtons.Shop_normal"*/);
    FUN_01bab630(&StringLiteral_8956/*"MenuButtons.Exit_normal"*/);
    FUN_01bab630(&StringLiteral_8959/*"MenuButtons.Map_normal"*/);
    FUN_01bab630(&StringLiteral_8952/*"MenuButtons.Dojo_normal"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_8962/*"MenuButtons.Profile_normal"*/);
    DAT_04568276 = 1;
  }
  if (NFOBCFADDHA - 3U < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_8952/*"MenuButtons.Dojo_normal"*/_03fc6828)[(int)(NFOBCFADDHA - 3U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static string LJOKKJPBMGO(DBMPKPJGIPI NFOBCFADDHA)  [RVA 0x344B680]
// MEJPIPJPKNP$$LJOKKJPBMGO @ RVA 0x344B680

System_String_o * MEJPIPJPKNP__LJOKKJPBMGO(int32_t NFOBCFADDHA,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568277 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12054/*"Shop_Title"*/);
    FUN_01bab630(&StringLiteral_6041/*"Exit_title"*/);
    FUN_01bab630(&StringLiteral_10508/*"Profile_Title"*/);
    FUN_01bab630(&StringLiteral_8835/*"Map_Title"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5457/*"Dojo_Title"*/);
    DAT_04568277 = 1;
  }
  if (NFOBCFADDHA - 3U < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_5457/*"Dojo_Title"*/_03fc6858)[(int)(NFOBCFADDHA - 3U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}

