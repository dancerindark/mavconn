/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "camera_image_message_t.h"

static int __camera_image_message_t_hash_computed;
static int64_t __camera_image_message_t_hash;
 
int64_t __camera_image_message_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __camera_image_message_t_get_hash)
            return 0;
 
    const __lcm_hash_ptr cp = { p, (void*)__camera_image_message_t_get_hash };
    (void) cp;
 
    int64_t hash = 0xf40271297305da40LL
         + __int64_t_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;
 
    return (hash<<1) + ((hash>>63)&1);
}
 
int64_t __camera_image_message_t_get_hash(void)
{
    if (!__camera_image_message_t_hash_computed) {
        __camera_image_message_t_hash = __camera_image_message_t_hash_recursive(NULL);
        __camera_image_message_t_hash_computed = 1;
    }
 
    return __camera_image_message_t_hash;
}
 
int __camera_image_message_t_encode_array(void *buf, int offset, int maxlen, const camera_image_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].camera_name), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].camera_params, 4);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_width), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].jpeg_size), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, p[element].jpeg_image_data, p[element].jpeg_size);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, p[element].camera_pose, 6);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int camera_image_message_t_encode(void *buf, int offset, int maxlen, const camera_image_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __camera_image_message_t_get_hash();
 
    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    thislen = __camera_image_message_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int __camera_image_message_t_encoded_array_size(const camera_image_message_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {
 
        size += __int64_t_encoded_array_size(&(p[element].utime), 1);
 
        size += __string_encoded_array_size(&(p[element].camera_name), 1);
 
        size += __float_encoded_array_size(p[element].camera_params, 4);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_x), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_y), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_width), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_height), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].jpeg_size), 1);
 
        size += __int8_t_encoded_array_size(p[element].jpeg_image_data, p[element].jpeg_size);
 
        size += __double_encoded_array_size(p[element].camera_pose, 6);
 
    }
    return size;
}
 
int camera_image_message_t_encoded_size(const camera_image_message_t *p)
{
    return 8 + __camera_image_message_t_encoded_array_size(p, 1);
}
 
int __camera_image_message_t_decode_array(const void *buf, int offset, int maxlen, camera_image_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].camera_name), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].camera_params, 4);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_width), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].jpeg_size), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        p[element].jpeg_image_data = (int8_t*) lcm_malloc(sizeof(int8_t) * p[element].jpeg_size);
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, p[element].jpeg_image_data, p[element].jpeg_size);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, p[element].camera_pose, 6);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int __camera_image_message_t_decode_array_cleanup(camera_image_message_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_decode_array_cleanup(&(p[element].utime), 1);
 
        __string_decode_array_cleanup(&(p[element].camera_name), 1);
 
        __float_decode_array_cleanup(p[element].camera_params, 4);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_x), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_y), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_width), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_height), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].jpeg_size), 1);
 
        __int8_t_decode_array_cleanup(p[element].jpeg_image_data, p[element].jpeg_size);
        if (p[element].jpeg_image_data) free(p[element].jpeg_image_data);
 
        __double_decode_array_cleanup(p[element].camera_pose, 6);
 
    }
    return 0;
}
 
int camera_image_message_t_decode(const void *buf, int offset, int maxlen, camera_image_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __camera_image_message_t_get_hash();
 
    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;
 
    thislen = __camera_image_message_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int camera_image_message_t_decode_cleanup(camera_image_message_t *p)
{
    return __camera_image_message_t_decode_array_cleanup(p, 1);
}
 
int __camera_image_message_t_clone_array(const camera_image_message_t *p, camera_image_message_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_clone_array(&(p[element].utime), &(q[element].utime), 1);
 
        __string_clone_array(&(p[element].camera_name), &(q[element].camera_name), 1);
 
        __float_clone_array(p[element].camera_params, q[element].camera_params, 4);
 
        __int32_t_clone_array(&(p[element].roi_x), &(q[element].roi_x), 1);
 
        __int32_t_clone_array(&(p[element].roi_y), &(q[element].roi_y), 1);
 
        __int32_t_clone_array(&(p[element].roi_width), &(q[element].roi_width), 1);
 
        __int32_t_clone_array(&(p[element].roi_height), &(q[element].roi_height), 1);
 
        __int64_t_clone_array(&(p[element].jpeg_size), &(q[element].jpeg_size), 1);
 
        q[element].jpeg_image_data = (int8_t*) lcm_malloc(sizeof(int8_t) * q[element].jpeg_size);
        __int8_t_clone_array(p[element].jpeg_image_data, q[element].jpeg_image_data, p[element].jpeg_size);
 
        __double_clone_array(p[element].camera_pose, q[element].camera_pose, 6);
 
    }
    return 0;
}
 
camera_image_message_t *camera_image_message_t_copy(const camera_image_message_t *p)
{
    camera_image_message_t *q = (camera_image_message_t*) malloc(sizeof(camera_image_message_t));
    __camera_image_message_t_clone_array(p, q, 1);
    return q;
}
 
void camera_image_message_t_destroy(camera_image_message_t *p)
{
    __camera_image_message_t_decode_array_cleanup(p, 1);
    free(p);
}
 
int camera_image_message_t_publish(lcm_t *lc, const char *channel, const camera_image_message_t *p)
{
      int max_data_size = camera_image_message_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = camera_image_message_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _camera_image_message_t_subscription_t {
    camera_image_message_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void camera_image_message_t_handler_stub (const lcm_recv_buf_t *rbuf, 
                            const char *channel, void *userdata)
{
    int status;
    camera_image_message_t p;
    memset(&p, 0, sizeof(camera_image_message_t));
    status = camera_image_message_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding camera_image_message_t!!!\n", status);
        return;
    }

    camera_image_message_t_subscription_t *h = (camera_image_message_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    camera_image_message_t_decode_cleanup (&p);
}

camera_image_message_t_subscription_t* camera_image_message_t_subscribe (lcm_t *lcm, 
                    const char *channel, 
                    camera_image_message_t_handler_t f, void *userdata)
{
    camera_image_message_t_subscription_t *n = (camera_image_message_t_subscription_t*)
                       malloc(sizeof(camera_image_message_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel, 
                                 camera_image_message_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg camera_image_message_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int camera_image_message_t_unsubscribe(lcm_t *lcm, camera_image_message_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr, 
           "couldn't unsubscribe camera_image_message_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

