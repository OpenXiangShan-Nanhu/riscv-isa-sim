// vfredsum: vd[0] =  sum( vs2[*] , vs1[0] )
bool is_propagate = false;
#ifndef CPU_NANHU
VI_VFP_VV_LOOP_REDUCTION
({
  vd_0 = f16_add(vd_0, vs2);
},
{
  vd_0 = f32_add(vd_0, vs2);
},
{
  vd_0 = f64_add(vd_0, vs2);
})
#else
VI_VFP_VV_LOOP_UNORDER_REDUCTION_SUM()
#endif
