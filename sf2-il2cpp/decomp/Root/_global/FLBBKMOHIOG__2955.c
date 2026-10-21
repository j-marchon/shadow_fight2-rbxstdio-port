// TypeDefIndex 2955
// Namespace: 
// public class FLBBKMOHIOG
// Fields:
//   protected Random HFDKBNJOJOB; // 0x10
//   private static int MHHIFGCEEMK; // 0x0

// ===== private static int MHLJDOICGOG()  [RVA 0x3493240]
// FLBBKMOHIOG$$MHLJDOICGOG @ RVA 0x3493240

/* WARNING: Control flow encountered bad instruction data */

int32_t FLBBKMOHIOG__MHLJDOICGOG(MethodInfo *method)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== private AFLJMCMKCIG DHKKOOOACPH(string CGHKDFAHLBO, string JJBEJDDAFNK)  [RVA 0x34932A4]
// FLBBKMOHIOG$$DHKKOOOACPH @ RVA 0x34932A4

/* WARNING: Control flow encountered unimplemented instructions */

AFLJMCMKCIG_o *
FLBBKMOHIOG__DHKKOOOACPH
          (FLBBKMOHIOG_o *__this,System_String_o *CGHKDFAHLBO,System_String_o *JJBEJDDAFNK,
          MethodInfo *method)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== public JCPHJPJJLCK MJJIIFENDHL(SFSObject AIHDHHOFOMB)  [RVA 0x34933F8]
// FLBBKMOHIOG$$MJJIIFENDHL @ RVA 0x34933F8

/* WARNING: Control flow encountered unimplemented instructions */

JCPHJPJJLCK_o *
FLBBKMOHIOG__MJJIIFENDHL
          (FLBBKMOHIOG_o *__this,Sfs2X_Entities_Data_SFSObject_o *AIHDHHOFOMB,MethodInfo *method)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== public PGICCMFLDPI JCLBGAPJIFP()  [RVA 0x3493468]
// FLBBKMOHIOG$$JCLBGAPJIFP @ RVA 0x3493468

PGICCMFLDPI_o * FLBBKMOHIOG__JCLBGAPJIFP(FLBBKMOHIOG_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  PGICCMFLDPI_o *__this_00;
  MethodInfo *extraout_x1;
  double dVar2;
  System_DateTime_Fields local_38;
  System_TimeSpan_Fields local_30;
  System_DateTime_Fields local_28;
  
  if ((DAT_0456843b & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_0456843b = 1;
    method = extraout_x1;
  }
  local_30._ticks = 0;
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo,method);
  PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_28._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
  local_38._dateData = 0;
  System_DateTime___ctor((System_DateTime_o)&local_38,0x7b2,1,1,(MethodInfo *)0x0);
  local_30._ticks =
       (int64_t)System_DateTime__Subtract
                          ((System_DateTime_o)&local_28,(System_DateTime_o)local_38._dateData,
                           (MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar2 = System_TimeSpan__get_TotalMilliseconds((System_TimeSpan_o)&local_30,(MethodInfo *)0x0);
  if (__this_00 != (PGICCMFLDPI_o *)0x0) {
    iVar1 = -0x8000000000000000;
    if (dVar2 != INFINITY) {
      iVar1 = (long)dVar2;
    }
    (__this_00->fields).GDKPGIBMFPA = iVar1;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SFSObject LHPJJJHMOGC(int CJNHFNHJHPE)  [RVA 0x3493580]
// FLBBKMOHIOG$$LHPJJJHMOGC @ RVA 0x3493580

/* WARNING: Control flow encountered unimplemented instructions */

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__LHPJJJHMOGC(FLBBKMOHIOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456843c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo,CJNHFNHJHPE);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    DAT_0456843c = 1;
  }
  thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== public SFSObject IIKIKJJCNNM(IMessage IMMNELPBGIF)  [RVA 0x34936D4]
// FLBBKMOHIOG$$IIKIKJJCNNM @ RVA 0x34936D4

/* WARNING: Control flow encountered unimplemented instructions */

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__IIKIKJJCNNM
          (FLBBKMOHIOG_o *__this,Google_Protobuf_IMessage_o *IMMNELPBGIF,MethodInfo *method)

{
  Google_Protobuf_IMessage_o *extraout_x1;
  
  if ((DAT_0456843d & 1) == 0) {
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    DAT_0456843d = 1;
    IMMNELPBGIF = extraout_x1;
  }
  thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo,IMMNELPBGIF);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== private static void IIHFIAGNGOJ(ref SFSObject HBHPFKJMGCK)  [RVA 0x3493744]
// FLBBKMOHIOG$$IIHFIAGNGOJ @ RVA 0x3493744

/* WARNING: Control flow encountered unimplemented instructions */

void FLBBKMOHIOG__IIHFIAGNGOJ(Sfs2X_Entities_Data_SFSObject_o **HBHPFKJMGCK,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  Sfs2X_Entities_Data_SFSObject_o *pSVar2;
  
  method_00 = (MethodInfo *)HBHPFKJMGCK;
  if ((DAT_0456843e & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_18911/*"id"*/);
    DAT_0456843e = 1;
  }
  pSVar2 = *HBHPFKJMGCK;
  iVar1 = FLBBKMOHIOG__MHLJDOICGOG(method_00);
  if (pSVar2 != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}


// ===== public void .ctor()  [RVA 0x34937A4]
// FLBBKMOHIOG$$.ctor @ RVA 0x34937A4

void FLBBKMOHIOG___ctor(FLBBKMOHIOG_o *__this,MethodInfo *method)

{
  int32_t Seed;
  System_Random_o *__this_00;
  System_DateTime_Fields local_28;
  
  if ((DAT_0456843f & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_Random_TypeInfo);
    DAT_0456843f = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_28._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
  Seed = System_DateTime__get_Millisecond((System_DateTime_o)&local_28,(MethodInfo *)0x0);
  __this_00 = (System_Random_o *)thunk_FUN_01bda818(System_Random_TypeInfo);
  System_Random___ctor(__this_00,Seed,(MethodInfo *)0x0);
  (__this->fields).HFDKBNJOJOB = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}


// ===== public virtual SFSObject LDEMFDHJOFH(string NNNFAACIHBK, string ACLOBCBNDIJ, int CEHOJOFLMFF, PGICCMFLDPI LFJGFLNMBMC, JSONObject NKLHCIIJBLL)  [RVA 0x3493864]
// FLBBKMOHIOG$$LDEMFDHJOFH @ RVA 0x3493864

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__LDEMFDHJOFH
          (FLBBKMOHIOG_o *__this,System_String_o *NNNFAACIHBK,System_String_o *ACLOBCBNDIJ,
          int32_t CEHOJOFLMFF,PGICCMFLDPI_o *LFJGFLNMBMC,SimpleJSON_JSONObject_o *NKLHCIIJBLL,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  DBNIPENAEKO_o *__this_00;
  FLBBKMOHIOG_o *__this_01;
  AFLJMCMKCIG_o *pAVar4;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *pGVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *s;
  SimpleJSON_JSONNode_o *pSVar8;
  Sfs2X_Entities_Data_SFSObject_o *__this_02;
  MethodInfo *pMVar9;
  undefined1 auVar10 [16];
  Sfs2X_Entities_Data_SFSObject_o *local_48;
  
  pMVar9 = (MethodInfo *)(ulong)(uint)CEHOJOFLMFF;
  if ((DAT_04568440 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_247);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_248);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_249);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_250);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_251);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_252);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clear__);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    DAT_04568440 = 1;
  }
  local_48 = (Sfs2X_Entities_Data_SFSObject_o *)0x0;
  pSVar3 = System_String__Concat(NNNFAACIHBK,ACLOBCBNDIJ,(MethodInfo *)0x0);
  pSVar3 = Sfs2X_Util_PasswordUtil__MD5Password(pSVar3,(MethodInfo *)0x0);
  __this_00 = (DBNIPENAEKO_o *)thunk_FUN_01bda818(DBNIPENAEKO_TypeInfo);
  DBNIPENAEKO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (DBNIPENAEKO_o *)0x0) goto LAB_03593ce4;
  (__this_00->fields).LCAENFFHHEI = CEHOJOFLMFF;
  pAVar4 = FLBBKMOHIOG__DHKKOOOACPH(__this_01,ACLOBCBNDIJ,pSVar3,pMVar9);
  (__this_00->fields).HBCNHAMIMGF = pAVar4;
  auVar10 = thunk_FUN_01c20e04();
  iVar2 = FLBBKMOHIOG__BCGPEHGEBCM(auVar10._0_8_,auVar10._8_8_);
  pSVar3 = IMAPABEJECG__ADBBGOBBAJA((MethodInfo *)0x0);
  KJKALEDHEIK__GDDGDGNIKPK(pSVar3,LFJGFLNMBMC,(MethodInfo *)0x0);
  if ((iVar2 != 0) && (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0), !bVar1)) {
    pGVar5 = (__this_00->fields).BMMFCMJLFKN;
    if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0)
    goto LAB_03593ce4;
    Google_Protobuf_Collections_RepeatedField<object>__Clear
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clear__);
    pGVar5 = (__this_00->fields).BMMFCMJLFKN;
    pAVar4 = (AFLJMCMKCIG_o *)thunk_FUN_01bda818(AFLJMCMKCIG_TypeInfo);
    AFLJMCMKCIG___ctor(pAVar4,(MethodInfo *)0x0);
    if (pAVar4 == (AFLJMCMKCIG_o *)0x0) goto LAB_03593ce4;
    (pAVar4->fields).EMDNDLOODLG = iVar2;
    AFLJMCMKCIG__IIKPNGJAJIH(pAVar4,pSVar3,(MethodInfo *)0x0);
    if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0)
    goto LAB_03593ce4;
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,(Il2CppObject *)pAVar4,
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality
                    ((SimpleJSON_JSONNode_o *)NKLHCIIJBLL,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_247,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pMVar9 = (MethodInfo *)0x0;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_248,(MethodInfo *)0x0);
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,pMVar9);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    NKLHCIIJBLL = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
    SimpleJSON_JSONObject___ctor(NKLHCIIJBLL,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_249,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pMVar9 = (MethodInfo *)0x0;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_250,(MethodInfo *)0x0);
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,pMVar9);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    s = EOAOCPLIKOI__GLFGHFIEIPL((MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar8 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (NKLHCIIJBLL == (SimpleJSON_JSONObject_o *)0x0) {
LAB_03593ce4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(NKLHCIIJBLL->klass->vtable)._8_set_Item.methodPtr)
              (NKLHCIIJBLL,pSVar3,pSVar8,(NKLHCIIJBLL->klass->vtable)._8_set_Item.method);
  }
  else if (NKLHCIIJBLL == (SimpleJSON_JSONObject_o *)0x0) goto LAB_03593ce4;
  pSVar3 = (System_String_o *)
           (*(NKLHCIIJBLL->klass->vtable)._3_ToString.methodPtr)
                     (NKLHCIIJBLL,(NKLHCIIJBLL->klass->vtable)._3_ToString.method);
  DBNIPENAEKO__JGAPLKDDCOI(__this_00,pSVar3,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_251,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pMVar9 = (MethodInfo *)0x0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_252,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,pMVar9);
  pMVar9 = (MethodInfo *)0x0;
  pSVar3 = System_String__Concat(pSVar3,(__this_00->fields).BHMHGIBMMMB,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  __this_02 = (Sfs2X_Entities_Data_SFSObject_o *)
              thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
  Sfs2X_Entities_Data_SFSObject___ctor(__this_02,(MethodInfo *)0x0);
  local_48 = __this_02;
  FLBBKMOHIOG__IPIICMBKHLK(&local_48,(Google_Protobuf_IMessage_o *)__this_00,pMVar9);
  return __this_02;
}


// ===== public SFSObject BHHEHDLFMDN(long CJNHFNHJHPE)  [RVA 0x3493E44]
// FLBBKMOHIOG$$BHHEHDLFMDN @ RVA 0x3493E44

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__BHHEHDLFMDN(FLBBKMOHIOG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  Sfs2X_Entities_Data_SFSObject_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_01;
  Sfs2X_Entities_Data_SFSObject_o *local_28;
  
  if ((DAT_04568441 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    DAT_04568441 = 1;
  }
  __this_00 = (Sfs2X_Entities_Data_SFSObject_o *)
              thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
  Sfs2X_Entities_Data_SFSObject___ctor(__this_00,(MethodInfo *)0x0);
  local_28 = __this_00;
  __this_01 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_01->fields).value_ = CJNHFNHJHPE;
    FLBBKMOHIOG__IPIICMBKHLK(&local_28,(Google_Protobuf_IMessage_o *)__this_01,method);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected static void IPIICMBKHLK(ref SFSObject CFJOHIDMOJG, IMessage IMMNELPBGIF)  [RVA 0x3493624]
// FLBBKMOHIOG$$IPIICMBKHLK @ RVA 0x3493624

void FLBBKMOHIOG__IPIICMBKHLK
               (Sfs2X_Entities_Data_SFSObject_o **CFJOHIDMOJG,
               Google_Protobuf_IMessage_o *IMMNELPBGIF,MethodInfo *method)

{
  System_Byte_array *buf;
  Sfs2X_Util_ByteArray_o *__this;
  MethodInfo *method_00;
  Sfs2X_Entities_Data_SFSObject_o *__this_00;
  
  if ((DAT_04568442 & 1) == 0) {
    FUN_01bab630(&Sfs2X_Util_ByteArray_TypeInfo);
    FUN_01bab630(&StringLiteral_16576/*"b"*/);
    DAT_04568442 = 1;
  }
  __this_00 = *CFJOHIDMOJG;
  buf = Google_Protobuf_MessageExtensions__ToByteArray(IMMNELPBGIF,(MethodInfo *)0x0);
  __this = (Sfs2X_Util_ByteArray_o *)thunk_FUN_01bda818(Sfs2X_Util_ByteArray_TypeInfo);
  Sfs2X_Util_ByteArray___ctor(__this,buf,(MethodInfo *)0x0);
  if (__this_00 != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    Sfs2X_Entities_Data_SFSObject__PutByteArray
              (__this_00,StringLiteral_16576/*"b"*/,__this,(MethodInfo *)0x0);
    FLBBKMOHIOG__IIHFIAGNGOJ(CFJOHIDMOJG,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SFSObject NAEOFHBNGEB(string CJNHFNHJHPE)  [RVA 0x3493EE8]
// FLBBKMOHIOG$$NAEOFHBNGEB @ RVA 0x3493EE8

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__NAEOFHBNGEB(FLBBKMOHIOG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  Sfs2X_Entities_Data_SFSObject_o *__this_00;
  Google_Protobuf_WellKnownTypes_StringValue_o *__this_01;
  MethodInfo *method_00;
  Sfs2X_Entities_Data_SFSObject_o *local_28;
  
  if ((DAT_04568443 & 1) == 0) {
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    DAT_04568443 = 1;
  }
  __this_00 = (Sfs2X_Entities_Data_SFSObject_o *)
              thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
  Sfs2X_Entities_Data_SFSObject___ctor(__this_00,(MethodInfo *)0x0);
  local_28 = __this_00;
  __this_01 = (Google_Protobuf_WellKnownTypes_StringValue_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
  Google_Protobuf_WellKnownTypes_StringValue___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Google_Protobuf_WellKnownTypes_StringValue_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Google_Protobuf_WellKnownTypes_StringValue__set_Value(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    FLBBKMOHIOG__IPIICMBKHLK(&local_28,(Google_Protobuf_IMessage_o *)__this_01,method_00);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private DLIONECMCGE BCGPEHGEBCM()  [RVA 0x3493CE8]
// FLBBKMOHIOG$$BCGPEHGEBCM @ RVA 0x3493CE8

/* WARNING: Control flow encountered unimplemented instructions */

int32_t FLBBKMOHIOG__BCGPEHGEBCM(FLBBKMOHIOG_o *__this,MethodInfo *method)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

