// OGMFFOMHGIA$$FOKFAIPDIMB @ RVA 0x31D5304

float OGMFFOMHGIA__FOKFAIPDIMB
                (SimpleJSON_JSONNode_o *JHMENEKPIBO,float HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *ODAMFBHJKIH;
  MethodInfo *extraout_x1;
  float fVar2;
  float fStack_24;
  
  if ((DAT_04566cd5 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566cd5 = 1;
    method = extraout_x1;
  }
  fStack_24 = 0.0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo,method);
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  fVar2 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ODAMFBHJKIH = (System_String_o *)
                  (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNPPAHHCBOM_TypeInfo);
    }
    bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&fStack_24,(MethodInfo *)0x0);
    fVar2 = fStack_24;
    if (!bVar1) {
      fVar2 = HBFDLMOKDGA;
    }
  }
  return fVar2;
}

