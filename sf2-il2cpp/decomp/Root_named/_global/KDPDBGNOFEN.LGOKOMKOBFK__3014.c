// TypeDefIndex 3014
// Namespace: 
// [CompilerGenerated]
// private sealed class KDPDBGNOFEN.LGOKOMKOBFK
// Fields:
//   public KDPDBGNOFEN <>4__this; // 0x10
//   public int clientMaxVersion; // 0x18
//   public PGICCMFLDPI time; // 0x20
//   public JSONObject extraData; // 0x28

// ===== internal void DFICFAGPMHF()  [RVA 0x34B109C]
// KDPDBGNOFEN.LGOKOMKOBFK$$DFICFAGPMHF @ RVA 0x34B109C

void KDPDBGNOFEN_LGOKOMKOBFK__DFICFAGPMHF(KDPDBGNOFEN_LGOKOMKOBFK_o *__this,MethodInfo *method)

{
  KDPDBGNOFEN_o *pKVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Sfs2X_Entities_Data_ISFSObject_o *parameters;
  Sfs2X_Requests_LoginRequest_o *__this_00;
  Sfs2X_SmartFox_o *__this_01;
  MethodInfo *extraout_x1;
  System_String_o *zoneName;
  FLBBKMOHIOG_o *pFVar4;
  
  if ((DAT_0456855d & 1) == 0) {
    FUN_01bab630(&Sfs2X_Requests_LoginRequest_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456855d = 1;
    method = extraout_x1;
  }
  pKVar1 = (__this->fields).__4__this;
  if (pKVar1 != (KDPDBGNOFEN_o *)0x0) {
    zoneName = (pKVar1->fields).LHBDPNOCKHG;
    pFVar4 = (pKVar1->fields).KPDFPANJBJB;
    pSVar2 = KDPDBGNOFEN__ONKNEALNBBB(pKVar1,method);
    pSVar3 = HLIDLFKDMHG__PJNBDOPPFLA((MethodInfo *)0x0);
    if (pFVar4 != (FLBBKMOHIOG_o *)0x0) {
      parameters = (Sfs2X_Entities_Data_ISFSObject_o *)
                   (*(pFVar4->klass->vtable)._4_LDEMFDHJOFH.methodPtr)
                             (pFVar4,pSVar2,pSVar3,(ulong)(uint)(__this->fields).clientMaxVersion,
                              (__this->fields).time,(__this->fields).extraData,
                              (pFVar4->klass->vtable)._4_LDEMFDHJOFH.method);
      __this_00 = (Sfs2X_Requests_LoginRequest_o *)
                  thunk_FUN_01bda818(Sfs2X_Requests_LoginRequest_TypeInfo);
      Sfs2X_Requests_LoginRequest___ctor
                (__this_00,StringLiteral_1/*""*/,StringLiteral_1/*""*/,zoneName,parameters,(MethodInfo *)0x0);
      pKVar1 = (__this->fields).__4__this;
      if ((pKVar1 != (KDPDBGNOFEN_o *)0x0) &&
         (__this_01 = (pKVar1->fields).EBJCMEOKKOK, __this_01 != (Sfs2X_SmartFox_o *)0x0)) {
        Sfs2X_SmartFox__Send(__this_01,(Sfs2X_Requests_IRequest_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34AFBAC]
// KDPDBGNOFEN.LGOKOMKOBFK$$.ctor @ RVA 0x34AFBAC

void KDPDBGNOFEN_LGOKOMKOBFK___ctor(KDPDBGNOFEN_LGOKOMKOBFK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

